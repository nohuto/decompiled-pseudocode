/*
 * XREFs of IommuHvFlushTb @ 0x1404C38D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuHvFlushTb(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( qword_140FC0FB8 )
    guard_dispatch_icall_no_overrides(0LL, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL), a2, a3);
  return 0LL;
}
