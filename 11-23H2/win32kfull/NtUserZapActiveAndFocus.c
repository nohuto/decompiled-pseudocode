/*
 * XREFs of NtUserZapActiveAndFocus @ 0x1C01DFA80
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A640 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

__int64 NtUserZapActiveAndFocus()
{
  tagQ *v0; // rbx
  struct tagWND *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterCrit(0LL, 0LL);
  v0 = *(tagQ **)(gptiCurrent + 432LL);
  tagQ::SetActiveWindow(v0, 0LL);
  v1 = tagQ::UnlockFocusWnd(v0);
  if ( v1 )
  {
    v3 = gpqForeground;
    v2 = gpqForeground;
    if ( v0 == (tagQ *)gpqForeground )
      zzzInputFocusLostWindowEventImpl(v1, gpqForeground, 0xBu);
  }
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return 1LL;
}
