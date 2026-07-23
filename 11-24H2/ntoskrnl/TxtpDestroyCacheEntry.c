/*
 * XREFs of TxtpDestroyCacheEntry @ 0x140BB63D4
 * Callers:
 *     TxtpAddCacheEntry @ 0x140BB53FC (TxtpAddCacheEntry.c)
 *     TxtpClearCache @ 0x140BB637C (TxtpClearCache.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x140BB5F04 (BgpGxRectangleDestroy.c)
 */

void __fastcall TxtpDestroyCacheEntry(__int64 a1)
{
  BgpGxRectangleDestroy(*(_QWORD *)(a1 + 48));
  BgpFwFreeMemory(a1);
}
