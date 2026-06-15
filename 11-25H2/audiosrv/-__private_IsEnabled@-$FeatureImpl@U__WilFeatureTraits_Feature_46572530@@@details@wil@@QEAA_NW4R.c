/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_46572530@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800E4FCC
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixBTLECommMixFormat@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800E464C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixBTLECommMi.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_46572530@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E438C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_46572530@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_46572530@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E4A28 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_46572530@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_46572530>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_46572530>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_46572530>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
