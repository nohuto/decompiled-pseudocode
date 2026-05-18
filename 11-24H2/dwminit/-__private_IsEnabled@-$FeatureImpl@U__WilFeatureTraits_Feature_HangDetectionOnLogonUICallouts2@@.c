/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18000D790
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptured@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18000BED8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LogonUIAlwaysHangCaptur.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000B880 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICa.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000CBC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2>::ReportUsage(a1, v5 & 1, 0, v3);
  return v2;
}
