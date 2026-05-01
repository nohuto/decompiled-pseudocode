/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55707948@@@details@wil@@QEAA_NXZ @ 0x1805DB238
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805C7AD0 (--$serialize@Vinput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVinpu.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805C8BC4 (--$serialize@Voutput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVout.c)
 *     ?EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805CF00C (-EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D67E0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805D67E0.c)
 *     ?evaluate@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXXZ @ 0x1805DC140 (-evaluate@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55707948@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805CFC78 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55707948@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55707948@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805D5FB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55707948@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55707948>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55707948>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55707948>::ReportUsage((int *)a1, v5 & 1, 3u, v3);
  return v2;
}
