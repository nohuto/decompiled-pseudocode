/*
 * XREFs of CmSiSetEvent @ 0x140668BAC
 * Callers:
 *     CmpHiveCacheEntryCleanup @ 0x1407E54D8 (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407E5854 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5970 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 */

__int64 __fastcall CmSiSetEvent(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  return 0LL;
}
