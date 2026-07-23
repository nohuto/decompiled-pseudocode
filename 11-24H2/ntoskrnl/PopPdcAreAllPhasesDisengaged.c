/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x140A6E338
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140A6DFC0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopArmIdlePhaseWatchdog @ 0x140A6E20C (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPdcAreAllPhasesDisengaged(__int64 a1, __int64 a2)
{
  char result; // al

  result = 1;
  if ( qword_140E676D0 )
    return guard_dispatch_icall_no_overrides(qword_140E676D0, a2);
  return result;
}
