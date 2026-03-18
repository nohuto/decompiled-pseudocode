/*
 * XREFs of KePrepareClockTimerForPlatformIdle @ 0x1405B94A0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403B4CA0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     KiSetPendingTick @ 0x1402A0A04 (KiSetPendingTick.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KeIsForceIdleEngaged @ 0x14040C350 (KeIsForceIdleEngaged.c)
 *     KiEventClockStateChange @ 0x140459BEC (KiEventClockStateChange.c)
 *     KiSetVpThreadHrTimerActive @ 0x14045A0C4 (KiSetVpThreadHrTimerActive.c)
 *     KiLogClockIncrementUpdate @ 0x14045D324 (KiLogClockIncrementUpdate.c)
 *     KePrepareClockTimerForIdle @ 0x1405B911C (KePrepareClockTimerForIdle.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405BA1B8 (KiCancelClockTimerKTimerDeadlines.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405BBBB0 (KiGetNextTimerExpirationDueTime.c)
 *     PoAllProcessorsDeepIdle @ 0x1405CDADC (PoAllProcessorsDeepIdle.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  unsigned __int64 v13; // rax
  int v14; // edx
  int v15; // r9d
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // r9
  __int64 InterruptTimePrecise; // r12
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  bool v22; // zf
  bool v23; // cf
  char v24; // dl
  __int64 *v25; // r10
  __int64 v26; // r10
  __int64 v27; // r11
  char v29; // [rsp+58h] [rbp-B0h]
  char v30; // [rsp+59h] [rbp-AFh]
  int v31; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  int v35; // [rsp+78h] [rbp-90h] BYREF
  int v36; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v37; // [rsp+80h] [rbp-88h] BYREF
  int v38; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v39; // [rsp+90h] [rbp-78h] BYREF
  __int64 v40; // [rsp+98h] [rbp-70h]
  _QWORD *v41; // [rsp+A0h] [rbp-68h]
  int *v42; // [rsp+A8h] [rbp-60h] BYREF
  int v43; // [rsp+B0h] [rbp-58h]
  int v44; // [rsp+B4h] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+B8h] [rbp-50h] BYREF
  int *v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  int *v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  int *v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]

  v7 = 0;
  v33 = 0LL;
  v8 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v32 = 0LL;
  v39 = 0LL;
  v12 = 4;
  v40 = a6;
  LOBYTE(v13) = (_BYTE)a7;
  v41 = a7;
  v30 = a2;
  v29 = a1;
  v31 = 13;
  if ( !KiDynamicTickInitialized || (_BYTE)KiDynamicTickDisableReason )
  {
LABEL_26:
    if ( KiClockTimerPerCpuTickScheduling )
      LOBYTE(v13) = KePrepareClockTimerForIdle(0LL);
    goto LABEL_28;
  }
  LOBYTE(v13) = KiLastRequestedTimeIncrement;
  if ( a4 <= (unsigned int)KiLastRequestedTimeIncrement )
  {
LABEL_4:
    v7 = 2;
    goto LABEL_26;
  }
  if ( a4 > KiMaxDynamicTickDuration )
  {
    ++dword_140F21768;
    v8 = KiMaxDynamicTickDuration;
  }
  v12 = _InterlockedExchange(&KiClockState, 3);
  LOBYTE(v13) = PoAllProcessorsDeepIdle();
  if ( !(_BYTE)v13 )
  {
    v7 = 1;
    goto LABEL_26;
  }
  if ( !a1 )
  {
    LOBYTE(v13) = KeIsForceIdleEngaged();
    if ( (_BYTE)v13 )
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
    v30,
    a3,
    (__int64)&v32,
    (__int64)&v31,
    v40);
  v17 = v32;
  if ( a5 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v39);
  }
  else
  {
    v13 = v16 + (unsigned int)KiLastRequestedTimeIncrement;
    if ( v32 <= v13 )
      goto LABEL_4;
    if ( !a1 && KiClockTimerHighLatency )
    {
      if ( KiClockTimerOneShotStartTime )
      {
        if ( (unsigned __int64)(KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime) < 0x2710 )
          ++KiDynamicTickCancellations;
        KiClockTimerOneShotStartTime = 0LL;
      }
      LOBYTE(v13) = KeMaximumIncrement;
      if ( v16 - KiClockTimerOneShotEndTime >= (unsigned __int64)(unsigned int)KeMaximumIncrement )
      {
        KiDynamicTickCancellations = 0;
      }
      else if ( (unsigned int)KiDynamicTickCancellations > 3 )
      {
        v7 = 3;
        goto LABEL_26;
      }
    }
    v13 = RtlGetInterruptTimePrecise(&v39);
    InterruptTimePrecise = v13;
    if ( v17 <= v13 + (unsigned int)KiLastRequestedTimeIncrement )
      goto LABEL_25;
  }
  v13 = InterruptTimePrecise + (unsigned int)KiMinDynamicTickDuration;
  if ( v17 <= v13 )
  {
LABEL_25:
    v7 = 4;
    goto LABEL_26;
  }
  v20 = v17 - InterruptTimePrecise;
  v34 = v17 - InterruptTimePrecise;
  if ( v17 - InterruptTimePrecise > v8 )
  {
    v21 = v20 - v8;
    v20 = v8;
    v34 = v8;
    v32 = v17 - v21;
  }
  if ( a5 )
  {
    if ( !v29 )
    {
      v20 = v34;
      if ( v34 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
      {
        v20 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
        v32 -= v34 - (unsigned int)KiClockLatencyMaxDynamicTickDuration;
        v34 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
      }
    }
  }
  guard_dispatch_icall_no_overrides(1LL, v20, &v33, v18);
  KiLogClockIncrementUpdate((__int64)CurrentPrcb, InterruptTimePrecise, v20, v33, 1);
  KiSetPendingTick(1);
  KiClockTimerOneShotStartTime = InterruptTimePrecise;
  KiEventClockStateChange(1, v12, &v33, (__int64 *)&v34);
  if ( (unsigned int)dword_140E070B8 > 5 )
  {
    v35 = v20;
    v46 = &v35;
    v36 = v33;
    v47 = 4LL;
    v48 = &v36;
    v37 = v31;
    v50 = &v37;
    v49 = 4LL;
    v51 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E070B8, (unsigned __int8 *)byte_1400479EB, 0LL, 0LL, 5u, &v45);
  }
  if ( a5 )
    KiClockLatencyMeasurementEnabled = 1;
  if ( KeIsForceIdleEngaged() )
    KiForceIdleReset = 1;
  v22 = KiClockTimerPerCpuTickScheduling == 0;
  CurrentPrcb->ClockOwner = 0;
  if ( !v22 )
    KiCancelClockTimerKTimerDeadlines(CurrentPrcb);
  ++qword_140F21770;
  v12 = 1;
  v23 = v20 < qword_140F217A8;
  CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotArmed;
  if ( v23 )
    qword_140F217A8 = v20;
  if ( v20 > qword_140F217A0 )
    qword_140F217A0 = v20;
  if ( v29 )
    KiConsiderTimerRebasing = 1;
  LOBYTE(v13) = KeNumberProcessors_0;
  v24 = KiHrTimerActiveCount > 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v25 = KiProcessorBlock;
    do
    {
      LOBYTE(v13) = KiSetVpThreadHrTimerActive(*v25, v24);
      v25 = (__int64 *)(v26 + 8);
    }
    while ( v27 != 1 );
  }
  KiClockTimerNextTickTime = InterruptTimePrecise + v33;
  CurrentPrcb->ClockTimerState.NextTickDueTime = InterruptTimePrecise + v33;
  CurrentPrcb->ClockTimerState.ClockArmedForIdle = 1;
LABEL_28:
  if ( v41 )
  {
    LOBYTE(v13) = KiClockTimerNextTickTime;
    *v41 = KiClockTimerNextTickTime;
  }
  if ( v12 != 4 )
    _InterlockedExchange(&KiClockState, v12);
  if ( v7 )
  {
    v38 = v7;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v44 = 0;
      v42 = &v38;
      v43 = 1;
      LOBYTE(v13) = EtwTraceKernelEvent((int)&v42, 1, 0x40100000u, 3929, 1538);
    }
  }
  return v13;
}
