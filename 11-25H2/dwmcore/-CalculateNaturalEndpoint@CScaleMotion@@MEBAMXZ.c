/*
 * XREFs of ?CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ @ 0x18022FAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x18022AFE0 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CScaleMotion::CalculateNaturalEndpoint(CScaleMotion *this)
{
  float v2; // xmm0_4
  float v4; // xmm0_4

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 1.0) & _xmm) > 0.0000011920929 )
  {
    if ( COERCE_FLOAT(*((_DWORD *)this + 14) & _xmm) >= 0.0000011920929 && (*((_BYTE *)this + 100) & 1) != 0 )
    {
      v4 = (*(float (__fastcall **)(CScaleMotion *))(*(_QWORD *)this + 40LL))(this);
      return fmaxf(0.001, CScaleMotion::UnboundedValueAtTime(this, v4));
    }
  }
  else
  {
    v2 = *((float *)this + 18);
    if ( v2 < 0.0 )
      return FLOAT_0_001;
    if ( v2 != 0.0 )
      return FLOAT_3_4028235e38;
  }
  return *((float *)this + 17);
}
