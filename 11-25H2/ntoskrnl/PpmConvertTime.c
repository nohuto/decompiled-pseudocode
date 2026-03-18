/*
 * XREFs of PpmConvertTime @ 0x1403E7C50
 * Callers:
 *     PpmConvertTimeFrom @ 0x1403E7C34 (PpmConvertTimeFrom.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1403ECC24 (PpmHvSnapPerformanceAccumulation.c)
 *     PoNotifySystemTimeSet @ 0x1404CA36C (PoNotifySystemTimeSet.c)
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1407452DC (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTraceHiberStats @ 0x140A594AC (PopDiagTraceHiberStats.c)
 *     PopPotsLogHibernatePerformance @ 0x140A59D2C (PopPotsLogHibernatePerformance.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140B560C8 (PopSstDiagInitializeResumeTimer.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140B5ECB0 (PopDiagComputeEarlyHiberStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTime(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9

  v3 = a1;
  if ( a1 && a2 && a2 != a3 )
  {
    if ( is_mul_ok(a1, a3) )
      return a1 * (unsigned __int128)a3 / a2;
    else
      return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
  }
  return v3;
}
