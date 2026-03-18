/*
 * XREFs of DefaultOverflowHandler @ 0x14054C4B0
 * Callers:
 *     <none>
 * Callees:
 *     KeProfileInterruptWithSource @ 0x140498080 (KeProfileInterruptWithSource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DefaultOverflowHandler(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( HalpTimerProfilingCallback )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return KeProfileInterruptWithSource(a1, 0LL);
}
