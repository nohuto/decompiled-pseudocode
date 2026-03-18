/*
 * XREFs of KiSetClockTickRate @ 0x1402A07B0
 * Callers:
 *     KiSetNextClockTickDueTime @ 0x1402A01F0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402A0A58 (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     KiSetPendingTick @ 0x1402A0A04 (KiSetPendingTick.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiSetClockTickRate(unsigned int a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  int v7; // r15d
  _KCLOCK_TIMER_STATE *p_ClockTimerState; // rbp
  __int64 v9; // rcx
  int v10; // eax
  __int64 InterruptTimePrecise; // r14
  LARGE_INTEGER *v12; // rbx
  int v13; // eax
  ULONG v14; // edx
  LARGE_INTEGER *v15; // rbx
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  char v18[8]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v19[2]; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+42h] [rbp-56h]
  __int16 v21; // [rsp+46h] [rbp-52h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  __int64 v23; // [rsp+50h] [rbp-48h]
  _QWORD v24[2]; // [rsp+58h] [rbp-40h] BYREF

  v4 = a1;
  v17 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = KiClockState;
  p_ClockTimerState = &CurrentPrcb->ClockTimerState;
  if ( a2 )
  {
    guard_dispatch_icall_no_overrides(1LL, a1, &v17, a4);
    v10 = 1;
  }
  else
  {
    guard_dispatch_icall_no_overrides(0LL, a1, &v17, a4);
    v10 = 0;
  }
  LOBYTE(v9) = 1;
  CurrentPrcb->ClockTimerState.OneShotState = v10;
  KiSetPendingTick(v9);
  if ( CurrentPrcb->ClockOwner )
  {
    KeTimeIncrement = v17;
    KiLastRequestedTimeIncrement = v4;
    if ( KiClockTimerPerCpuTickScheduling )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(v18);
    else
      InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
    KiClockTimerNextTickTime = InterruptTimePrecise + (unsigned int)KeTimeIncrement;
    KiClockOwnerOneShotRequestState = a2 != 0;
    if ( v7 == 2 )
      LOBYTE(v7) = _InterlockedExchange(&KiClockState, 0);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v22 = v17;
      v20 = 0;
      v24[0] = v19;
      v21 = 0;
      v19[0] = 0;
      v19[1] = v7;
      v23 = v4;
      v24[1] = 24LL;
      EtwTraceKernelEvent((int)v24, 1, 0x40100000u, 3927, 1538);
    }
  }
  else
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(v18);
  }
  CurrentPrcb->ClockTimerState.TimeIncrement = v17;
  CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = v4;
  if ( KeTimeIncrement < (unsigned int)dword_140F21794 )
    dword_140F21794 = KeTimeIncrement;
  if ( KeTimeIncrement > (unsigned int)dword_140F21790 )
    dword_140F21790 = KeTimeIncrement;
  if ( (unsigned int)v4 < dword_140F2179C )
    dword_140F2179C = v4;
  if ( (unsigned int)v4 > dword_140F21798 )
    dword_140F21798 = v4;
  if ( CurrentPrcb->ClockOwner )
  {
    v12 = (LARGE_INTEGER *)((char *)&KiClockIncrementTrace + 32 * (unsigned int)KiClockIncrementTraceCount);
    KiClockIncrementTraceCount = ((_BYTE)KiClockIncrementTraceCount + 1) & 0xF;
    v13 = KiLastRequestedTimeIncrement;
    v12->LowPart = KeTimeIncrement;
    v12->HighPart = v13;
    v12[1].QuadPart = InterruptTimePrecise;
    v12[2] = KeQueryPerformanceCounter(0LL);
    LOBYTE(v12[3].LowPart) = a2;
  }
  v14 = v17;
  v15 = (LARGE_INTEGER *)((char *)p_ClockTimerState + 32 * p_ClockTimerState->ClockIncrementTraceIndex);
  p_ClockTimerState->ClockIncrementTraceIndex = ((unsigned __int8)p_ClockTimerState->ClockIncrementTraceIndex + 1) & 0xF;
  v15[99].LowPart = v14;
  v15[99].HighPart = v4;
  v15[100].QuadPart = InterruptTimePrecise;
  v15[101] = KeQueryPerformanceCounter(0LL);
  LOBYTE(v15[102].LowPart) = a2;
  return (unsigned int)v17;
}
