/*
 * XREFs of ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x14021E1C0
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14024E024 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140066E58 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

void __fastcall xxxNotifyShellOfWindowSwap(struct tagWND *a1, struct tagWND *a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 UserSessionState; // rax

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  _PostShellHookMsgWorker(*(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19928) + 1378LL), v2, v3, 0LL);
  PostShellHookMessagesEx((LastWokenThread *)0xE, v3);
  PostShellHookMessagesEx((LastWokenThread *)0xD, v2);
  xxxCallHook(13LL, v2, v3, 10);
}
