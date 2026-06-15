/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180047C8C
 * Callers:
 *     AudioServerResetEndpoint @ 0x180047AA0 (AudioServerResetEndpoint.c)
 *     AUDIOSERVER_rundown @ 0x180047B80 (AUDIOSERVER_rundown.c)
 *     AudioServerCreateStream @ 0x18008D370 (AudioServerCreateStream.c)
 *     AudioServerGetAmbHeadTracking @ 0x180109010 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetAudioEffectsChangedWnfStateName @ 0x1801090A0 (AudioServerGetAudioEffectsChangedWnfStateName.c)
 *     AudioServerGetAudioStreamInfo @ 0x180109290 (AudioServerGetAudioStreamInfo.c)
 *     AudioServerGetChannelVolume @ 0x180109680 (AudioServerGetChannelVolume.c)
 *     AudioServerGetStreamVpoContext @ 0x18010A340 (AudioServerGetStreamVpoContext.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x18010ACA0 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x18010AD40 (AudioServerPreStartStream.c)
 *     AudioServerReleaseAudioStreamHandle @ 0x18010AE20 (AudioServerReleaseAudioStreamHandle.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x18010AFF0 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAmbHeadTracking @ 0x18010B0F0 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x18010B180 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x18010B210 (AudioServerSetAmbRotation.c)
 *     AudioServerSetAudioEffect @ 0x18010B2E0 (AudioServerSetAudioEffect.c)
 *     AudioServerSetChannelVolume @ 0x18010B410 (AudioServerSetChannelVolume.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x18010B510 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     AudioServerSetEchoCancellationRenderEndpoint @ 0x18010B600 (AudioServerSetEchoCancellationRenderEndpoint.c)
 *     AudioServerSetLastBufferInProgress @ 0x18010B700 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x18010B7E0 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x18010B970 (AudioServerStartStreamAborted.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
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
