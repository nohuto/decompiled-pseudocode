/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@QEAA_NXZ @ 0x180508654
 * Callers:
 *     ?ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FA678 (-ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1805042F0 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180504C90 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FD4F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180505FE4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59980251>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59980251>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59980251>::ReportUsage((int *)a1, v5 & 1, 3u, v3);
  return v2;
}
