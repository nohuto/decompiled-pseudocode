/*
 * XREFs of PpmEndActiveTimeAccumulation @ 0x140371B70
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x14036EAB0 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x1403700D0 (PpmUpdateTimeAccumulation.c)
 *     PpmGetPmcCounters @ 0x14044C5BC (PpmGetPmcCounters.c)
 */

__int64 __fastcall PpmEndActiveTimeAccumulation(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  PpmUpdateTimeAccumulation(a1, a2, 1);
  PpmUpdatePerformanceFeedback(a1, 0, 0, 1, 0LL);
  result = PpmGetPmcCounters(a1, 0LL, 0LL);
  *(_QWORD *)(a1 + 34920) = a2;
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 34912));
  return result;
}
