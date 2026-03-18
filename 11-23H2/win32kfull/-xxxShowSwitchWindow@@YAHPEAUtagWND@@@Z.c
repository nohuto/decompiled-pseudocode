/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01C966C
 * Callers:
 *     xxxNextWindow @ 0x1C01C9C54 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CA428 (xxxOldNextWindow.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00632E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GetMonitorWorkRect @ 0x1C00D8B88 (GetMonitorWorkRect.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01C8758 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  struct tagWND *v3; // rbx
  __int64 v4; // rsi
  struct tagSwitchWndInfo *v5; // rax
  struct tagSwitchWndInfo *v6; // rdi
  struct tagSwitchWndInfo *v7; // rax
  struct tagSwitchWndInfo *v8; // rax
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF

  v3 = (struct tagWND *)gspwndAltTab;
  v4 = *(_QWORD *)(GetDispInfo(a1, a2, a3) + 96);
  v5 = Getpswi(v3);
  v6 = v5;
  if ( !v5
    || *((_DWORD *)v5 + 27) && (_GetKeyState(18LL) & 0x8000u) == 0LL
    || !*((_DWORD *)v6 + 27) && (_GetAsyncKeyState(18LL) & 0x8000u) == 0LL )
  {
    return 0LL;
  }
  v10 = *GetMonitorWorkRect(&v10, v4);
  xxxSetWindowPos(v3, -1LL, 0LL, 0LL, 0, 0, 27);
  if ( (*(_BYTE *)(*((_QWORD *)v3 + 5) + 31LL) & 0x10) == 0 )
  {
    v7 = Getpswi(v3);
    if ( !v7 )
      return 0LL;
    xxxSetWindowPos(
      v3,
      -1LL,
      (unsigned int)(((int)v10 + DWORD2(v10) - *((_DWORD *)v7 + 19)) / 2),
      (unsigned int)((DWORD1(v10) + HIDWORD(v10) - *((_DWORD *)v7 + 20)) / 2),
      *((_DWORD *)v7 + 19),
      *((_DWORD *)v7 + 20),
      80);
  }
  xxxInternalUpdateWindow(v3, 1u);
  xxxWindowEvent(0x14u, v3, -4, 0, 1);
  v8 = Getpswi(v3);
  if ( v8 )
  {
    xxxWindowEvent(0x8005u, v3, -4, *((_DWORD *)v8 + 17) + 1 + *((_DWORD *)v8 + 14) * *((_DWORD *)v8 + 18), 1);
    return 1LL;
  }
  return 0LL;
}
