/*
 * XREFs of PpmConvertTime @ 0x14032D070
 * Callers:
 *     PpmConvertTimeFrom @ 0x14032D050 (PpmConvertTimeFrom.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x140448064 (PpmHvSnapPerformanceAccumulation.c)
 *     PoNotifySystemTimeSet @ 0x1404CA740 (PoNotifySystemTimeSet.c)
 *     PpmParkApplyPolicy @ 0x1404ED2F4 (PpmParkApplyPolicy.c)
 *     PpmParkApplyPolicyEx @ 0x1405E1344 (PpmParkApplyPolicyEx.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1407513AC (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTraceHiberStats @ 0x140A5B7EC (PopDiagTraceHiberStats.c)
 *     PopPotsLogHibernatePerformance @ 0x140A5C06C (PopPotsLogHibernatePerformance.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140B661C8 (PopSstDiagInitializeResumeTimer.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140B6DD64 (PopDiagComputeEarlyHiberStats.c)
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
