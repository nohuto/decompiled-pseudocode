/*
 * XREFs of ?TimeToMinimumVelocity@CPositionMotion@@MEBAMXZ @ 0x1802243A0
 * Callers:
 *     <none>
 * Callees:
 *     logf_0 @ 0x1802DF644 (logf_0.c)
 */

float __fastcall CPositionMotion::TimeToMinimumVelocity(CPositionMotion *this)
{
  float v2; // xmm6_4
  float v3; // xmm7_4
  float v4; // xmm0_4
  float v5; // xmm6_4

  v2 = 0.0;
  LODWORD(v3) = *((_DWORD *)this + 18) & _xmm;
  if ( v3 > *((float *)this + 20) )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 1.0) & _xmm) > 0.0000011920929 )
    {
      if ( COERCE_FLOAT(*((_DWORD *)this + 14) & _xmm) >= 0.0000011920929 && (*((_BYTE *)this + 100) & 1) != 0 )
      {
        v4 = logf_0(*((float *)this + 20));
        v5 = v4 - logf_0(v3);
        return v5 / logf_0(*((float *)this + 14));
      }
    }
    else
    {
      return fmaxf(
               0.0,
               ((float)((float)(*((float *)this + 18) > 0.0) * 3.4028235e38) - *((float *)this + 17))
             / *((float *)this + 18));
    }
  }
  return v2;
}
