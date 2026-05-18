/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details@wil@@QEAA_NXZ @ 0x18000D7D0
 * Callers:
 *     ??0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z @ 0x18000A8A8 (--0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000B880 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICa.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000CBC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
