/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@QEAA_NXZ @ 0x1805DB3E8
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800DEB2C (--$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180183500 (--$serialize@Vinput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVinput_archive@tson@@.c)
 *     ?evaluate@_tip_CallDashboardExtensionTIP@@QEAAXXZ @ 0x180283890 (-evaluate@_tip_CallDashboardExtensionTIP@@QEAAXXZ.c)
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$basic_string_view@GU?$char_traits@G@std@@@8@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x1805CD624 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805D0248 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805D6264 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59874629>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59874629>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59874629>::ReportUsage((int *)a1, v5 & 1, 3u, v3);
  return v2;
}
