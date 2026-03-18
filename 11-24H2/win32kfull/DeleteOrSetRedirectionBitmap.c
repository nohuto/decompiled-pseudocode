/*
 * XREFs of DeleteOrSetRedirectionBitmap @ 0x14002D5F8
 * Callers:
 *     DeleteOldRedirectionBitmap @ 0x14002D554 (DeleteOldRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x140285640 (UserRecreateRedirectionBitmap.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B3404 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402B38D0 (xxxDwmStopRedirection.c)
 * Callees:
 *     GreDereferenceObject @ 0x14002CCA4 (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x14002D4E8 (GreSetRedirection.c)
 */

__int64 __fastcall DeleteOrSetRedirectionBitmap(__int64 a1, HSURF a2, int a3)
{
  __int64 v3; // rdi
  __int64 UserSessionState; // rax
  __int64 v6; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( a3 || (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) != 0x29D )
  {
    GreSetRedirection(a2, 0);
    GreMarkDeletableBitmap(a2);
    UserSessionState = W32GetUserSessionState();
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
    GreDereferenceObject(a2, 0);
    v6 = W32GetUserSessionState();
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v6 + 57008) + 48LL));
    result = *(_QWORD *)(v3 + 40);
    if ( a2 == *(HSURF *)(result + 120) )
      *(_QWORD *)(result + 120) = 0LL;
  }
  else
  {
    result = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(result + 120) = a2;
  }
  return result;
}
