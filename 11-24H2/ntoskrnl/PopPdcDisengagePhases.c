/*
 * XREFs of PopPdcDisengagePhases @ 0x140A93B20
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140A6DE90 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A6E038 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcDisengagePhases(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140E676C0 )
    return guard_dispatch_icall_no_overrides(qword_140E676C0, a2);
  return result;
}
