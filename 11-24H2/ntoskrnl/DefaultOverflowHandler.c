/*
 * XREFs of DefaultOverflowHandler @ 0x140549D70
 * Callers:
 *     <none>
 * Callees:
 *     KeProfileInterruptWithSource @ 0x140492A60 (KeProfileInterruptWithSource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DefaultOverflowHandler(__int64 a1, __int64 a2)
{
  if ( HalpTimerProfilingCallback )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return KeProfileInterruptWithSource(a1, 0LL);
}
