/*
 * XREFs of PopPdcDisengagePhases @ 0x140A2BB44
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140A2BBE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A2BD88 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 PopPdcDisengagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140E67270 )
    return guard_dispatch_icall_no_overrides(qword_140E67270);
  return result;
}
