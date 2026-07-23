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
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rax
  LARGE_INTEGER InterruptTimePrecise; // rbx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // ebx
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
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))KiSetClockTimerKTimerDeadlines)(
      KeGetCurrentPrcb(),
      (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
      0LL);
    LOBYTE(v10) = 1;
    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiSetNextClockTickDueTime)(
            (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
            v10);
  }
  else
  {
    v11 = KiSetClockIntervalToMinimumRequested();
  }
  v13 = *(unsigned int *)(a3 + 32);
  v14 = v11;
  if ( (_DWORD)v13 )
  {
    LOBYTE(v12) = 1;
    PoTraceSystemTimerResolutionKernel(a1, v13, v12);
  }
  return v14;
}
