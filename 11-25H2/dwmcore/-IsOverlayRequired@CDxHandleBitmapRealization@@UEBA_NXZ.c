/*
 * XREFs of ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18018A0F0
 * Callers:
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x180189CD8 (-IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 *     ?IsOverlayRequired@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18018A0A0 (-IsOverlayRequired@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18018A134 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024BB4C (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@details@wil@@QEAA_NXZ @ 0x18024C1AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResour.c)
 */

char __fastcall CDxHandleBitmapRealization::IsOverlayRequired(CDxHandleBitmapRealization *this)
{
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::GetImpl'::`2'::impl) )
    return (*((_DWORD *)this - 22) & 0x80) != 0;
  if ( (*((_DWORD *)this - 22) & 0x80u) != 0 )
    return 1;
  return *((_BYTE *)this + 67) == 0;
}
