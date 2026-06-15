/*
 * XREFs of WPP_SF_d @ 0x18002DA54
 * Callers:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180002030 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180002250 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800082D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000A2C0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000A420 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000AB30 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18000ACF4 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18000B440 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18000B6A0 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18000B7E4 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000BDB0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18000E460 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18000E870 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180012160 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180019BFC (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x180019F1C (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001A280 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18001A6FC (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x18001C3C4 (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x18001D4C0 (-RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001D668 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18001DE04 (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18001E3AC (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18002F8A0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18002FB80 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x180030150 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180030664 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180033F70 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180034568 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180034FC0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800356A8 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180035B20 (-PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x180036FD0 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x180037138 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003A32C (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18003A68C (-MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     ?ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18003AF3C (-ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18003AFE8 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18003B164 (-ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18003B1FC (-ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18003B298 (-ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18003B3A0 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18003B4D0 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18003B5A8 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18003B680 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18003BBE0 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18003C014 (-UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18003CAE8 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     PbmSetSmtcSubscriptionState @ 0x18003E180 (PbmSetSmtcSubscriptionState.c)
 *     ?OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z @ 0x180043C54 (-OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z.c)
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x18004410C (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 *     ?Initialize@CAudioThreadPool@@QEAAJXZ @ 0x18004A624 (-Initialize@CAudioThreadPool@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_d(TRACEHANDLE a1, USHORT a2, const GUID *a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, a3, a2, &v5, 4LL, 0LL);
}
