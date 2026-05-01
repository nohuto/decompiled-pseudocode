/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LogonTabTipGroupPolicy@@@details@wil@@QEAA_NXZ @ 0x1804789E4
 * Callers:
 *     ?Stop@SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N@Z @ 0x180475284 (-Stop@SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogg.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LogonTabTipGroupPolicy@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180470F28 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LogonTabTipGroupPolicy@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LogonTabTipGroupPolicy@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180473EC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LogonTabTipGroupPolicy@@@details@wil@@QEA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_LogonTabTipGroupPolicy>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LogonTabTipGroupPolicy>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LogonTabTipGroupPolicy>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
