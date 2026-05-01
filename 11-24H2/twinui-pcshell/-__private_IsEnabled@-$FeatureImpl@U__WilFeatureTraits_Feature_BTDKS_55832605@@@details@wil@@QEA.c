/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details@wil@@QEAA_NXZ @ 0x180636A98
 * Callers:
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x180632F90 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180623598 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180634280 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details@wil@@QEAAX_NW4Re.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_BTDKS_55832605>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BTDKS_55832605>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BTDKS_55832605>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
