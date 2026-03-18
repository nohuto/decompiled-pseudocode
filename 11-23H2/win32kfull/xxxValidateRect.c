/*
 * XREFs of xxxValidateRect @ 0x1C009DD2C
 * Callers:
 *     xxxMoveWindow @ 0x1C00844E0 (xxxMoveWindow.c)
 *     NtUserValidateRect @ 0x1C009DC50 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C004E1B4 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRect(struct tagWND *a1, __int64 a2)
{
  int v2; // r9d

  if ( a1 )
  {
    v2 = 8;
  }
  else
  {
    a2 = 0LL;
    v2 = 645;
    a1 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v2);
}
