/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x140A2C09C
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140A2BD10 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopArmIdlePhaseWatchdog @ 0x140A2BF70 (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char PopPdcAreAllPhasesDisengaged()
{
  char result; // al

  result = 1;
  if ( qword_140E67280 )
    return guard_dispatch_icall_no_overrides(qword_140E67280);
  return result;
}
