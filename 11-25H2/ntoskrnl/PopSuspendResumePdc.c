/*
 * XREFs of PopSuspendResumePdc @ 0x140A7707C
 * Callers:
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x14074D990 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x14074DA30 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopSuspendResumePdc(__int64 a1)
{
  __int64 result; // rax

  result = qword_140E67230;
  if ( qword_140E67230 )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
