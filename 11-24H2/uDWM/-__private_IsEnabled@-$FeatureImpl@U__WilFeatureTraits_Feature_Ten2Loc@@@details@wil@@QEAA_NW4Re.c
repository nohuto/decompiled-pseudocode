/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800AB2FC
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UexTest7@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800AA644 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UexTest7@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B98C0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerB.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A94F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@A.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AAD34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@QEAAX_NW4Reporting.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Ten2Loc>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Ten2Loc>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Ten2Loc>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
