/*
 * XREFs of TxtpDestroyCacheEntry @ 0x140BB43D4
 * Callers:
 *     TxtpAddCacheEntry @ 0x140BB33FC (TxtpAddCacheEntry.c)
 *     TxtpClearCache @ 0x140BB437C (TxtpClearCache.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x140BB3F04 (BgpGxRectangleDestroy.c)
 */

void __fastcall TxtpDestroyCacheEntry(__int64 a1)
{
  BgpGxRectangleDestroy(*(_QWORD *)(a1 + 48));
  BgpFwFreeMemory(a1);
}
