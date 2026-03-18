/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x1403E99A0
 * Callers:
 *     PpmContinueTimeAccumulation @ 0x1403E8B08 (PpmContinueTimeAccumulation.c)
 *     PpmInstallFeedbackCounters @ 0x1403E9C74 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x14031C3F0 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x1403E99E0 (PpmUpdateTimeAccumulation.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
