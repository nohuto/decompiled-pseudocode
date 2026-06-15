/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140006E20 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008474 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140008EB8 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000AC50 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ??4CAPONode@@QEAAXAEAV0@@Z @ 0x14000B5DC (--4CAPONode@@QEAAXAEAV0@@Z.c)
 *     ??0CAPONode@@QEAA@AEBU_GUID@@PEBGPEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudioProcessingObjectConfiguration@@PEAUIAPOProcessingHost@@@Z @ 0x14000E63C (--0CAPONode@@QEAA@AEBU_GUID@@PEBGPEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUI.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140013EB0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140014340 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x1400150B0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 *     ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z @ 0x140016560 (-GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z.c)
 *     ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@AEAAXAEAV?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAPOProcessingHostObject@@@Z @ 0x14001851C (-AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@AEAAXAEAV-$forward_list@V.c)
 *     ?AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140018730 (-AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProce.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x14001EB60 (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001FE30 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140021538 (-AttachToMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?UpdateAudioActivityPerfTracker@@YAXPEBU_tlgProvider_t@@KQEBD11N@Z @ 0x14002D4B4 (-UpdateAudioActivityPerfTracker@@YAXPEBU_tlgProvider_t@@KQEBD11N@Z.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14002F4C8 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x14002F5C0 (-UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400303A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x140031A3C (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 *     ??1CAPOProcessingHostObject@@UEAA@XZ @ 0x140038E3C (--1CAPOProcessingHostObject@@UEAA@XZ.c)
 *     ??1CAPOServiceProvider@@UEAA@XZ @ 0x14003A1CC (--1CAPOServiceProvider@@UEAA@XZ.c)
 *     ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14003A870 (-OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14003BA04 (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ?OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003EB60 (-OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 *     ??1CLocalMmcssWorkQueue@@UEAA@XZ @ 0x14004413C (--1CLocalMmcssWorkQueue@@UEAA@XZ.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x1400469D0 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14004EC80 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?ProcessingComplete@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXXZ @ 0x140051E60 (-ProcessingComplete@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     ?ProcessingComplete@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXXZ @ 0x140053130 (-ProcessingComplete@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlDat.c)
 *     ?RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJPEBG@Z @ 0x140054DB4 (-RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJPEBG@Z.c)
 *     ?RuntimeClassInitialize@CRTThreadManager@@QEAAJH@Z @ 0x140056288 (-RuntimeClassInitialize@CRTThreadManager@@QEAAJH@Z.c)
 *     ?AddNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x140056E18 (-AddNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject.c)
 *     ?IsCaptureDevice@@YA_NPEAUIMMDevice@@@Z @ 0x140057E20 (-IsCaptureDevice@@YA_NPEAUIMMDevice@@@Z.c)
 *     ?AddNotificationClient@CAPOEnvironmentStateChangedNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x14005FA0C (-AddNotificationClient@CAPOEnvironmentStateChangedNotificationsHandler@@QEAAJPEAVCAPOProcessingH.c)
 *     ?AddNotificationClient@CMicBoostNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x1400601FC (-AddNotificationClient@CMicBoostNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z.c)
 *     ?TryGetMicBoostPartAndInterfacesFromDevice@@YAJPEAUIMMDevice@@PEAPEAUIPart@@PEAPEAUIAudioVolumeLevel@@PEAPEAUIAudioMute@@@Z @ 0x140060880 (-TryGetMicBoostPartAndInterfacesFromDevice@@YAJPEAUIMMDevice@@PEAPEAUIPart@@PEAPEAUIAudioVolumeL.c)
 *     ??1CRTThreadManager@@UEAA@XZ @ 0x14006DB94 (--1CRTThreadManager@@UEAA@XZ.c)
 *     ?GetOta@CStreamInstance@@UEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14006E4C0 (-GetOta@CStreamInstance@@UEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 *     ?NonRTCancelSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ @ 0x14007F790 (-NonRTCancelSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x140046404 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, int a3, const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((int)this, (int)a2, a3, 0, 0LL, retaddr, v4);
}
