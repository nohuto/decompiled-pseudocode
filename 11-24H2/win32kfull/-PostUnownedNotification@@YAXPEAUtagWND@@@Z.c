/*
 * XREFs of ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x14024F684
 * Callers:
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140087614 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 */

void __fastcall PostUnownedNotification(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rcx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944)
      || (UserSessionState = W32GetUserSessionState(v4, v3),
          v6 = 26LL,
          *(struct tagWND **)(*(_QWORD *)(UserSessionState + 18944) + 128LL) != a1) )
    {
      v6 = 29LL;
    }
    PostIAMShellHookMessage(v6, *(_QWORD *)a1);
  }
}
