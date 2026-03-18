/*
 * XREFs of RaspDestroyCachedBitmap @ 0x140BB5CE8
 * Callers:
 *     BgpRasPrintGlyph @ 0x140472CBC (BgpRasPrintGlyph.c)
 *     RaspAddCacheEntry @ 0x140BB2E0C (RaspAddCacheEntry.c)
 *     RaspClearCache @ 0x140BB5C90 (RaspClearCache.c)
 * Callees:
 *     RaspFreeMemory @ 0x140467304 (RaspFreeMemory.c)
 *     RaspRectangleDestroy @ 0x1404FADA0 (RaspRectangleDestroy.c)
 */

void __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  v4 = 0LL;
  RaspRectangleDestroy(v2, &v3);
  RaspFreeMemory(a1, &v3);
}
