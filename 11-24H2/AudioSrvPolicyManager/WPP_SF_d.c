/*
 * XREFs of WPP_SF_d @ 0x18002B464
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x1800025B8 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18000277C (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180002F00 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180003160 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800032A4 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180003C10 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800080C0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180008220 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18000E0E0 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18000E4F0 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000EC20 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180012624 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180012AA0 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180019D2C (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18001A04C (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001A3B0 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18001A82C (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x18001C4F4 (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x18001D5F0 (-RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001D798 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18001DD98 (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18001E20C (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18002CEC0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18002D1A0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18002D770 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18002DC84 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180031590 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180031B88 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800325E0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180032CC8 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180033140 (-PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x1800345F0 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x180034758 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180037D9C (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x1800380FC (-MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     ?ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x1800389AC (-ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x180038A58 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x180038BD4 (-ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x180038C6C (-ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x180038D08 (-ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180038E10 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180038F40 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180039018 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x1800390F0 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x1800393B8 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x1800397EC (-UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18003A2CC (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     PbmSetSmtcSubscriptionState @ 0x18003B960 (PbmSetSmtcSubscriptionState.c)
 *     ?OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z @ 0x180041434 (-OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z.c)
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x1800418EC (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 *     ?Initialize@CAudioThreadPool@@QEAAJXZ @ 0x180047E04 (-Initialize@CAudioThreadPool@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_d(TRACEHANDLE a1, USHORT a2, const GUID *a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, a3, a2, &v5, 4LL, 0LL);
}
