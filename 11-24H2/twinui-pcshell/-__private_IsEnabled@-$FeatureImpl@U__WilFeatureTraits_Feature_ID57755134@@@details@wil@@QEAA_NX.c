/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wil@@QEAA_NXZ @ 0x180636B14
 * Callers:
 *     ?OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z @ 0x180633A00 (-OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z.c)
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1806381A0 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1806236C0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180634308 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57755134>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57755134>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57755134>::ReportUsage((int *)a1, v5 & 1, 3u, v3);
  return v2;
}
