/*
 * XREFs of _tlgKeywordOn @ 0x140035A14
 * Callers:
 *     ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140031ED0 (-LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z @ 0x1400359CC (-IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x140036840 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x140046CD0 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140049200 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x14004D0C4 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004F470 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     DoLoadedModulesContainBlockedListAPO @ 0x140074868 (DoLoadedModulesContainBlockedListAPO.c)
 *     ?APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ@Z @ 0x140074C1C (-APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ@Z.c)
 *     ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x140075BD0 (-TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z.c)
 *     ?LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14008D500 (-LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14008D630 (-LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXX.c)
 *     ?LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14008D8D0 (-LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAX.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
