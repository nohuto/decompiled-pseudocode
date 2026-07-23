/*
 * XREFs of KiResetClockInterval @ 0x1405B66B0
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1405BF078 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x140276EBC (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetNextClockTickDueTime @ 0x140277974 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140277BC0 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140277C78 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiResetClockInterval(PRTL_BALANCED_NODE Node)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 Right_low; // rdx
  LARGE_INTEGER InterruptTimePrecise; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  RtlRbRemoveNode(&KiClockIntervalRequests, Node);
  Right_low = LODWORD(Node[1].Right);
  InterruptTimePrecise.QuadPart = 0LL;
  LOBYTE(Node[1].Children[0]) = 0;
  if ( (_DWORD)Right_low )
    PoTraceSystemTimerResolutionKernel(0, Right_low, 1);
  if ( !KiClockTimerPerCpuTickScheduling )
    return KiSetClockIntervalToMinimumRequested(v2, Right_low, v3);
  if ( KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  KiSetClockTimerKTimerDeadlines((__int64)KeGetCurrentPrcb(), InterruptTimePrecise, 0);
  LOBYTE(v6) = 1;
  return KiSetNextClockTickDueTime(InterruptTimePrecise, v6, v7);
}
