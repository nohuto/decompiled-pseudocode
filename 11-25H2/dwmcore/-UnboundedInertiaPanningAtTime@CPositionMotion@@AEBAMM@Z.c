/*
 * XREFs of ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x180222EB8
 * Callers:
 *     ?CalculateNaturalEndpoint@CPositionMotion@@MEBAMXZ @ 0x180222E00 (-CalculateNaturalEndpoint@CPositionMotion@@MEBAMXZ.c)
 *     ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ @ 0x180222E60 (-AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ.c)
 * Callees:
 *     logf_0 @ 0x1802E88E4 (logf_0.c)
 *     powf_0 @ 0x1802E88FC (powf_0.c)
 */

float __fastcall CPositionMotion::UnboundedInertiaPanningAtTime(CPositionMotion *this, float a2)
{
  float v3; // xmm6_4

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 1.0) & _xmm) <= 0.0000011920929 )
    return a2 * *((float *)this + 18);
  if ( COERCE_FLOAT(*((_DWORD *)this + 14) & _xmm) < 0.0000011920929 || (*((_BYTE *)this + 100) & 1) == 0 )
    return 0.0;
  v3 = (float)(powf_0(*((float *)this + 14), a2) - 1.0) * *((float *)this + 18);
  return v3 / logf_0(*((float *)this + 14));
}
