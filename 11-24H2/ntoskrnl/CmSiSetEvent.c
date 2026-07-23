/*
 * XREFs of CmSiSetEvent @ 0x140669D84
 * Callers:
 *     CmpHiveCacheEntryCleanup @ 0x1407E5AA8 (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407E5E24 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5F40 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

__int64 __fastcall CmSiSetEvent(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  return 0LL;
}
