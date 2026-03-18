/*
 * XREFs of KsepRegistryCloseKey @ 0x1408292C0
 * Callers:
 *     KseSetDeviceFlags @ 0x140732220 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407327B4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepRegistryQueryDriverShims @ 0x1408292E4 (KsepRegistryQueryDriverShims.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14082A834 (KsepDbQueryRegistryDeviceData.c)
 *     KsepMatchInitBiosInfo @ 0x140C1AA00 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140C1B060 (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(&dword_140F0EC3C);
  }
  return result;
}
