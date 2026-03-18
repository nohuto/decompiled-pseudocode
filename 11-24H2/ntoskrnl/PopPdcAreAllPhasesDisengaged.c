/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x140902A58
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1409026E0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopArmIdlePhaseWatchdog @ 0x14090292C (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPdcAreAllPhasesDisengaged(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al

  result = 1;
  if ( qword_140E67560 )
    return guard_dispatch_icall_no_overrides(qword_140E67560, a2, a3, a4);
  return result;
}
