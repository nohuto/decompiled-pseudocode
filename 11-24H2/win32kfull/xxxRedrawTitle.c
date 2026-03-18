/*
 * XREFs of xxxRedrawTitle @ 0x1400677A8
 * Callers:
 *     xxxEnableMenuItem @ 0x14006F560 (xxxEnableMenuItem.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140090378 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1401DCE70 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     NtUserRedrawTitle @ 0x1402449A0 (NtUserRedrawTitle.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140068C50 (-IsInsideUserApiHook@@YAHXZ.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxRedrawTitle(struct tagWND *a1, __int64 a2)
{
  char v3; // si
  _BYTE *v4; // rcx
  unsigned int v5; // ebp
  __int64 v7; // rbx
  HDC DCEx; // rbx

  v3 = a2;
  v4 = (_BYTE *)*((_QWORD *)a1 + 5);
  v5 = 1;
  if ( (v4[31] & 0x10) != 0 )
  {
    if ( (v4[30] & 0xC0) == 0xC0 )
    {
      if ( (v4[16] & 0x40) != 0
        && *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) == *(_QWORD *)(W32GetUserSessionState(v4, a2) + 18944) )
      {
        v3 |= 1u;
      }
      if ( (unsigned int)IsInsideUserApiHook() )
      {
        xxxSendMessage(a1, 0xAEu);
      }
      else
      {
        DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar(a1, DCEx);
        _ReleaseDC(DCEx);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  if ( IsTrayWindow(a1, 1LL) && (v3 & 0xC) != 0 )
  {
    v7 = *(_QWORD *)a1;
    xxxCallHook(6, *(_QWORD *)a1, 0LL, 10);
    PostShellHookMessagesEx((LastWokenThread *)6, v7);
  }
  return v5;
}
