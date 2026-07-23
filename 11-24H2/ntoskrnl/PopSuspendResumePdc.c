/*
 * XREFs of PopSuspendResumePdc @ 0x140A7300C
 * Callers:
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140758230 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407582D0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopSuspendResumePdc(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E67680;
  if ( qword_140E67680 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
