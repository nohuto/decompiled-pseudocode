/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAA_NXZ @ 0x180461738
 * Callers:
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275CF8 (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x18045F370 (-IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18045DE04 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180460B78 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_54629273>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54629273>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54629273>::ReportUsage((int *)a1, v5 & 1, 3u, v3);
  return v2;
}
