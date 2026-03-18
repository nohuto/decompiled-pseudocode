/*
 * XREFs of KsepRegistryCloseKey @ 0x14095AB50
 * Callers:
 *     KseSetDeviceFlags @ 0x14073E240 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14073E7D4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepRegistryQueryDriverShims @ 0x14095AB74 (KsepRegistryQueryDriverShims.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14095C824 (KsepDbQueryRegistryDeviceData.c)
 *     KsepMatchInitBiosInfo @ 0x140C2BB00 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140C2C160 (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_140F0F31C);
  }
  return result;
}
