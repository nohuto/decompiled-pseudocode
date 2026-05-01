/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging@@@details@wil@@QEAA_NXZ @ 0x1803CCE78
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803CC8B4 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803C8E54 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebuggin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803CB79C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging@@@details@wil@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
