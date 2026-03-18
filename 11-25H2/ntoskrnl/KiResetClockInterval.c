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

__int64 __fastcall KiResetClockInterval(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 InterruptTimePrecise; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  RtlRbRemoveNode((unsigned __int64)&KiClockIntervalRequests, (unsigned __int64 *)a1);
  v4 = *(unsigned int *)(a1 + 32);
  InterruptTimePrecise = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  if ( (_DWORD)v4 )
    PoTraceSystemTimerResolutionKernel(0, v4, 1);
  if ( !KiClockTimerPerCpuTickScheduling )
    return KiSetClockIntervalToMinimumRequested(v2, v4, v3);
  if ( KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v9);
  KiSetClockTimerKTimerDeadlines((__int64)KeGetCurrentPrcb(), InterruptTimePrecise, 0);
  LOBYTE(v6) = 1;
  return KiSetNextClockTickDueTime(InterruptTimePrecise, v6, v7);
}
