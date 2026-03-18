/*
 * XREFs of ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x1400690E0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1400883B4 (_anonymous_namespace_--xxxUpdateTray.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

void __fastcall xxxSetTrayWindow(struct tagDESKTOP *a1, struct tagWND *a2)
{
  unsigned __int64 v2; // rdi
  struct tagTHREADINFO *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( a2 )
    v2 = *(_QWORD *)a2;
  else
    v2 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 184LL) )
    PostShellHookMessagesEx((LastWokenThread *)4, v2);
  v3 = PtiCurrent((__int64)a1, (__int64)a2);
  if ( ((*((_DWORD *)v3 + 180) | *(_DWORD *)(**((_QWORD **)PtiCurrent(v5, v4) + 63) + 16LL)) & 0x800) != 0 )
    xxxCallHook(4, v2, 0LL, 10);
}
