/*
 * XREFs of BgpGxMarkClean @ 0x1404F83A0
 * Callers:
 *     BgpGxCopyRectangle @ 0x140BB4620 (BgpGxCopyRectangle.c)
 *     BgpGxCopyBitmapToRectangle @ 0x140BB735C (BgpGxCopyBitmapToRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
