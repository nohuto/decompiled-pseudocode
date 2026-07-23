/*
 * XREFs of PopFxNotifySystemStateTransition @ 0x1404A2D4C
 * Callers:
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopFxNotifySystemStateTransition(__int64 a1, char a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 35368);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 64);
    if ( v3 )
    {
      if ( *(_QWORD *)(v3 + 104) )
      {
        if ( a2 )
          v4 = 39LL;
        else
          v4 = 40LL;
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 72), v4);
      }
    }
  }
}
