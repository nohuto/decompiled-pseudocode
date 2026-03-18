/*
 * XREFs of ?CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ @ 0x1802279D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ @ 0x180227A10 (-CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ.c)
 */

float __fastcall CPositionMotion::CurrentInertiaVelocity(CPositionMotion *this)
{
  return CPositionMotion::CurrentInertiaPanningVelocity(this)
       + (float)((float)(*((float *)this + 29) / *((float *)this + 35))
               * (float)(*((float *)this + 34) - *((float *)this + 30)));
}
