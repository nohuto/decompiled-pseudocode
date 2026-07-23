/*
 * XREFs of KsepRegistryCloseKey @ 0x140942610
 * Callers:
 *     KseSetDeviceFlags @ 0x14073C170 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14073C704 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepRegistryQueryDriverShims @ 0x140942634 (KsepRegistryQueryDriverShims.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409442E4 (KsepDbQueryRegistryDeviceData.c)
 *     KsepMatchInitBiosInfo @ 0x140C2DC20 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140C2E280 (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_140F0F61C);
  }
  return result;
}
