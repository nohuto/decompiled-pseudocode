/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DL42009416@@@details@wil@@QEAA_NXZ @ 0x1800A5DBC
 * Callers:
 *     ?InstanceThreadProc@SessionMonitor@@AEAAKXZ @ 0x180085F68 (-InstanceThreadProc@SessionMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DL42009416@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A47B4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DL42009416@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DL42009416@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A5924 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DL42009416@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL42009416>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL42009416>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL42009416>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
