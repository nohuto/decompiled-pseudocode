/*
 * XREFs of xxxRedrawFrameAndHook @ 0x1C022716C
 * Callers:
 *     NtUserRedrawFrameAndHook @ 0x1C01D86A0 (NtUserRedrawFrameAndHook.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EF6FC (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 */

__int64 __fastcall xxxRedrawFrameAndHook(struct tagWND *a1)
{
  unsigned __int64 v2; // rbx

  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  if ( IsTrayWindow(a1, 1) )
  {
    v2 = *(_QWORD *)a1;
    xxxCallHook(6LL, v2, 0LL, 10LL);
    PostShellHookMessagesEx(6u, v2, 0LL);
  }
  return 1LL;
}
