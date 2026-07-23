/*
 * XREFs of KiSetClockTickRate @ 0x140318120
 * Callers:
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1403183C8 (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KiSetPendingTick @ 0x140318374 (KiSetPendingTick.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiSetClockTickRate(unsigned int a1, char a2)
{
  __int64 v2; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  int v5; // r15d
  _KCLOCK_TIMER_STATE *p_ClockTimerState; // rbp
  __int64 v7; // rcx
  int v8; // eax
  LARGE_INTEGER InterruptTimePrecise; // r14
  LARGE_INTEGER *v10; // rbx
  int v11; // eax
  LARGE_INTEGER *v12; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v15[2]; // [rsp+40h] [rbp-58h] BYREF
  int v16; // [rsp+42h] [rbp-56h]
  __int16 v17; // [rsp+46h] [rbp-52h]
  __int64 v18; // [rsp+48h] [rbp-50h]
  __int64 v19; // [rsp+50h] [rbp-48h]
  _QWORD v20[2]; // [rsp+58h] [rbp-40h] BYREF

  v2 = a1;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = KiClockState;
  p_ClockTimerState = &CurrentPrcb->ClockTimerState;
  if ( a2 )
  {
    guard_dispatch_icall_no_overrides(1LL, a1);
    v8 = 1;
  }
  else
  {
    guard_dispatch_icall_no_overrides(0LL, a1);
    v8 = 0;
  }
  LOBYTE(v7) = 1;
  CurrentPrcb->ClockTimerState.OneShotState = v8;
  KiSetPendingTick(v7);
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
      v18 = 0LL;
      v16 = 0;
      v20[0] = v15;
      v17 = 0;
      v15[0] = 0;
      v15[1] = v5;
      v19 = v2;
      v20[1] = 24LL;
      EtwTraceKernelEvent((int)v20, 1, 0x40100000u, 3927, 1538);
    }
  }
  else
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  }
  CurrentPrcb->ClockTimerState.TimeIncrement = 0;
  CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = v2;
  if ( KeTimeIncrement < (unsigned int)dword_140F21454 )
    dword_140F21454 = KeTimeIncrement;
  if ( KeTimeIncrement > (unsigned int)dword_140F21450 )
    dword_140F21450 = KeTimeIncrement;
  if ( (unsigned int)v2 < dword_140F2145C )
    dword_140F2145C = v2;
  if ( (unsigned int)v2 > dword_140F21458 )
    dword_140F21458 = v2;
  if ( CurrentPrcb->ClockOwner )
  {
    v10 = (LARGE_INTEGER *)((char *)&KiClockIncrementTrace + 32 * (unsigned int)KiClockIncrementTraceCount);
    KiClockIncrementTraceCount = ((_BYTE)KiClockIncrementTraceCount + 1) & 0xF;
    v11 = KiLastRequestedTimeIncrement;
    v10->LowPart = KeTimeIncrement;
    v10->HighPart = v11;
    v10[1] = InterruptTimePrecise;
    v10[2] = KeQueryPerformanceCounter(0LL);
    LOBYTE(v10[3].LowPart) = a2;
  }
  v12 = (LARGE_INTEGER *)((char *)p_ClockTimerState + 32 * p_ClockTimerState->ClockIncrementTraceIndex);
  p_ClockTimerState->ClockIncrementTraceIndex = ((unsigned __int8)p_ClockTimerState->ClockIncrementTraceIndex + 1) & 0xF;
  v12[99].LowPart = 0;
  v12[99].HighPart = v2;
  v12[100] = InterruptTimePrecise;
  v12[101] = KeQueryPerformanceCounter(0LL);
  LOBYTE(v12[102].LowPart) = a2;
  return 0LL;
}
