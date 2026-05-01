/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MercuryADEPTAppBackup@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802D0FC4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180613BE8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistB.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MercuryADEPTAppBackup@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18010D64C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MercuryADEPTAppBackup@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MercuryADEPTAppBackup@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180207288 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MercuryADEPTAppBackup@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MercuryADEPTAppBackup>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MercuryADEPTAppBackup>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MercuryADEPTAppBackup>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
