/*
 * XREFs of GetKeyboardDelegationTargetQ @ 0x140212810
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140189DE4 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     PtiFromThreadId @ 0x1400D8ED0 (PtiFromThreadId.c)
 */

__int64 __fastcall GetKeyboardDelegationTargetQ(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  __int64 v3; // rax

  v1 = 0LL;
  v2 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 19656) + 4LL);
  if ( v2 )
  {
    v3 = PtiFromThreadId(v2);
    if ( v3 )
      return *(_QWORD *)(v3 + 472);
  }
  return v1;
}
