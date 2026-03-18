/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MultimonPrimaryMinFrequency@@@details@wil@@QEAA_NXZ @ 0x18025143C
 * Callers:
 *     ?CalcApprovedPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIPEAVIOverlayMonitorTarget@@@Z @ 0x1801E4380 (-CalcApprovedPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIPEAVIOverlayMonitorTarget@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MultimonPrimaryMinFrequency@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180251478 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MultimonPrimaryMinFreque.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultimonPrimaryMinFrequency@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802515A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultimonPrimaryMinFrequency@@@details@wil.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultimonPrimaryMinFrequency>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultimonPrimaryMinFrequency>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultimonPrimaryMinFrequency>::ReportUsage(a1, v3);
  return v2;
}
