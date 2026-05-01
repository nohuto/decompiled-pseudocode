/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x18035FEC0
 * Callers:
 *     ?StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18023ECB4 (-StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18023ED50 (-SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18023F2B0 (-UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18023F420 (-UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180351A38 (-HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z.c)
 *     ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18035559C (-OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e75a8851595db8237201f9332f154f2___::Run @ 0x180359B00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2e75a8851595db8237201f9332f154f2___--Run.c)
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x180359D10 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18035AAC4 (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?StartGameInputWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x18035B064 (-StartGameInputWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z.c)
 *     ?StopGameInputWatcher@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035C460 (-StopGameInputWatcher@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18035C7D4 (-StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18034E1BC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovement.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180359314 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::ReportUsage((int *)a1, v4 & 1, 3u);
  return v2;
}
