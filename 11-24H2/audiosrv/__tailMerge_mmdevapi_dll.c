/*
 * XREFs of __tailMerge_mmdevapi_dll @ 0x1800A553F
 * Callers:
 *     __imp_load_GenerateMediaEvent @ 0x1800A55BE (__imp_load_GenerateMediaEvent.c)
 *     __imp_load_MMDeviceCreateRegistryPropertyStore @ 0x1800A5740 (__imp_load_MMDeviceCreateRegistryPropertyStore.c)
 *     __imp_load_mmdDevGetMMDeviceIdFromInterfaceId @ 0x1800A5A07 (__imp_load_mmdDevGetMMDeviceIdFromInterfaceId.c)
 *     __imp_load_FlushDeviceTopologyCache @ 0x1800A5BDE (__imp_load_FlushDeviceTopologyCache.c)
 *     __imp_load_RegisterForMediaCallback @ 0x1800A5E92 (__imp_load_RegisterForMediaCallback.c)
 *     __imp_load_UnregisterMediaCallback @ 0x1800A5EA4 (__imp_load_UnregisterMediaCallback.c)
 *     __imp_load_mmdDevGetMMDeviceFromInterfaceId @ 0x1800A5EB6 (__imp_load_mmdDevGetMMDeviceFromInterfaceId.c)
 *     __imp_load_mmdDevGetInstanceIdFromMMDeviceId @ 0x1800A5F7C (__imp_load_mmdDevGetInstanceIdFromMMDeviceId.c)
 *     __imp_load_GetSessionIdFromEndpointId @ 0x1800A5FB2 (__imp_load_GetSessionIdFromEndpointId.c)
 *     __imp_load_GetNeverSetAsDefaultProperty @ 0x1800A5FFA (__imp_load_GetNeverSetAsDefaultProperty.c)
 *     __imp_load_MMDeviceCreateRegistryPropertyStore2 @ 0x1800A6072 (__imp_load_MMDeviceCreateRegistryPropertyStore2.c)
 *     __imp_load_GetClassFromEndpointId @ 0x1800A6084 (__imp_load_GetClassFromEndpointId.c)
 *     __imp_load_MMDeviceCreateAudioSystemEffectsPropertyStore @ 0x1800A6145 (__imp_load_MMDeviceCreateAudioSystemEffectsPropertyStore.c)
 *     __imp_load_CleanupDeviceAPI @ 0x1800A62C7 (__imp_load_CleanupDeviceAPI.c)
 *     __imp_load_mmdDevGetInterfaceIdFromMMDeviceId @ 0x1800A7FBF (__imp_load_mmdDevGetInterfaceIdFromMMDeviceId.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180075C10 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_mmdevapi_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_mmdevapi_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
