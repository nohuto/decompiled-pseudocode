/*
 * XREFs of xxxValidateRect @ 0x14003F0D8
 * Callers:
 *     NtUserValidateRect @ 0x14003EFE0 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x140042630 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRect(struct tagWND *a1)
{
  if ( !a1 )
    a1 = 0LL;
  return xxxRedrawWindow(a1);
}
