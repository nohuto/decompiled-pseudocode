/*
 * XREFs of InbvResetDisplay @ 0x14058BD40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvResetDisplay(__int64 a1)
{
  if ( qword_140E65AE8 && *(_QWORD *)(qword_140E65AE8 + 24) )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 0;
}
