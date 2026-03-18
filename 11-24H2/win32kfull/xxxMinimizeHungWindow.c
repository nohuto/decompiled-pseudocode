/*
 * XREFs of xxxMinimizeHungWindow @ 0x14026994C
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxSendMinRectMessages @ 0x14003CD64 (xxxSendMinRectMessages.c)
 *     xxxRedrawWindow @ 0x140042630 (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1400F7A10 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxShowOwnedWindows @ 0x140182F28 (xxxShowOwnedWindows.c)
 *     xxxDrawAnimatedRects @ 0x1402DE074 (xxxDrawAnimatedRects.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMinimizeHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 result; // rax
  struct tagWND *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 RectRgnIndirect; // rbx
  __int64 v7; // rdx
  struct tagWND *v8; // rcx
  struct tagRECT v9; // [rsp+40h] [rbp-28h] BYREF

  result = *((_QWORD *)a1 + 5);
  v3 = a1;
  v9 = 0LL;
  LOBYTE(a1) = *(_BYTE *)(result + 31);
  if ( ((unsigned __int8)a1 & 0x20) == 0 && ((unsigned __int8)a1 & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 67056) & 0x10000) != 0 )
    {
      xxxSendMinRectMessages((unsigned __int64 *)v3, (__int64)&v9);
      if ( !IsRectEmptyInl(&v9) )
        xxxDrawAnimatedRects(v3);
    }
    SetVisible((__int64)v3, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)v3 + 5) + 88LL, v4, v5);
    xxxShowOwnedWindows((__int64)v3, 1u, RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v3, 1LL, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)v3 + 13) == GetDesktopWindow((__int64)v3) )
      xxxActivateOnMinimize(v8, v7);
    return PostEventMessageEx(
             *((struct tagTHREADINFO **)v3 + 2),
             *(struct tagQ **)(*((_QWORD *)v3 + 2) + 472LL),
             0xAu,
             (LARGE_INTEGER *)v3,
             0,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
