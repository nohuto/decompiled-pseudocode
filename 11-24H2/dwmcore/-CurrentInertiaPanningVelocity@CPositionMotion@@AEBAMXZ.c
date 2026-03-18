/*
 * XREFs of ?CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ @ 0x18021BF10
 * Callers:
 *     ?CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ @ 0x18021BED0 (-CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ.c)
 * Callees:
 *     powf_0 @ 0x1802DF65C (powf_0.c)
 */

float __fastcall CPositionMotion::CurrentInertiaPanningVelocity(CPositionMotion *this)
{
  float v1; // xmm1_4

  v1 = *((float *)this + 12);
  if ( v1 >= *((float *)this + 23) )
    return 0.0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 1.0) & _xmm) <= 0.0000011920929 )
    return *((float *)this + 18);
  if ( COERCE_FLOAT(*((_DWORD *)this + 14) & _xmm) < 0.0000011920929 || (*((_BYTE *)this + 100) & 1) == 0 )
    return 0.0;
  return powf_0(*((float *)this + 14), v1) * *((float *)this + 18);
}
