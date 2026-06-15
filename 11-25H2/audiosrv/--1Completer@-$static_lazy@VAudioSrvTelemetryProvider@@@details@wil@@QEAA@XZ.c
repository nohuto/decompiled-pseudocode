/*
 * XREFs of ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800AE2AC
 * Callers:
 *     ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000C210 (-InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__M.c)
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18000C500 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     AudioVolumeGetChannelCount @ 0x18000F9B0 (AudioVolumeGetChannelCount.c)
 *     AudioSessionGetVolume @ 0x18000FB60 (AudioSessionGetVolume.c)
 *     AudioVolumeGetMasterVolumeLevelScalar @ 0x18000FD30 (AudioVolumeGetMasterVolumeLevelScalar.c)
 *     AudioVolumeConnect @ 0x18000FEE0 (AudioVolumeConnect.c)
 *     AudioVolumeDisconnect @ 0x180010270 (AudioVolumeDisconnect.c)
 *     AudioMeterGetMeteringChannelCount @ 0x180010470 (AudioMeterGetMeteringChannelCount.c)
 *     AudioMeterGetChannelsPeakValues @ 0x180010620 (AudioMeterGetChannelsPeakValues.c)
 *     AudioMeterGetPeakValue @ 0x1800107E0 (AudioMeterGetPeakValue.c)
 *     AudioSessionManagerGetAudioSessions @ 0x180010990 (AudioSessionManagerGetAudioSessions.c)
 *     s_tsSessionGetAudioProtocol @ 0x180010BE0 (s_tsSessionGetAudioProtocol.c)
 *     AudioSessionDestroy @ 0x180010DE0 (AudioSessionDestroy.c)
 *     AudioSessionGetState @ 0x180010FE0 (AudioSessionGetState.c)
 *     AudioVolumeGetMasterVolumeLevel @ 0x1800111C0 (AudioVolumeGetMasterVolumeLevel.c)
 *     AudioVolumeGetMute @ 0x180011380 (AudioVolumeGetMute.c)
 *     s_rtgGetDefaultAudioEndpoint @ 0x180011540 (s_rtgGetDefaultAudioEndpoint.c)
 *     ?StateCheckExpiredCallback@CAudioSession@@AEAAXXZ @ 0x180025FC4 (-StateCheckExpiredCallback@CAudioSession@@AEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800A34BC (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 */

BOOL __fastcall wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(_DWORD *a1)
{
  if ( !a1[2] )
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)(*(_QWORD *)a1 + 8LL),
      *(const struct _tlgProvider_t *const *)(*(_QWORD *)a1 + 32LL),
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
  return InitOnceComplete(*(LPINIT_ONCE *)a1, a1[2], (LPVOID)(*(_QWORD *)a1 + 8LL));
}
