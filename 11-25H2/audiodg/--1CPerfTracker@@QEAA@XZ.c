/*
 * XREFs of ??1CPerfTracker@@QEAA@XZ @ 0x14000761C
 * Callers:
 *     ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x1400052C4 (-ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?StartStream@CStreamInstance@@UEAAJXZ @ 0x1400055D0 (-StartStream@CStreamInstance@@UEAAJXZ.c)
 *     ?OnStreamStarted@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x1400056E0 (-OnStreamStarted@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ??0CAPOWrapperSrv@@QEAA@XZ @ 0x140005CF8 (--0CAPOWrapperSrv@@QEAA@XZ.c)
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005F80 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140006850 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ??1CAPOWrapperSrv@@QEAA@XZ @ 0x140006B70 (--1CAPOWrapperSrv@@QEAA@XZ.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140006DF0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140006FB4 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140011698 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140028F50 (-OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140029300 (-OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?DestroyStream@CStreamInstance@@UEAAJXZ @ 0x1400297E0 (-DestroyStream@CStreamInstance@@UEAAJXZ.c)
 *     ?Initialize@CStreamInstance@@UEAAJKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J3U_GUID@@3@Z @ 0x140029D10 (-Initialize@CStreamInstance@@UEAAJKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J3U_GUID@@3.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z @ 0x140029F40 (-DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z.c)
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x14002AC90 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14002B790 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140033590 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?OnStreamStopped@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140037F30 (-OnStreamStopped@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x14003E550 (-Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x14003EBD0 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?StopStream@CStreamInstance@@UEAAJXZ @ 0x14003FF70 (-StopStream@CStreamInstance@@UEAAJXZ.c)
 *     ?InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140043270 (-InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x140048D10 (-GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEA.c)
 *     ?GetEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAI_K@Z @ 0x140049850 (-GetEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAI_K@Z.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14004ED20 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140050178 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140050BB0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x140063B00 (-GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 *     ?GetInputChannelCount@CAPOWrapperSrv@@UEAAJPEAI@Z @ 0x140063D10 (-GetInputChannelCount@CAPOWrapperSrv@@UEAAJPEAI@Z.c)
 *     ?GetLatency@CAPOWrapperSrv@@UEAAJPEA_J@Z @ 0x140063DC0 (-GetLatency@CAPOWrapperSrv@@UEAAJPEA_J@Z.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x140063E70 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 *     ?GetPreferredOutputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x1400640A0 (-GetPreferredOutputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 *     ?GetRegistrationProperties@CAPOWrapperSrv@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x1400642D0 (-GetRegistrationProperties@CAPOWrapperSrv@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?Reset@CAPOWrapperSrv@@UEAAJXZ @ 0x140064380 (-Reset@CAPOWrapperSrv@@UEAAJXZ.c)
 *     ?CreateExclusiveModeStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006DFA0 (-CreateExclusiveModeStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUD.c)
 *     ?DestroyExclusiveModeStream@CStreamGroup@@UEAAJ_K@Z @ 0x14006E220 (-DestroyExclusiveModeStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     _CPipeInstance::DeactivateAPOsAndRemoveConnections_::_1_::dtor$1 @ 0x140091B65 (_CPipeInstance--DeactivateAPOsAndRemoveConnections_--_1_--dtor$1.c)
 *     _CPipeInstance::ActivateAPOs_::_1_::dtor$1 @ 0x140091BF7 (_CPipeInstance--ActivateAPOs_--_1_--dtor$1.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$6 @ 0x140092957 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$6.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$8 @ 0x140092969 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$8.c)
 *     _CSystemAudioDeviceSharedBase::InnerInitializeAPO_::_1_::dtor$1 @ 0x140093773 (_CSystemAudioDeviceSharedBase--InnerInitializeAPO_--_1_--dtor$1.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$0 @ 0x14009685A (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateExclusiveModeStream_::_1_::dtor$1 @ 0x1400969EC (_CStreamGroup--CreateExclusiveModeStream_--_1_--dtor$1.c)
 * Callees:
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x14002CDAC (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ?UpdateAudioActivityPerfTracker@@YAXPEBU_tlgProvider_t@@KQEBD11N@Z @ 0x14002D7B4 (-UpdateAudioActivityPerfTracker@@YAXPEBU_tlgProvider_t@@KQEBD11N@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x140033AC4 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 */

void __fastcall CPerfTracker::~CPerfTracker(CPerfTracker *this)
{
  double v2; // xmm6_8
  DWORD CurrentThreadId; // eax
  __int128 v4; // [rsp+78h] [rbp-90h] BYREF
  char v5[272]; // [rsp+88h] [rbp-80h] BYREF

  StringCchPrintfExA(*((STRSAFE_LPSTR *)this + 27), *((_QWORD *)this + 28), 0LL, 0LL, 0, "-Stop");
  QueryPerformanceCounter((LARGE_INTEGER *)this + 1);
  v2 = 0.0;
  if ( *((_QWORD *)this + 2) )
    v2 = (double)(*((_DWORD *)this + 2) - *(_DWORD *)this) / (double)(int)*((_QWORD *)this + 2);
  v4 = 0LL;
  EtwEventActivityIdControl(1LL, &v4);
  memset_0(v5, 0, 0x104uLL);
  StringCchPrintfA(
    v5,
    0x104uLL,
    "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    (_DWORD)v4,
    WORD2(v4),
    WORD3(v4),
    BYTE8(v4),
    BYTE9(v4),
    BYTE10(v4),
    BYTE11(v4),
    BYTE12(v4),
    BYTE13(v4),
    BYTE14(v4),
    HIBYTE(v4));
  CurrentThreadId = GetCurrentThreadId();
  UpdateAudioActivityPerfTracker(
    (CPerfTracker *)((char *)this + 88),
    CurrentThreadId,
    v5,
    (const char *const)this + 24,
    (const char *const)this + 88,
    v2);
}
