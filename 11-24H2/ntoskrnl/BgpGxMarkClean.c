/*
 * XREFs of BgpGxMarkClean @ 0x1404FAAC0
 * Callers:
 *     BgpGxCopyRectangle @ 0x140BB2620 (BgpGxCopyRectangle.c)
 *     BgpGxCopyBitmapToRectangle @ 0x140BB535C (BgpGxCopyBitmapToRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
