/*
 * XREFs of ?GetInflation@?$CTargetDirtyBase@$07@@IEBAMXZ @ 0x1800F766C
 * Callers:
 *     ?CalcOcclusion@?$CTargetDirtyBase@$07@@IEAAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1800F75B4 (-CalcOcclusion@-$CTargetDirtyBase@$07@@IEAAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 * Callees:
 *     ?GetInflationScale@CLegacyRenderTarget@@UEBAMXZ @ 0x18003DB30 (-GetInflationScale@CLegacyRenderTarget@@UEBAMXZ.c)
 *     ?UseSuperSample@CLegacyRenderTarget@@UEBA_NXZ @ 0x1800D4510 (-UseSuperSample@CLegacyRenderTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CTargetDirtyBase<8>::GetInflation(__int64 a1)
{
  float result; // xmm0_4
  CLegacyRenderTarget *v3; // rcx
  void (*v4)(void); // rax
  CLegacyRenderTarget *v5; // rcx
  __int64 (*v6)(void); // rax
  char v7; // al

  if ( *(_BYTE *)(a1 + 2312) )
    return 0.0;
  v3 = *(CLegacyRenderTarget **)(a1 + 8);
  v4 = *(void (**)(void))(*(_QWORD *)v3 + 48LL);
  if ( (char *)v4 == (char *)CLegacyRenderTarget::GetInflationScale )
    result = CLegacyRenderTarget::GetInflationScale(v3);
  else
    v4();
  if ( result <= 1.0 )
  {
    v5 = *(CLegacyRenderTarget **)(a1 + 8);
    v6 = *(__int64 (**)(void))(*(_QWORD *)v5 + 40LL);
    if ( (char *)v6 == (char *)CLegacyRenderTarget::UseSuperSample )
      v7 = CLegacyRenderTarget::UseSuperSample(v5);
    else
      v7 = v6();
    if ( v7 )
      return *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    return 0.0;
  }
  return result;
}
