/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAA_NXZ @ 0x180636C10
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1806209EC (--$serialize@Vinput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVinput_archive@ts.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180620ACC (--$serialize@Voutput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVoutput_archive@.c)
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x180632F90 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x1806356A0 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 *     ?evaluate@_tip_CopilotHardwareKeyInvokedTest@@QEAAXXZ @ 0x180637228 (-evaluate@_tip_CopilotHardwareKeyInvokedTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180623A38 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806344B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60051841>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60051841>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60051841>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
