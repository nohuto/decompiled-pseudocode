/*
 * XREFs of InbvResetDisplay @ 0x14058C540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvResetDisplay(__int64 a1, __int64 a2)
{
  if ( qword_140E65E70 && *(_QWORD *)(qword_140E65E70 + 24) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
