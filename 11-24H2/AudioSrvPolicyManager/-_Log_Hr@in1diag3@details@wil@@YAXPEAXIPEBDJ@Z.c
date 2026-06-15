/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C
 * Callers:
 *     ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x1800039B0 (-IsSpatializerAllowed@CProcess@@UEAA_NXZ.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x18000C510 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18000DBD0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x18000F3B0 (-GetThreadUserStringSid@@YAJPEAPEAG@Z.c)
 *     ?GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180016160 (-GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x18001C4F4 (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x180029910 (-OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18002A830 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x18002C5A0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 *     _lambda_5f73260db21cd4e80ff2f87aa86ff472_::operator() @ 0x18002C714 (_lambda_5f73260db21cd4e80ff2f87aa86ff472_--operator().c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18002CA9C (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 *     ?AsyncProcessTerminatedNotifications@CProcess@@IEAAXXZ @ 0x180031464 (-AsyncProcessTerminatedNotifications@CProcess@@IEAAXXZ.c)
 *     ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180031540 (-BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TI.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180031B88 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ @ 0x180031D60 (-DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ.c)
 *     ?FindReusableGroupingParam@CProcess@@UEAA?AU_GUID@@PEBU2@@Z @ 0x180031E30 (-FindReusableGroupingParam@CProcess@@UEAA-AU_GUID@@PEBU2@@Z.c)
 *     ?GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180032590 (-GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800328D0 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180032CC8 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800332D0 (-ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?ResetReusedSessionGroupingParams@CProcess@@IEAAXXZ @ 0x180033EB0 (-ResetReusedSessionGroupingParams@CProcess@@IEAAXXZ.c)
 *     ?ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z @ 0x180039208 (-ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x18003C4CC (--1CAastPreStartContext@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003C6AC (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _lambda_d796dcb77f0f197a5763ab5c6551444f_::operator() @ 0x18003DD6C (_lambda_d796dcb77f0f197a5763ab5c6551444f_--operator().c)
 *     ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x18003E69C (-QueueVolumeRefreshForAllTsSessions@@YAXXZ.c)
 *     ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x18003ECC0 (-TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18003F688 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x1800402B8 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x1800403D8 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ @ 0x180040464 (-TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ.c)
 *     ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x180043920 (--0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z.c)
 *     ?ClearAllPersistedApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@SAJXZ @ 0x1800455BC (-ClearAllPersistedApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@SAJXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800220F0 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((__int64)this, a2, a3, 0LL, 0LL, retaddr, v4);
}
