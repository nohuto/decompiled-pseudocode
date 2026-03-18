/*
 * XREFs of ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x140287884
 * Callers:
 *     zzzInputFocusLostWindowEvent @ 0x14023D6B8 (zzzInputFocusLostWindowEvent.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1402879CC (zzzDelegateInputFocusLostWindowEvent.c)
 * Callees:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusLostWindowEventImpl(struct tagWND *a1, __int64 a2, unsigned int a3)
{
  struct tagWND *v5; // rbx
  struct tagWND *v6; // rax
  __int64 UserSessionState; // rax
  int v8; // ecx
  int v9; // edx

  v5 = a1;
  if ( a2 && (v6 = *(struct tagWND **)(a2 + 120)) != 0LL && v6 != a1 && *((_QWORD *)a1 + 2) == *((_QWORD *)v6 + 2) )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v5 = *(struct tagWND **)(a2 + 120);
    v8 = 35;
    v9 = 33;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v8 = 51;
    v9 = 49;
  }
  if ( !*(_DWORD *)(UserSessionState + 70856) )
    v8 = v9;
  xxxWindowEvent(0x80000003, v5, 0, a3, v8);
}
