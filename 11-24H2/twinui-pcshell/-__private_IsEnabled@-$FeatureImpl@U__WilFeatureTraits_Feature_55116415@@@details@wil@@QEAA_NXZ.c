/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAA_NXZ @ 0x1805DB108
 * Callers:
 *     _lambda_32c4e6169d3422a324eb2467ba357153_::operator() @ 0x1805CBA88 (_lambda_32c4e6169d3422a324eb2467ba357153_--operator().c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D35C0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D67E0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805D67E0.c)
 *     ?evaluate@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXXZ @ 0x1805DC140 (-evaluate@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805CF7D8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805D5D90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55116415>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55116415>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55116415>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
