/*
 * XREFs of ?GetCurrentEffectPack@CEndpointCharacteristics@@QEAAAEAV?$shared_ptr@VEffectPack@@@std@@XZ @ 0x1800176FC
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180016B3C (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z @ 0x18006ED94 (-GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z.c)
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800D9B1C (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 * Callees:
 *     <none>
 */

HANDLE *__fastcall CEndpointCharacteristics::GetCurrentEffectPack(struct _RTL_CRITICAL_SECTION *a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = a1 + 8;
  EnterCriticalSection(a1 + 8);
  if ( v1 )
    LeaveCriticalSection(v1);
  return &a1[9].LockSemaphore;
}
