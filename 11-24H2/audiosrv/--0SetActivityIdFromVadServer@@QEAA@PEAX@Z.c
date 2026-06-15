/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18005292C
 * Callers:
 *     AUDIOSERVER_rundown @ 0x180052820 (AUDIOSERVER_rundown.c)
 *     AudioServerCreateStream @ 0x180081870 (AudioServerCreateStream.c)
 *     AudioServerDestroyStream @ 0x180081CE0 (AudioServerDestroyStream.c)
 *     AudioServerDisconnect @ 0x180081E50 (AudioServerDisconnect.c)
 *     AudioServerGetAllVolumes @ 0x180081FD0 (AudioServerGetAllVolumes.c)
 *     AudioServerGetAudioSession @ 0x180082140 (AudioServerGetAudioSession.c)
 *     AudioServerGetChannelCount @ 0x1800822C0 (AudioServerGetChannelCount.c)
 *     AudioServerGetStreamLatency @ 0x180083310 (AudioServerGetStreamLatency.c)
 *     AudioServerResetEndpoint @ 0x180084F70 (AudioServerResetEndpoint.c)
 *     AudioServerSetAllVolumes @ 0x1800850E0 (AudioServerSetAllVolumes.c)
 *     AudioServerStartStream @ 0x180085260 (AudioServerStartStream.c)
 *     AudioServerStopStream @ 0x1800853F0 (AudioServerStopStream.c)
 *     AudioServerGetAmbHeadTracking @ 0x18010F810 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetAudioEffectsChangedWnfStateName @ 0x18010F8A0 (AudioServerGetAudioEffectsChangedWnfStateName.c)
 *     AudioServerGetAudioStreamInfo @ 0x18010FB30 (AudioServerGetAudioStreamInfo.c)
 *     AudioServerGetChannelVolume @ 0x18010FFB0 (AudioServerGetChannelVolume.c)
 *     AudioServerGetStreamVpoContext @ 0x180110E80 (AudioServerGetStreamVpoContext.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x180111160 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x180111200 (AudioServerPreStartStream.c)
 *     AudioServerReleaseAudioStreamHandle @ 0x180111370 (AudioServerReleaseAudioStreamHandle.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x1801115D0 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAmbHeadTracking @ 0x180111750 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x1801117E0 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x180111870 (AudioServerSetAmbRotation.c)
 *     AudioServerSetAudioEffect @ 0x180111940 (AudioServerSetAudioEffect.c)
 *     AudioServerSetChannelVolume @ 0x180111B10 (AudioServerSetChannelVolume.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x180111CA0 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     AudioServerSetEchoCancellationRenderEndpoint @ 0x180111E20 (AudioServerSetEchoCancellationRenderEndpoint.c)
 *     AudioServerSetLastBufferInProgress @ 0x180111FB0 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x180112120 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x180112330 (AudioServerStartStreamAborted.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

SetActivityIdFromVadServer *__fastcall SetActivityIdFromVadServer::SetActivityIdFromVadServer(
        SetActivityIdFromVadServer *this,
        _OWORD *a2)
{
  GUID v3; // xmm0

  if ( a2 )
    v3 = (GUID)a2[16];
  else
    v3 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)this = v3;
  *((GUID *)this + 1) = v3;
  EtwEventActivityIdControl(4LL, (char *)this + 16);
  return this;
}
