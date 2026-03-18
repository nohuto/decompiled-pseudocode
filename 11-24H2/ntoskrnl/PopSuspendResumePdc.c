/*
 * XREFs of PopSuspendResumePdc @ 0x140A78D0C
 * Callers:
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140759DE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140759E80 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopSuspendResumePdc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = qword_140E67510;
  if ( qword_140E67510 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  return result;
}
