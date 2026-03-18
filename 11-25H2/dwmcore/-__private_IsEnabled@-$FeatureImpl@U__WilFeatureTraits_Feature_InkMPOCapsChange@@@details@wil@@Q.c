/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@details@wil@@QEAA_NXZ @ 0x18029CF4C
 * Callers:
 *     ?IsOverlayRevokable@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180189760 (-IsOverlayRevokable@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ @ 0x1801C5A68 (-TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ.c)
 *     ?PostPresentForComputeScribble@CScribbleSwapChain@@IEAAX_N@Z @ 0x180247740 (-PostPresentForComputeScribble@CScribbleSwapChain@@IEAAX_N@Z.c)
 *     ?PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z @ 0x18029CAD0 (-PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18029C7D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029CB90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@details@wil@@QEAAX_NW4.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkMPOCapsChange>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkMPOCapsChange>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkMPOCapsChange>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
