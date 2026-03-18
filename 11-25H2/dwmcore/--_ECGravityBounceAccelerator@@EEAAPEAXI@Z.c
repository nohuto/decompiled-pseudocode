/*
 * XREFs of ??_ECGravityBounceAccelerator@@EEAAPEAXI@Z @ 0x1802A9BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CGravityBounceAccelerator *__fastcall CGravityBounceAccelerator::`vector deleting destructor'(
        CGravityBounceAccelerator *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
