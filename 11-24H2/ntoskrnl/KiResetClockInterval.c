/*
 * XREFs of KiResetClockInterval @ 0x1405B7B04
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1405C0728 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140317E50 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1403183C8 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140410FE0 (PoTraceSystemTimerResolutionKernel.c)
 */

__int64 __fastcall KiResetClockInterval(PRTL_BALANCED_NODE Node)
{
  int Right; // edx
  LARGE_INTEGER InterruptTimePrecise; // rdi
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  RtlRbRemoveNode(&KiClockIntervalRequests, Node);
  Right = (int)Node[1].Right;
  InterruptTimePrecise.QuadPart = 0LL;
  LOBYTE(Node[1].Children[0]) = 0;
  if ( Right )
    PoTraceSystemTimerResolutionKernel(0, Right, 1);
  if ( !KiClockTimerPerCpuTickScheduling )
    return KiSetClockIntervalToMinimumRequested();
  if ( KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  KiSetClockTimerKTimerDeadlines((__int64)KeGetCurrentPrcb(), InterruptTimePrecise, 0);
  return KiSetNextClockTickDueTime(InterruptTimePrecise, 1u);
}
