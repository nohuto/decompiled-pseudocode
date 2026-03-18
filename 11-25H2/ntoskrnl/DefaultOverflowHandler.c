/*
 * XREFs of DefaultOverflowHandler @ 0x140549BC0
 * Callers:
 *     <none>
 * Callees:
 *     KeProfileInterruptWithSource @ 0x140498550 (KeProfileInterruptWithSource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DefaultOverflowHandler(__int64 a1)
{
  if ( HalpTimerProfilingCallback )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return KeProfileInterruptWithSource(a1, 0LL);
}
