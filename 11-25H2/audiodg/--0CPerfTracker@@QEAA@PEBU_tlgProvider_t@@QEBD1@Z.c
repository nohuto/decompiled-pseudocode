/*
 * XREFs of ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0
 * Callers:
 *     ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x1400052C4 (-ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?StartStream@CStreamInstance@@UEAAJXZ @ 0x1400055D0 (-StartStream@CStreamInstance@@UEAAJXZ.c)
 *     ?OnStreamStarted@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x1400056E0 (-OnStreamStarted@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ??0CAPOWrapperSrv@@QEAA@XZ @ 0x140005CF8 (--0CAPOWrapperSrv@@QEAA@XZ.c)
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005F80 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140006850 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ??1CAPOWrapperSrv@@QEAA@XZ @ 0x140006B70 (--1CAPOWrapperSrv@@QEAA@XZ.c)
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
 * Callees:
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x14002CDAC (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 */

LARGE_INTEGER *__fastcall CPerfTracker::CPerfTracker(
        LARGE_INTEGER *lpPerformanceCount,
        const struct _tlgProvider_t *a2,
        const char *a3,
        const char *const a4)
{
  LARGE_INTEGER *v5; // rbx
  LARGE_INTEGER *v7; // rcx
  __int64 v8; // rdx
  const char *v9; // r14
  char v10; // al
  _BYTE *v11; // rax

  lpPerformanceCount->QuadPart = 0LL;
  v5 = lpPerformanceCount + 11;
  lpPerformanceCount[1].QuadPart = 0LL;
  lpPerformanceCount[2].QuadPart = 0LL;
  v7 = lpPerformanceCount + 3;
  *(_OWORD *)&v7->LowPart = 0LL;
  *(_OWORD *)&v7[2].LowPart = 0LL;
  *(_OWORD *)&v7[4].LowPart = 0LL;
  *(_OWORD *)&v7[6].LowPart = 0LL;
  *(_OWORD *)&v5->LowPart = 0LL;
  *(_OWORD *)&v5[2].LowPart = 0LL;
  *(_OWORD *)&v5[4].LowPart = 0LL;
  *(_OWORD *)&v5[6].LowPart = 0LL;
  *(_OWORD *)&v5[8].LowPart = 0LL;
  *(_OWORD *)&v5[10].LowPart = 0LL;
  *(_OWORD *)&v5[12].LowPart = 0LL;
  *(_OWORD *)&v5[14].LowPart = 0LL;
  lpPerformanceCount[29].QuadPart = (LONGLONG)a2;
  StringCchPrintfExA(
    (STRSAFE_LPSTR)v7,
    0x40uLL,
    (char **)&lpPerformanceCount[27],
    (unsigned __int64 *)&lpPerformanceCount[28].QuadPart,
    0,
    "%s",
    a3);
  StringCchPrintfExA(
    (STRSAFE_LPSTR)lpPerformanceCount[27].QuadPart,
    lpPerformanceCount[28].QuadPart,
    0LL,
    0LL,
    0,
    "-Start");
  if ( a4 )
  {
    v8 = 128LL;
    v9 = (const char *)(a4 - (const char *const)v5);
    do
    {
      if ( v8 == -2147483518 )
        break;
      v10 = *((_BYTE *)&v5->QuadPart + (_QWORD)v9);
      if ( !v10 )
        break;
      LOBYTE(v5->LowPart) = v10;
      v5 = (LARGE_INTEGER *)((char *)v5 + 1);
      --v8;
    }
    while ( v8 );
    v11 = (char *)&v5[-1].QuadPart + 7;
    if ( v8 )
      v11 = v5;
    *v11 = 0;
  }
  QueryPerformanceCounter(lpPerformanceCount);
  QueryPerformanceFrequency(lpPerformanceCount + 2);
  return lpPerformanceCount;
}
