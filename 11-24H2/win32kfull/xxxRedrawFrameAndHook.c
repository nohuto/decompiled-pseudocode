/*
 * XREFs of xxxRedrawFrameAndHook @ 0x140217A58
 * Callers:
 *     NtUserRedrawFrameAndHook @ 0x140244910 (NtUserRedrawFrameAndHook.c)
 * Callees:
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxRedrawFrameAndHook(struct tagWND *a1)
{
  __int64 v2; // rbx

  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  if ( IsTrayWindow(a1, 1LL) )
  {
    v2 = *(_QWORD *)a1;
    xxxCallHook(6LL, v2, 0LL, 10);
    PostShellHookMessagesEx((LastWokenThread *)6, v2);
  }
  return 1LL;
}
