/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x140434024
 * Callers:
 *     PpmContinueTimeAccumulation @ 0x14029F2E8 (PpmContinueTimeAccumulation.c)
 *     PpmInstallFeedbackCounters @ 0x140433E50 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x1403505D0 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x140434060 (PpmUpdateTimeAccumulation.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
