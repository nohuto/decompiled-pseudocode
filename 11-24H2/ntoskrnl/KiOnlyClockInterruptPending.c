/*
 * XREFs of KiOnlyClockInterruptPending @ 0x1405BA498
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1405B9944 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiOnlyClockInterruptPending(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  if ( !*a2 )
  {
    *(_BYTE *)a1 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    *a2 = 1;
  }
  return *(_BYTE *)a1;
}
