/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800B54B8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800AE580 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelec.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800AE66C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@deta.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusionBackport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800F01AC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusion.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AE1C4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@deta.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B0088 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAAX_NW.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxAccOptimization>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxAccOptimization>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxAccOptimization>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
