/*
 * XREFs of PpmEndActiveTimeAccumulation @ 0x1403B69C4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403B4CA0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x1403505D0 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x140434060 (PpmUpdateTimeAccumulation.c)
 *     PpmGetPmcCounters @ 0x140456D70 (PpmGetPmcCounters.c)
 */

__int64 __fastcall PpmEndActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  PpmUpdatePerformanceFeedback(a1, 0, 0, 1, 0LL);
  result = PpmGetPmcCounters(a1, 0LL, 0LL);
  *(_QWORD *)(a1 + 34920) = a2;
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 34912));
  return result;
}
