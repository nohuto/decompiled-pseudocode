/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x1405B6F84
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KiUpdateTimeAssist @ 0x1402AD69C (KiUpdateTimeAssist.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1403179A4 (KiSendClockInterruptToTargetProcessor.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140317E50 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetPendingTick @ 0x140318374 (KiSetPendingTick.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiResetForceIdle @ 0x1404048A4 (KiResetForceIdle.c)
 *     KiRestoreClockTickRate @ 0x140434EB0 (KiRestoreClockTickRate.c)
 *     KiSetClockTimer @ 0x14043504C (KiSetClockTimer.c)
 *     KiEventClockStateChange @ 0x14044E99C (KiEventClockStateChange.c)
 *     KiSetVpThreadHrTimerActive @ 0x14044F514 (KiSetVpThreadHrTimerActive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1405B76D8 (KiAdjustTimersAfterDripsExit.c)
 *     KiGetNextClockOwner @ 0x1405B781C (KiGetNextClockOwner.c)
 *     KiGetPendingTick @ 0x1405B7A94 (KiGetPendingTick.c)
 *     KiOnlyClockInterruptPending @ 0x1405B7AC8 (KiOnlyClockInterruptPending.c)
 *     KiGetPastDueIRTimerInfo @ 0x1405C2650 (KiGetPastDueIRTimerInfo.c)
 *     ExRecordOneTimerExpiry @ 0x1406559D0 (ExRecordOneTimerExpiry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KeResumeClockTimerFromIdle(__int64 a1, __int64 a2, _DWORD *a3)
{
  _UNKNOWN **v3; // rax
  char v5; // r14
  char v6; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  char v8; // r15
  signed __int32 v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 QuadPart; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int NextClockOwner; // eax
  __int64 v16; // rdx
  unsigned int Number; // ecx
  unsigned int v18; // r14d
  __int32 v19; // esi
  unsigned int v20; // ecx
  __int64 v21; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 NextTickDueTime; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edx
  LARGE_INTEGER InterruptTimePrecise; // rdi
  unsigned __int8 v28; // si
  char ClockOwner; // r8
  char v31; // [rsp+48h] [rbp-69h] BYREF
  char v32; // [rsp+49h] [rbp-68h] BYREF
  char v33; // [rsp+4Ah] [rbp-67h] BYREF
  char v34; // [rsp+4Bh] [rbp-66h] BYREF
  unsigned __int8 ClockArmedForIdle; // [rsp+4Ch] [rbp-65h] BYREF
  char v36; // [rsp+4Dh] [rbp-64h] BYREF
  LARGE_INTEGER v37; // [rsp+50h] [rbp-61h] BYREF
  __int64 v38; // [rsp+58h] [rbp-59h] BYREF
  __int64 v39; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v40; // [rsp+68h] [rbp-49h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-39h] BYREF
  int v43; // [rsp+80h] [rbp-31h]
  int v44; // [rsp+84h] [rbp-2Dh]
  _QWORD v45[2]; // [rsp+88h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+98h] [rbp-19h] BYREF
  unsigned __int8 *p_ClockArmedForIdle; // [rsp+B8h] [rbp+7h]
  __int64 v48; // [rsp+C0h] [rbp+Fh]
  char *v49; // [rsp+C8h] [rbp+17h]
  __int64 v50; // [rsp+D0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  v5 = a2;
  v6 = a1;
  v39 = 0LL;
  v37.QuadPart = 0LL;
  v38 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v34 = 0;
  v33 = 0;
  v40 = 0;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return (char)v3;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v32 = 0;
  v31 = 0;
  if ( a3 )
    *a3 = -1;
  while ( 1 )
  {
    v9 = KiClockState;
    v10 = 3LL;
    if ( KiClockState == 1 )
    {
      v9 = _InterlockedCompareExchange(&KiClockState, 3, 1);
      if ( v9 == 1 )
        break;
    }
    if ( v9 != 3 )
      goto LABEL_35;
    KeYieldProcessorEx(&v40);
  }
  KiUpdateTimeAssist(0LL, 1, (__int64 *)&v37, &PerformanceCounter);
  KiClockTimerOneShotEndTime = v37.QuadPart;
  if ( KeMinimumIncrement - 1 + v37.LowPart - (int)KiLastNonHrTimerExpiration >= KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v37.QuadPart;
  v11 = (unsigned int)(v37.LowPart - KiLastPseudoHrTimerExpiration);
  QuadPart = v37.QuadPart;
  if ( (int)v11 + KeMinimumIncrement - 1 >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v37.QuadPart;
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a3
      && (_DWORD)KiClockTimerOwner == CurrentPrcb->Number
      && v37.QuadPart >= (unsigned __int64)KiClockTimerNextTickTime
      && (unsigned __int8)KiOnlyClockInterruptPending(&v32, &v31) )
    {
      *a3 = QuadPart - KiClockTimerNextTickTime;
    }
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( QuadPart - KiClockTimerOneShotStartTime < qword_140F21448 )
    qword_140F21448 = QuadPart - KiClockTimerOneShotStartTime;
  if ( QuadPart - KiClockTimerOneShotStartTime > qword_140F21440 )
    qword_140F21440 = QuadPart - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    LOBYTE(v11) = v5;
    if ( (unsigned int)KiGetPastDueIRTimerInfo(QuadPart, v11, &v34, &v33)
      && (unsigned __int8)KiOnlyClockInterruptPending(&v32, &v31) )
    {
      LOBYTE(v13) = v33;
      LOBYTE(v14) = v34;
      ExRecordOneTimerExpiry(v14, v13);
    }
    KiAdjustTimersAfterDripsExit(CurrentPrcb, QuadPart);
    KiConsiderTimerRebasing = 0;
  }
  NextClockOwner = KiGetNextClockOwner(CurrentPrcb);
  Number = CurrentPrcb->Number;
  v18 = NextClockOwner;
  if ( Number == NextClockOwner )
  {
    if ( QuadPart + (unsigned int)KiLastRequestedTimeIncrement <= KiClockTimerNextTickTime )
    {
      if ( KiClockTimerPerCpu )
      {
        CurrentPrcb->ClockOwner = 1;
        LODWORD(KiClockTimerOwner) = Number;
        if ( !(unsigned __int8)((__int64 (*)(void))KiGetPendingTick)() )
          guard_dispatch_icall_no_overrides(v21, v16);
      }
      if ( CurrentPrcb->ClockOwner && KiClockTimerPerCpuTickScheduling )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v16) = 15;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v16);
        }
        KiSetClockTimer(
          (__int64)CurrentPrcb,
          (LARGE_INTEGER)QuadPart,
          -(__int64)(unsigned int)KeQuantumEndTimerIncrement,
          KeMinimumIncrement,
          3,
          1,
          0);
        KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, (LARGE_INTEGER)QuadPart, 1);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      v19 = 0;
      KiRestoreClockTickRate(QuadPart, &v38, (unsigned int *)&v39);
      if ( KiClockTimerPerCpuTickScheduling )
        NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
      else
        NextTickDueTime = QuadPart + (unsigned int)KeTimeIncrement;
      KiClockTimerNextTickTime = NextTickDueTime;
      KiEventClockStateChange(0, 1, &v39, &v38);
      goto LABEL_32;
    }
  }
  else
  {
    v8 = 1;
  }
  ++qword_140F21438;
  v19 = 2;
  KiEventClockStateChange(2, 1, 0LL, 0LL);
  if ( v8 )
  {
    LODWORD(KiClockTimerOwner) = v18;
    KiSendClockInterruptToTargetProcessor(v18);
  }
LABEL_32:
  a1 = (unsigned int)KiClockTimerOwner;
  v44 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v43 = KiClockTimerOwner;
    v45[0] = &v42;
    v42 = QuadPart;
    v45[1] = 16LL;
    EtwTraceKernelEvent((int)v45, 1, 0x40100000u, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v19);
LABEL_35:
  if ( (_DWORD)KiClockTimerOwner == CurrentPrcb->Number )
  {
    if ( CurrentPrcb->ClockOwner )
      goto LABEL_39;
    CurrentPrcb->ClockOwner = 1;
  }
  if ( !CurrentPrcb->ClockOwner )
  {
LABEL_58:
    KiSetVpThreadHrTimerActive(KiProcessorBlock[CurrentPrcb->Number], 0);
    goto LABEL_59;
  }
LABEL_39:
  if ( !v6 && KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v20 = (unsigned __int8)KiOnlyClockInterruptPending(&v32, &v31) == 0;
    KiResetForceIdle(v20, 0);
  }
  if ( !CurrentPrcb->ClockOwner )
    goto LABEL_58;
LABEL_59:
  LOBYTE(v3) = KiGetPendingTick(a1, a2, v10);
  if ( !(_BYTE)v3 )
  {
    if ( !CurrentPrcb->ClockOwner && !KiClockTimerPerCpuTickScheduling )
      goto LABEL_77;
    LOBYTE(v3) = guard_dispatch_icall_no_overrides(v25, v24);
  }
  if ( !KiClockTimerPerCpuTickScheduling )
    goto LABEL_77;
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    ClockArmedForIdle = CurrentPrcb->ClockTimerState.ClockArmedForIdle;
    v48 = 1LL;
    p_ClockArmedForIdle = &ClockArmedForIdle;
    v36 = v6;
    v49 = &v36;
    v50 = 1LL;
    LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                   (__int64)&dword_140E07080,
                   (unsigned __int8 *)byte_140047D1B,
                   0LL,
                   0LL,
                   4u,
                   &v46);
  }
  if ( !CurrentPrcb->ClockTimerState.ClockArmedForIdle )
  {
LABEL_77:
    if ( CurrentPrcb->ClockOwner )
      return (char)v3;
    goto LABEL_78;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v37 = InterruptTimePrecise;
  v28 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v26) = 15;
    KiRaiseIrqlProcessIrqlFlags(v28, v26);
  }
  KiSetClockTimer(
    (__int64)CurrentPrcb,
    InterruptTimePrecise,
    -(__int64)(unsigned int)KeQuantumEndTimerIncrement,
    KeMinimumIncrement,
    3,
    1,
    0);
  ClockOwner = CurrentPrcb->ClockOwner;
  if ( ClockOwner || !KiSerializeTimerExpiration )
    KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, InterruptTimePrecise, ClockOwner);
  KiRestoreClockTickRate(InterruptTimePrecise.QuadPart, &v38, (unsigned int *)&v39);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
  LOBYTE(v3) = v28;
  __writecr8(v28);
  if ( CurrentPrcb->ClockOwner )
  {
    KiClockTimerNextTickTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
    LOBYTE(v3) = KiClockState;
    if ( KiClockState == 2 )
    {
      _InterlockedExchange(&KiClockState, 0);
      LOBYTE(v3) = KiEventClockStateChange(0, 2, &v39, &v38);
    }
    goto LABEL_77;
  }
LABEL_78:
  if ( (CurrentPrcb->PendingTickFlags & 1) != 0 && !KiClockTimerPerCpuTickScheduling )
  {
    guard_dispatch_icall_no_overrides(v25, v24);
    LOBYTE(v3) = KiSetPendingTick(0);
    CurrentPrcb->ClockTimerState.ClockActive = 0;
  }
  return (char)v3;
}
