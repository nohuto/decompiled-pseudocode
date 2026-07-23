/*
 * XREFs of KiSetClockTickRate @ 0x140276FBC
 * Callers:
 *     KiSetNextClockTickDueTime @ 0x140277974 (KiSetNextClockTickDueTime.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140277C78 (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KiSetPendingTick @ 0x140277258 (KiSetPendingTick.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiSetClockTickRate(unsigned int a1, unsigned __int8 a2)
{
  __int64 v2; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  LARGE_INTEGER InterruptTimePrecise; // r14
  LARGE_INTEGER *v9; // rbx
  int v10; // eax
  __int64 ClockIncrementTraceIndex; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v14[2]; // [rsp+40h] [rbp-30h] BYREF
  int v15; // [rsp+42h] [rbp-2Eh]
  __int16 v16; // [rsp+46h] [rbp-2Ah]
  __int64 v17; // [rsp+48h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-20h]
  _QWORD v19[2]; // [rsp+58h] [rbp-18h] BYREF

  v2 = a1;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = KiClockState;
  if ( a2 )
  {
    guard_dispatch_icall_no_overrides(1LL, a1);
    v7 = 1;
  }
  else
  {
    guard_dispatch_icall_no_overrides(0LL, a1);
    v7 = 0;
  }
  LOBYTE(v6) = 1;
  CurrentPrcb->ClockTimerState.OneShotState = v7;
  KiSetPendingTick(v6);
  if ( CurrentPrcb->ClockOwner )
  {
    KeTimeIncrement = 0;
    KiLastRequestedTimeIncrement = v2;
    if ( KiClockTimerPerCpuTickScheduling )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    else
      InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
    KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + (unsigned int)KeTimeIncrement;
    KiClockOwnerOneShotRequestState = a2 != 0;
    if ( v5 == 2 )
      LOBYTE(v5) = _InterlockedExchange(&KiClockState, 0);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v17 = 0LL;
      v15 = 0;
      v19[0] = v14;
      v16 = 0;
      v14[0] = 0;
      v14[1] = v5;
      v18 = v2;
      v19[1] = 24LL;
      EtwTraceKernelEvent((int)v19, 1, 0x40100000u, 3927, 1538);
    }
  }
  else
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  }
  CurrentPrcb->ClockTimerState.TimeIncrement = 0;
  CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = v2;
  if ( KeTimeIncrement < (unsigned int)dword_140F209B4 )
    dword_140F209B4 = KeTimeIncrement;
  if ( KeTimeIncrement > (unsigned int)dword_140F209B0 )
    dword_140F209B0 = KeTimeIncrement;
  if ( (unsigned int)v2 < dword_140F209BC )
    dword_140F209BC = v2;
  if ( (unsigned int)v2 > dword_140F209B8 )
    dword_140F209B8 = v2;
  if ( CurrentPrcb->ClockOwner )
  {
    v9 = (LARGE_INTEGER *)((char *)&KiClockIncrementTrace + 32 * (unsigned int)KiClockIncrementTraceCount);
    KiClockIncrementTraceCount = ((_BYTE)KiClockIncrementTraceCount + 1) & 0xF;
    v10 = KiLastRequestedTimeIncrement;
    v9->LowPart = KeTimeIncrement;
    v9->HighPart = v10;
    v9[1] = InterruptTimePrecise;
    v9[2] = KeQueryPerformanceCounter(0LL);
    LOBYTE(v9[3].LowPart) = a2;
  }
  ClockIncrementTraceIndex = CurrentPrcb->ClockTimerState.ClockIncrementTraceIndex;
  CurrentPrcb->ClockTimerState.ClockIncrementTraceIndex = ((unsigned __int8)CurrentPrcb->ClockTimerState.ClockIncrementTraceIndex
                                                         + 1) & 0xF;
  CurrentPrcb->ClockTimerState.ClockIncrementTraces[ClockIncrementTraceIndex].ActualIncrement = 0;
  CurrentPrcb->ClockTimerState.ClockIncrementTraces[ClockIncrementTraceIndex].RequestedIncrement = v2;
  CurrentPrcb->ClockTimerState.ClockIncrementTraces[ClockIncrementTraceIndex].InterruptTime = InterruptTimePrecise.QuadPart;
  CurrentPrcb->ClockTimerState.ClockIncrementTraces[ClockIncrementTraceIndex].PerformanceCounter = KeQueryPerformanceCounter(0LL).QuadPart;
  CurrentPrcb->ClockTimerState.ClockIncrementTraces[ClockIncrementTraceIndex].OneShot = a2;
  return 0LL;
}
