/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x14037009C
 * Callers:
 *     PpmContinueTimeAccumulation @ 0x1402AD8FC (PpmContinueTimeAccumulation.c)
 *     PpmInstallFeedbackCounters @ 0x1404C362C (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x14036EAB0 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x1403700D0 (PpmUpdateTimeAccumulation.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
