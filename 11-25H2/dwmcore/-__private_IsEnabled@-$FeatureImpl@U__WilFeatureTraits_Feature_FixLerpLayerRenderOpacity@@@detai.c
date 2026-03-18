/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixLerpLayerRenderOpacity@@@details@wil@@QEAA_NXZ @ 0x180286F30
 * Callers:
 *     ?RenderLayer@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18023EA10 (-RenderLayer@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixLerpLayerRenderOpacity@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180286C84 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixLerpLayerRenderOpacit.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FixLerpLayerRenderOpacity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180286EA8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FixLerpLayerRenderOpacity@@@details@wil@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixLerpLayerRenderOpacity>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixLerpLayerRenderOpacity>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixLerpLayerRenderOpacity>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
