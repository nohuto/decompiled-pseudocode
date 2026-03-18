/*
 * XREFs of ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801009B0
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800FF480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801012A0 (-DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 * Callees:
 *     ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z @ 0x18004C7F0 (-DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1801A6350 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18027AD9C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(COcclusionContext *a1, struct IUnknown *a2, __int64 a3, char a4)
{
  bool IsSwapChain; // bp

  if ( *((_DWORD *)a1 + 428) || !COcclusionContext::DoesImageOcclude(a1, a2, a4 & 1) )
    return 0LL;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    COcclusionContext::CollectRectangleForOcclusion(a1, a3, 0LL, 0LL);
    return 0LL;
  }
  IsSwapChain = 0;
  if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[2].Release)(a2, 42LL) )
    IsSwapChain = CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)a2);
  COcclusionContext::CollectRectangleForOcclusion(a1, a3, IsSwapChain, 0LL);
  return 0LL;
}
