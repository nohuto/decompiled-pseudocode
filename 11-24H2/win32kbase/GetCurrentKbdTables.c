/*
 * XREFs of GetCurrentKbdTables @ 0x140214310
 * Callers:
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x140214224 (-SendKeyUpDown@@YAXEE@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1401098D4 (PtiKbdFromQ.c)
 */

__int64 __fastcall GetCurrentKbdTables(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( !*(_QWORD *)(W32GetUserSessionState(a1) + 18944) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v1);
  v4 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(UserSessionState + 18944)) + 480);
  if ( v4 )
    return *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
  else
    return *(_QWORD *)(W32GetUserSessionState(v5) + 14064);
}
