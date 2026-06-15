/*
 * XREFs of WPP_SF_dg @ 0x1800C4774
 * Callers:
 *     ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x180051970 (-UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x180069214 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x18006D320 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x18007D32C (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_dg(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5, 4LL, (__int64 *)va, 8LL, 0LL);
}
