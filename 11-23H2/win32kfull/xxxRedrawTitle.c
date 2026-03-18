/*
 * XREFs of xxxRedrawTitle @ 0x1C00E0970
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00DE154 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C01569C0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     NtUserRedrawTitle @ 0x1C01D8760 (NtUserRedrawTitle.c)
 *     xxxEnableMenuItem @ 0x1C02216E0 (xxxEnableMenuItem.c)
 *     xxxHelpLoop @ 0x1C0238C64 (xxxHelpLoop.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 *     xxxDrawCaptionBar @ 0x1C00E2158 (xxxDrawCaptionBar.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EF6FC (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 */

__int64 __fastcall xxxRedrawTitle(unsigned __int64 *a1, unsigned int a2)
{
  unsigned int v3; // edi
  _BYTE *v4; // rcx
  unsigned int v5; // ebp
  __int64 v7; // rbx
  __int64 DCEx; // rbx

  v3 = a2;
  v4 = (_BYTE *)a1[5];
  v5 = 1;
  if ( (v4[31] & 0x10) != 0 )
  {
    if ( (v4[30] & 0xC0) == 0xC0 )
    {
      if ( (v4[16] & 0x40) != 0 && *(_QWORD *)(a1[2] + 432) == gpqForeground )
        v3 = a2 | 1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar(a1, DCEx, v3);
        _ReleaseDC(DCEx);
      }
      else
      {
        xxxSendMessage(a1, 174LL, v3, 0LL);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  if ( (unsigned __int8)IsTrayWindow(a1, 1LL) && (v3 & 0xC) != 0 )
  {
    v7 = *a1;
    xxxCallHook(6LL, *a1, 0LL, 10LL);
    PostShellHookMessagesEx(6u, v7, 0LL);
  }
  return v5;
}
