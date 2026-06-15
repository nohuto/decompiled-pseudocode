/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18005280C
 * Callers:
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x180052058 (--0CVolumeStrip@@QEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18009FD08 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCBluetoothAudioEndpointResourceManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCBluetoothAudioEndpointResourceManagerProvider@@@Z @ 0x1800F0E7C (--$MakeAndInitialize@VCBluetoothAudioEndpointResourceManagerProvider@@V1@$$V@Details@WRL@Microso.c)
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x18011F954 (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = 1;
  return a1;
}
