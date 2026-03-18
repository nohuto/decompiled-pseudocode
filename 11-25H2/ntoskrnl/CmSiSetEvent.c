/*
 * XREFs of CmSiSetEvent @ 0x14065D0DC
 * Callers:
 *     CmpHiveCacheEntryCleanup @ 0x1407D5668 (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407D59E0 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407D5AF0 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 */

__int64 __fastcall CmSiSetEvent(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  return 0LL;
}
