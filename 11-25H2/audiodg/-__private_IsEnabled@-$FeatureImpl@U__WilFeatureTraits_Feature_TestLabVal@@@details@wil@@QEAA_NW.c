/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x140071F78
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x140070C0C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@w.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1400705E8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x140071B54 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLabVal>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLabVal>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLabVal>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
