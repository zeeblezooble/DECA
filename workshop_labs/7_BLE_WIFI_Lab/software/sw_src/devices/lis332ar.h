/******************************************************************************
 * NAME:         lis332ar.h
 *
 * DESCRIPTION:  MEMS 3-axix, 2g analog-output accelerometer.
 *
 * NOTES:
 *
 *
 * REFERENCES:
 *   None.
 *
 * HISTORY:
 *   2015/5/2:  Initial version
 ******************************************************************************/

#ifndef LIS332AR_H_
#define LIS332AR_H_

/******************************************************************************
 * INCLUDE FILES
 ******************************************************************************/

#include "alt_types.h"


/******************************************************************************
 * FUNCTION PROTOTYPES
 ******************************************************************************/

void lis332arInit (void);
void lis332arRead (alt_u16 *x, alt_u16 *y, alt_u16 *z);

#endif /* LIS332AR_H_ */