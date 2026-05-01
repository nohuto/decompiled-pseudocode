/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60169607@@@details@wil@@QEAA_NXZ @ 0x180508710
 * Callers:
 *     _lambda_2461923bd7d30a187d21cb937ed01b39_::operator() @ 0x1804F93DC (_lambda_2461923bd7d30a187d21cb937ed01b39_--operator().c)
 *     _lambda_5997640efe376a9387473cba5853814f_::operator() @ 0x1804F9900 (_lambda_5997640efe376a9387473cba5853814f_--operator().c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1805042F0 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180504C90 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_60169607@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FD740 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_60169607@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_60169607@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180506100 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_60169607@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_60169607>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60169607>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60169607>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
