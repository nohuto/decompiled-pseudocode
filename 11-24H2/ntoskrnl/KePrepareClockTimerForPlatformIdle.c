/*
 * XREFs of KePrepareClockTimerForPlatformIdle @ 0x1405B6AE0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSetPendingTick @ 0x140318374 (KiSetPendingTick.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KeIsForceIdleEngaged @ 0x1404049E0 (KeIsForceIdleEngaged.c)
 *     KiEventClockStateChange @ 0x14044E99C (KiEventClockStateChange.c)
 *     KiSetVpThreadHrTimerActive @ 0x14044F514 (KiSetVpThreadHrTimerActive.c)
 *     KiLogClockIncrementUpdate @ 0x1404523E4 (KiLogClockIncrementUpdate.c)
 *     KePrepareClockTimerForIdle @ 0x1405B675C (KePrepareClockTimerForIdle.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405B77E8 (KiCancelClockTimerKTimerDeadlines.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405B91E0 (KiGetNextTimerExpirationDueTime.c)
 *     PoAllProcessorsDeepIdle @ 0x1405CB1F8 (PoAllProcessorsDeepIdle.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KePrepareClockTimerForPlatformIdle(
        char a1,
        char a2,
        char a3,
        unsigned __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  int v7; // edi
  unsigned __int64 v8; // r15
  struct _KPRCB *CurrentPrcb; // r13
  __int32 v12; // r14d
  LARGE_INTEGER InterruptTimePrecise; // rax
  int v14; // edx
  int v15; // r9d
  __int64 v16; // rbx
  LARGE_INTEGER v17; // rsi
  __int64 QuadPart; // r12
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  bool v21; // zf
  bool v22; // cf
  char v23; // dl
  __int64 *v24; // r10
  __int64 v25; // r10
  __int64 v26; // r11
  char v28; // [rsp+58h] [rbp-B0h]
  char v29; // [rsp+59h] [rbp-AFh]
  int v30; // [rsp+5Ch] [rbp-ACh] BYREF
  LARGE_INTEGER v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  int v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v36; // [rsp+80h] [rbp-88h] BYREF
  int v37; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+90h] [rbp-78h] BYREF
  __int64 v39; // [rsp+98h] [rbp-70h]
  _QWORD *v40; // [rsp+A0h] [rbp-68h]
  int *v41; // [rsp+A8h] [rbp-60h] BYREF
  int v42; // [rsp+B0h] [rbp-58h]
  int v43; // [rsp+B4h] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+B8h] [rbp-50h] BYREF
  int *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  int *v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  int *v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]

  v7 = 0;
  v32 = 0LL;
  v8 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v31.QuadPart = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v12 = 4;
  v39 = a6;
  LOBYTE(InterruptTimePrecise.LowPart) = (_BYTE)a7;
  v40 = a7;
  v29 = a2;
  v28 = a1;
  v30 = 13;
  if ( !KiDynamicTickInitialized || (_BYTE)KiDynamicTickDisableReason )
  {
LABEL_26:
    if ( KiClockTimerPerCpuTickScheduling )
      LOBYTE(InterruptTimePrecise.LowPart) = KePrepareClockTimerForIdle(0LL);
    goto LABEL_28;
  }
  LOBYTE(InterruptTimePrecise.LowPart) = KiLastRequestedTimeIncrement;
  if ( a4 <= (unsigned int)KiLastRequestedTimeIncrement )
  {
LABEL_4:
    v7 = 2;
    goto LABEL_26;
  }
  if ( a4 > KiMaxDynamicTickDuration )
  {
    ++dword_140F21428;
    v8 = KiMaxDynamicTickDuration;
  }
  v12 = _InterlockedExchange(&KiClockState, 3);
  LOBYTE(InterruptTimePrecise.LowPart) = PoAllProcessorsDeepIdle();
  if ( !LOBYTE(InterruptTimePrecise.LowPart) )
  {
    v7 = 1;
    goto LABEL_26;
  }
  if ( !a1 )
  {
    LOBYTE(InterruptTimePrecise.LowPart) = KeIsForceIdleEngaged();
    if ( LOBYTE(InterruptTimePrecise.LowPart) )
    {
      v7 = 6;
      goto LABEL_26;
    }
  }
  LOBYTE(v15) = a1;
  LOBYTE(v14) = 1;
  v16 = MEMORY[0xFFFFF78000000008];
  KiGetNextTimerExpirationDueTime(
    (_DWORD)CurrentPrcb,
    v14,
    MEMORY[0xFFFFF78000000008],
    v15,
    v29,
    a3,
    (__int64)&v31,
    (__int64)&v30,
    v39);
  v17 = v31;
  if ( a5 )
  {
    QuadPart = RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart;
  }
  else
  {
    InterruptTimePrecise.QuadPart = v16 + (unsigned int)KiLastRequestedTimeIncrement;
    if ( v31.QuadPart <= (unsigned __int64)InterruptTimePrecise.QuadPart )
      goto LABEL_4;
    if ( !a1 && KiClockTimerHighLatency )
    {
      if ( KiClockTimerOneShotStartTime )
      {
        if ( (unsigned __int64)(KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime) < 0x2710 )
          ++KiDynamicTickCancellations;
        KiClockTimerOneShotStartTime = 0LL;
      }
      LOBYTE(InterruptTimePrecise.LowPart) = KeMaximumIncrement;
      if ( v16 - KiClockTimerOneShotEndTime >= (unsigned __int64)KeMaximumIncrement )
      {
        KiDynamicTickCancellations = 0;
      }
      else if ( (unsigned int)KiDynamicTickCancellations > 3 )
      {
        v7 = 3;
        goto LABEL_26;
      }
    }
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    QuadPart = InterruptTimePrecise.QuadPart;
    if ( v17.QuadPart <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
      goto LABEL_25;
  }
  InterruptTimePrecise.QuadPart = QuadPart + (unsigned int)KiMinDynamicTickDuration;
  if ( v17.QuadPart <= (unsigned __int64)InterruptTimePrecise.QuadPart )
  {
LABEL_25:
    v7 = 4;
    goto LABEL_26;
  }
  v19 = v17.QuadPart - QuadPart;
  v33 = v17.QuadPart - QuadPart;
  if ( v17.QuadPart - QuadPart > v8 )
  {
    v20 = v19 - v8;
    v19 = v8;
    v33 = v8;
    v31.QuadPart = v17.QuadPart - v20;
  }
  if ( a5 )
  {
    if ( !v28 )
    {
      v19 = v33;
      if ( v33 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
      {
        v19 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
        v31.QuadPart -= v33 - (unsigned int)KiClockLatencyMaxDynamicTickDuration;
        v33 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
      }
    }
  }
  guard_dispatch_icall_no_overrides(1LL, v19);
  KiLogClockIncrementUpdate((__int64)CurrentPrcb, QuadPart, v19, v32, 1);
  KiSetPendingTick(1);
  KiClockTimerOneShotStartTime = QuadPart;
  KiEventClockStateChange(1, v12, &v32, (__int64 *)&v33);
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v34 = v19;
    v45 = &v34;
    v35 = v32;
    v46 = 4LL;
    v47 = &v35;
    v36 = v30;
    v49 = &v36;
    v48 = 4LL;
    v50 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07080, (unsigned __int8 *)word_140047F5A, 0LL, 0LL, 5u, &v44);
  }
  if ( a5 )
    KiClockLatencyMeasurementEnabled = 1;
  if ( KeIsForceIdleEngaged() )
    KiForceIdleReset = 1;
  v21 = KiClockTimerPerCpuTickScheduling == 0;
  CurrentPrcb->ClockOwner = 0;
  if ( !v21 )
    KiCancelClockTimerKTimerDeadlines(CurrentPrcb);
  ++qword_140F21430;
  v12 = 1;
  v22 = v19 < qword_140F21468;
  CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotArmed;
  if ( v22 )
    qword_140F21468 = v19;
  if ( v19 > qword_140F21460 )
    qword_140F21460 = v19;
  if ( v28 )
    KiConsiderTimerRebasing = 1;
  LOBYTE(InterruptTimePrecise.LowPart) = KeNumberProcessors_0;
  v23 = KiHrTimerActiveCount > 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v24 = KiProcessorBlock;
    do
    {
      LOBYTE(InterruptTimePrecise.LowPart) = KiSetVpThreadHrTimerActive(*v24, v23);
      v24 = (__int64 *)(v25 + 8);
    }
    while ( v26 != 1 );
  }
  KiClockTimerNextTickTime = QuadPart + v32;
  CurrentPrcb->ClockTimerState.NextTickDueTime = QuadPart + v32;
  CurrentPrcb->ClockTimerState.ClockArmedForIdle = 1;
LABEL_28:
  if ( v40 )
  {
    LOBYTE(InterruptTimePrecise.LowPart) = KiClockTimerNextTickTime;
    *v40 = KiClockTimerNextTickTime;
  }
  if ( v12 != 4 )
    _InterlockedExchange(&KiClockState, v12);
  if ( v7 )
  {
    v37 = v7;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v43 = 0;
      v41 = &v37;
      v42 = 1;
      LOBYTE(InterruptTimePrecise.LowPart) = EtwTraceKernelEvent((int)&v41, 1, 0x40100000u, 3929, 1538);
    }
  }
  return InterruptTimePrecise.LowPart;
}
