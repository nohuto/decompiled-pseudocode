/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60880818@@@details@wil@@QEAA_NXZ @ 0x1805DB464
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800DEB2C (--$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180183500 (--$serialize@Vinput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVinput_archive@tson@@.c)
 *     ??$serialize_metrics@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAIAEAVoutput_archive@tson@@@Z @ 0x1805C992C (--$serialize_metrics@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAIAEAVoutput_arch.c)
 *     _lambda_240eec98032e84500ab379a9acf4bb76_::operator() @ 0x1805CB8EC (_lambda_240eec98032e84500ab379a9acf4bb76_--operator().c)
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$basic_string_view@GU?$char_traits@G@std@@@8@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x1805CD624 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_60880818@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805D0498 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_60880818@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_60880818@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805D6380 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_60880818@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_60880818>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60880818>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60880818>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
