/*
 * XREFs of CmSiWaitForSingleEvent @ 0x140493968
 * Callers:
 *     CmpHiveCacheClaimHiveEntry @ 0x1407E5310 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407E54D8 (CmpHiveCacheEntryCleanup.c)
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall CmSiWaitForSingleEvent(__int64 a1)
{
  return KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
}
