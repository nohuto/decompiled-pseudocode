/*
 * XREFs of PoFxProcessorNotification @ 0x1404A76D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PoFxProcessorNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 && *(_QWORD *)(v4 + 104) )
    return (unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72), a2, a3, a4) == 0 ? 0xC00000BB : 0;
  else
    return 3221225474LL;
}
