/*
 * XREFs of KiSetClockInterval @ 0x140463DB4
 * Callers:
 *     KeSetClockInterval @ 0x140463D8C (KeSetClockInterval.c)
 * Callees:
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140317E50 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1403183C8 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140410FE0 (PoTraceSystemTimerResolutionKernel.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rax
  LARGE_INTEGER InterruptTimePrecise; // rbx
  unsigned int ClockTickDueTime; // eax
  int v11; // edx
  unsigned int v12; // ebx
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)a3);
  *(_DWORD *)(a3 + 28) = a1;
  if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
  {
    if ( KiClockIntervalRequests.Root )
      Root = (unsigned __int64)KiClockIntervalRequests.Root ^ (unsigned __int64)&KiClockIntervalRequests;
    else
      Root = 0LL;
  }
  else
  {
    Root = (unsigned __int64)KiClockIntervalRequests.Root;
  }
  v7 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( a1 >= *(_DWORD *)(Root + 28) )
      {
        v8 = *(_QWORD *)(Root + 8);
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_14;
          v8 ^= Root;
        }
        if ( !v8 )
        {
LABEL_14:
          v7 = 1;
          break;
        }
      }
      else
      {
        v8 = *(_QWORD *)Root;
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= Root;
        }
        if ( !v8 )
          break;
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v7, (PRTL_BALANCED_NODE)a3);
  *(_BYTE *)(a3 + 24) = 1;
  if ( a2 )
    KePseudoHrTimeIncrement = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    if ( KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    else
      InterruptTimePrecise.QuadPart = 0LL;
    KiSetClockTimerKTimerDeadlines((__int64)KeGetCurrentPrcb(), InterruptTimePrecise, 0);
    ClockTickDueTime = KiSetNextClockTickDueTime(InterruptTimePrecise, 1u);
  }
  else
  {
    ClockTickDueTime = KiSetClockIntervalToMinimumRequested();
  }
  v11 = *(_DWORD *)(a3 + 32);
  v12 = ClockTickDueTime;
  if ( v11 )
    PoTraceSystemTimerResolutionKernel(a1, v11, 1);
  return v12;
}
