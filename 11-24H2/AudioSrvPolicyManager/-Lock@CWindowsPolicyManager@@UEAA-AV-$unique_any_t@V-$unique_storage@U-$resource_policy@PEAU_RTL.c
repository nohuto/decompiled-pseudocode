/*
 * XREFs of ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013EA0
 * Callers:
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180029130 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x1800293A0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180029570 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStrea.c)
 *     ?OnPoStandbyAudioRequestReceived@CWindowsPolicyManager@@UEAAJ_N@Z @ 0x180029820 (-OnPoStandbyAudioRequestReceived@CWindowsPolicyManager@@UEAAJ_N@Z.c)
 *     ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x180029910 (-OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x180029D80 (-RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPre.c)
 *     ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18002A470 (-RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18002A540 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x18002A780 (-RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z.c)
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x18002AB70 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x18002C5A0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18002CA9C (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180037D9C (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x18003C4CC (--1CAastPreStartContext@@UEAA@XZ.c)
 *     _lambda_0a903797054c4de60318e94de109d2f9_::operator() @ 0x18003D7CC (_lambda_0a903797054c4de60318e94de109d2f9_--operator().c)
 *     _lambda_28433bbdf35c05dec82bca523d2a5fd2_::operator() @ 0x18003D8DC (_lambda_28433bbdf35c05dec82bca523d2a5fd2_--operator().c)
 *     _lambda_d796dcb77f0f197a5763ab5c6551444f_::operator() @ 0x18003DD6C (_lambda_d796dcb77f0f197a5763ab5c6551444f_--operator().c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x18003DF84 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18003EB20 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18003F3C8 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x18003F498 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z @ 0x18003F594 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18003F688 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18003F7E8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18003F830 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionIdGetAppsBlockedTillConsoleUnlocked@@YA?AW4AppTypesBlockedTillConsoleUnlocked@@K@Z @ 0x18003F9A0 (-TsSessionIdGetAppsBlockedTillConsoleUnlocked@@YA-AW4AppTypesBlockedTillConsoleUnlocked@@K@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18003FB28 (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     ?TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z @ 0x18003FB90 (-TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x18003FC50 (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18003FCEC (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z @ 0x18003FD84 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18003FE78 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x180040030 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x1800400EC (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x180040170 (-TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x1800403D8 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ @ 0x180040464 (-TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180040A78 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_::_Do_call @ 0x180040D80 (std--_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_--_Do_call.c)
 *     TS_AudioProtocolNotifyRundown @ 0x180041310 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CWindowsPolicyManager::Lock(__int64 a1, _QWORD *a2)
{
  char *v3; // rbx

  v3 = (char *)g_ApplicationManager + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  *a2 = v3;
  return a2;
}
