/*
 * XREFs of BgpGxMarkClean @ 0x1404F8620
 * Callers:
 *     BgpGxCopyRectangle @ 0x140BA2620 (BgpGxCopyRectangle.c)
 *     BgpGxCopyBitmapToRectangle @ 0x140BA535C (BgpGxCopyBitmapToRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
