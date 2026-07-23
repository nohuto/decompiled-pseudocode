/*
 * XREFs of PpmConvertTime @ 0x140437380
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1402AFD50 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmConvertTimeFrom @ 0x140437360 (PpmConvertTimeFrom.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x140440784 (PpmHvSnapPerformanceAccumulation.c)
 *     PoNotifySystemTimeSet @ 0x1404C3C60 (PoNotifySystemTimeSet.c)
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     PpmParkApplyPolicyEx @ 0x1405DE964 (PpmParkApplyPolicyEx.c)
 *     PopCalculateWakeTimeAdjustment @ 0x14074F6CC (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTraceHiberStats @ 0x140A533BC (PopDiagTraceHiberStats.c)
 *     PopPotsLogHibernatePerformance @ 0x140A53C3C (PopPotsLogHibernatePerformance.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140B68308 (PopSstDiagInitializeResumeTimer.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140B6F604 (PopDiagComputeEarlyHiberStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTime(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( !a1 || !a2 || a2 == a3 )
    return a1;
  if ( is_mul_ok(a1, a3) )
    return a1 * (unsigned __int128)a3 / a2;
  return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
}
