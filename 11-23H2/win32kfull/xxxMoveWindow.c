/*
 * XREFs of xxxMoveWindow @ 0x1C00844E0
 * Callers:
 *     NtUserMoveWindow @ 0x1C0084360 (NtUserMoveWindow.c)
 *     xxxSBWndProc @ 0x1C022A1A0 (xxxSBWndProc.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     xxxValidateRect @ 0x1C009DD2C (xxxValidateRect.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 */

__int64 __fastcall xxxMoveWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rdx
  unsigned int v8; // r8d
  int v9; // r9d
  unsigned int v11; // edi

  if ( a1 == (struct tagWND *)GetDesktopWindow(a1, a2)
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) != 0
    || *((_QWORD *)a1 + 13) != GetDesktopWindow(a1, v7) )
  {
    return xxxSetWindowPos(a1, 0LL, (unsigned int)v7, v8, v9, a5, a6 != 0 ? 20 : 28);
  }
  v11 = xxxSetWindowPos(a1, 0LL, (unsigned int)v7, v8, v9, a5, 20);
  if ( !a6 )
    xxxValidateRect(a1, 0LL);
  return v11;
}
