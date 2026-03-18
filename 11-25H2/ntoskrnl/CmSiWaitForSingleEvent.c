/*
 * XREFs of CmSiWaitForSingleEvent @ 0x140494A1C
 * Callers:
 *     CmpHiveCacheClaimHiveEntry @ 0x1407D54A0 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407D5668 (CmpHiveCacheEntryCleanup.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall CmSiWaitForSingleEvent(__int64 a1)
{
  return KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
}
