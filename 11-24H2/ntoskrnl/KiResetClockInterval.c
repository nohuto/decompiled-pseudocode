/*
 * XREFs of KiResetClockInterval @ 0x1405BA4D4
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1405C3158 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KiSetNextClockTickDueTime @ 0x1402A01F0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402A04E0 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402A0A58 (KiSetClockIntervalToMinimumRequested.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402A18F4 (PoTraceSystemTimerResolutionKernel.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
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

  RtlRbRemoveNode((unsigned __int64 *)&KiClockIntervalRequests, (unsigned __int64 *)a1);
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
