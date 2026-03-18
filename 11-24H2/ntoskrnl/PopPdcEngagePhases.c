/*
 * XREFs of PopPdcEngagePhases @ 0x14075D474
 * Callers:
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14075939C (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140902758 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcEngagePhases(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140E67548 )
    return guard_dispatch_icall_no_overrides(a1, qword_140E67548, a3, a4);
  return result;
}
