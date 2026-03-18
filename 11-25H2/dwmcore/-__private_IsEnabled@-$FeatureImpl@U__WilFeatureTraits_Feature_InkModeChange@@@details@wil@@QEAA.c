/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InkModeChange@@@details@wil@@QEAA_NXZ @ 0x18029661C
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x18013E090 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InkModeChange@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18029608C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InkModeChange@@@details@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InkModeChange@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180296518 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InkModeChange@@@details@wil@@QEAAX_NW4Rep.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkModeChange>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkModeChange>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkModeChange>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
