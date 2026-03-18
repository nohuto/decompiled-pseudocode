/*
 * XREFs of HintSpriteShape @ 0x14002D818
 * Callers:
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1402852E4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x140285640 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GreHintSpriteShape @ 0x140027AF0 (GreHintSpriteShape.c)
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1400CB71C (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

_BOOL8 __fastcall HintSpriteShape(HDEV a1, const struct tagWND *a2, HBITMAP a3, int a4)
{
  int v8; // eax
  _BYTE v10[144]; // [rsp+40h] [rbp-C8h] BYREF

  memset_0(v10, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v10);
  v8 = IsWindowDesktopComposed(a2);
  return (unsigned int)GreHintSpriteShape(a1, *(HWND *)a2, a3, (__int64)v10, a4, v8, 1) != 0;
}
