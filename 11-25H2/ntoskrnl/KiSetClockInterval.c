/*
 * XREFs of KiSetClockInterval @ 0x14027614C
 * Callers:
 *     KeSetClockInterval @ 0x1402762A4 (KeSetClockInterval.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x140276EBC (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetNextClockTickDueTime @ 0x140277974 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140277BC0 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140277C78 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 InterruptTimePrecise; // rbx
  __int64 v9; // rdx
  unsigned int ClockTickDueTime; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // ebx
  char v15; // [rsp+40h] [rbp+18h] BYREF

  v3 = a3;
  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, a3);
  *(_DWORD *)(v3 + 28) = a1;
  if ( (qword_140E66478 & 1) != 0 )
  {
    if ( KiClockIntervalRequests )
      v6 = KiClockIntervalRequests ^ (unsigned __int64)&KiClockIntervalRequests;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = KiClockIntervalRequests;
  }
  LOBYTE(a3) = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a1 >= *(_DWORD *)(v6 + 28) )
      {
        v7 = *(_QWORD *)(v6 + 8);
        if ( (qword_140E66478 & 1) != 0 )
        {
          if ( !v7 )
            goto LABEL_14;
          v7 ^= v6;
        }
        if ( !v7 )
        {
LABEL_14:
          LOBYTE(a3) = 1;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)v6;
        if ( (qword_140E66478 & 1) != 0 )
        {
          if ( !v7 )
            break;
          v7 ^= v6;
        }
        if ( !v7 )
          break;
      }
      v6 = v7;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, v6, a3, v3);
  *(_BYTE *)(v3 + 24) = 1;
  if ( a2 )
    KePseudoHrTimeIncrement = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    if ( KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v15);
    else
      InterruptTimePrecise = 0LL;
    KiSetClockTimerKTimerDeadlines(KeGetCurrentPrcb(), InterruptTimePrecise, 0LL);
    LOBYTE(v9) = 1;
    ClockTickDueTime = KiSetNextClockTickDueTime(InterruptTimePrecise, v9);
  }
  else
  {
    ClockTickDueTime = KiSetClockIntervalToMinimumRequested();
  }
  v12 = *(unsigned int *)(v3 + 32);
  v13 = ClockTickDueTime;
  if ( (_DWORD)v12 )
  {
    LOBYTE(v11) = 1;
    PoTraceSystemTimerResolutionKernel(a1, v12, v11);
  }
  return v13;
}
