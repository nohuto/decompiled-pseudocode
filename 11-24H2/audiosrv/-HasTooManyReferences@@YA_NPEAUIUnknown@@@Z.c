/*
 * XREFs of ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x1800478BC
 * Callers:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180047340 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x1800878B0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ?GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixProxy@@@Z @ 0x1800AF420 (-GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixP.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800B3388 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall HasTooManyReferences(struct IUnknown *a1)
{
  unsigned int v2; // ebx

  v2 = ((__int64 (__fastcall *)(struct IUnknown *))a1->lpVtbl->AddRef)(a1);
  ((void (__fastcall *)(struct IUnknown *))a1->lpVtbl->Release)(a1);
  return v2 >= 0x3FFFFFFF;
}
