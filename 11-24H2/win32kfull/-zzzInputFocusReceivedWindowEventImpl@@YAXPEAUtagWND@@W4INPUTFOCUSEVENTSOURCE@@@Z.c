/*
 * XREFs of ?zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x140287920
 * Callers:
 *     zzzInputFocusReceivedWindowEvent @ 0x14023D6F8 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzDelegateInputFocusReceivedWindowEvent @ 0x140287A08 (zzzDelegateInputFocusReceivedWindowEvent.c)
 * Callees:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusReceivedWindowEventImpl(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 UserSessionState; // rax
  int v7; // ecx

  v2 = a2;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 480LL);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 40);
  else
    LODWORD(v5) = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = 35;
  if ( !*(_DWORD *)(UserSessionState + 70856) )
    v7 = 33;
  xxxWindowEvent(0x80000002, a1, v5, v2, v7);
}
