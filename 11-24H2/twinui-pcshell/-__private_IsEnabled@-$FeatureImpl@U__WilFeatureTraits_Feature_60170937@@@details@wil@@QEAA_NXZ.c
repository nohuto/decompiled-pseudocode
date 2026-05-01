/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60170937@@@details@wil@@QEAA_NXZ @ 0x18050874C
 * Callers:
 *     ?GetSecondaryView@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180500560 (-GetSecondaryView@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_.c)
 *     ?IsOwnedAppWindow@GamingPosturePositioner@@AEAA_NPEAUHWND__@@@Z @ 0x18050215C (-IsOwnedAppWindow@GamingPosturePositioner@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1805042F0 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180504C90 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_60170937@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FD868 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_60170937@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_60170937@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180506188 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_60170937@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_60170937>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60170937>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60170937>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
