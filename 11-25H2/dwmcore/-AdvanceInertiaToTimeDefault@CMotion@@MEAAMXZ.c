/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ @ 0x180228710
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ @ 0x180222E60 (-AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ.c)
 *     ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x18022AFB0 (-AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ.c)
 * Callees:
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x1802B74D8 (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CMotion::AdvanceInertiaToTimeDefault(CMotion *this)
{
  float v1; // xmm0_4
  float v3; // xmm6_4
  float v5; // xmm2_4
  double v6; // xmm0_8
  float v7; // xmm3_4

  v1 = *((float *)this + 22);
  v3 = *((float *)this + 11);
  if ( v3 > *((float *)this + 15) || v1 > v3 )
  {
    if ( (*((_BYTE *)this + 100) & 1) != 0 )
    {
      v5 = 0.0;
      if ( *((float *)this + 12) != 0.0 )
      {
        v6 = (*(double (__fastcall **)(CMotion *))(*(_QWORD *)this + 32LL))(this);
        v5 = *(float *)&v6;
      }
      v7 = *((float *)this + 22);
      if ( v7 <= v3 )
        v7 = *((float *)this + 15);
      CMotion::InitializeDefaultBoundaryInertiaModifier(this, v3, v5, v7, *((float *)this + 12));
    }
    else
    {
      return fminf(fmaxf(v3, v1), *((float *)this + 15));
    }
  }
  return v3;
}
