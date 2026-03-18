/*
 * XREFs of InbvResetDisplay @ 0x14058F520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvResetDisplay(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( qword_140E65D40 && *(_QWORD *)(qword_140E65D40 + 24) )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return 0;
}
