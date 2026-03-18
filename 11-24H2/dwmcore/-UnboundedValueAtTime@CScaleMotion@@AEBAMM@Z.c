/*
 * XREFs of ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x18021FD70
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x18021FD40 (-AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ.c)
 *     ?CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ @ 0x1802241A0 (-CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ.c)
 * Callees:
 *     logf_0 @ 0x1802DF644 (logf_0.c)
 *     powf_0 @ 0x1802DF65C (powf_0.c)
 */

float __fastcall CScaleMotion::UnboundedValueAtTime(CScaleMotion *this, float a2)
{
  float v5; // xmm6_4

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 1.0) & _xmm) <= 0.0000011920929 )
    return (float)(a2 * *((float *)this + 18)) + *((float *)this + 17);
  if ( COERCE_FLOAT(*((_DWORD *)this + 14) & _xmm) < 0.0000011920929 || (*((_BYTE *)this + 100) & 1) == 0 )
    return *((float *)this + 17);
  v5 = (float)(powf_0(*((float *)this + 14), a2) - 1.0) * *((float *)this + 18);
  return (float)(v5 / logf_0(*((float *)this + 14))) + *((float *)this + 17);
}
