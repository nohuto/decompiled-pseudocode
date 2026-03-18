/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@details@wil@@QEAA_NXZ @ 0x180260AB0
 * Callers:
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x180218BB0 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18026047C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@detail.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18026077C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@details@wil@@QEAAX_NW4R.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableInkInVRR>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableInkInVRR>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableInkInVRR>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
