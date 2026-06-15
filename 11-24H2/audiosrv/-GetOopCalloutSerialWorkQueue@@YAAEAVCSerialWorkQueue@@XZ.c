/*
 * XREFs of ?GetOopCalloutSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027FF0
 * Callers:
 *     ?ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z @ 0x180027E70 (-ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ @ 0x18006DFA0 (-UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ.c)
 *     ?ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ @ 0x180107240 (-ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CSerialWorkQueue *GetOopCalloutSerialWorkQueue(void)
{
  return (struct CSerialWorkQueue *)(*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
}
