/*
 * XREFs of UpdateWindowSpriteMonitor @ 0x140025828
 * Callers:
 *     ComposeWindow @ 0x1400316A8 (ComposeWindow.c)
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1401DED60 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     GreDwmNotifySpriteMonitorChange @ 0x1400258BC (GreDwmNotifySpriteMonitorChange.c)
 *     InitializeMonitorInfo @ 0x1400259E8 (InitializeMonitorInfo.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall UpdateWindowSpriteMonitor(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbx
  __int64 UserSessionState; // rax
  _BYTE v7[80]; // [rsp+20h] [rbp-58h] BYREF

  if ( a2 )
  {
    v2 = a1[5];
    if ( (*(_BYTE *)(v2 + 26) & 8) != 0 )
    {
      memset_0(v7, 0, 0x48uLL);
      InitializeMonitorInfo(v7, *(unsigned int *)(v2 + 288), a2, a1);
      v5 = *a1;
      UserSessionState = W32GetUserSessionState();
      GreDwmNotifySpriteMonitorChange(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL), v5, 0LL, v7);
    }
  }
}
