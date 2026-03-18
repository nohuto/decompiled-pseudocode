/*
 * XREFs of PopPdcEngagePhases @ 0x140750B68
 * Callers:
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14074D0DC (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A2BD88 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcEngagePhases(__int64 a1)
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140E67268 )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
