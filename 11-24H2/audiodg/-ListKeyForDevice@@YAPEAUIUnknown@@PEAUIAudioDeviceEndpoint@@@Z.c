/*
 * XREFs of ?ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z @ 0x1400133D4
 * Callers:
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140013230 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140068FD0 (-RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall ListKeyForDevice(struct IAudioDeviceEndpoint *a1)
{
  struct IAudioDeviceEndpointVtbl *lpVtbl; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  lpVtbl = a1->lpVtbl;
  v3 = 0LL;
  ((void (__fastcall *)(struct IAudioDeviceEndpoint *, GUID *, __int64 *))lpVtbl->QueryInterface)(
    a1,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v3);
  return (struct IUnknown *)v3;
}
