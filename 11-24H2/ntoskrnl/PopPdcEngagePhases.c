/*
 * XREFs of PopPdcEngagePhases @ 0x14075C414
 * Callers:
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1407577FC (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A6E038 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcEngagePhases(__int64 a1)
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140E676B8 )
    return guard_dispatch_icall_no_overrides(a1, qword_140E676B8);
  return result;
}
