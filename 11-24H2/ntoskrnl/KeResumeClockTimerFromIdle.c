/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x1405B9944
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403B4CA0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     KiUpdateTimeAssist @ 0x14029EBAC (KiUpdateTimeAssist.c)
 *     KiSetClockTimer @ 0x14029F85C (KiSetClockTimer.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402A0034 (KiSendClockInterruptToTargetProcessor.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402A04E0 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetPendingTick @ 0x1402A0A04 (KiSetPendingTick.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KiResetForceIdle @ 0x14040C2A4 (KiResetForceIdle.c)
 *     KiEventClockStateChange @ 0x140459BEC (KiEventClockStateChange.c)
 *     KiSetVpThreadHrTimerActive @ 0x14045A0C4 (KiSetVpThreadHrTimerActive.c)
 *     KiRestoreClockTickRate @ 0x1404C89B0 (KiRestoreClockTickRate.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1405BA0A8 (KiAdjustTimersAfterDripsExit.c)
 *     KiGetNextClockOwner @ 0x1405BA1EC (KiGetNextClockOwner.c)
 *     KiGetPendingTick @ 0x1405BA464 (KiGetPendingTick.c)
 *     KiOnlyClockInterruptPending @ 0x1405BA498 (KiOnlyClockInterruptPending.c)
 *     KiGetPastDueIRTimerInfo @ 0x1405C4F88 (KiGetPastDueIRTimerInfo.c)
 *     ExRecordOneTimerExpiry @ 0x1406572D0 (ExRecordOneTimerExpiry.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KeResumeClockTimerFromIdle(__int64 a1, __int64 a2, _DWORD *a3)
{
  _UNKNOWN **v3; // rax
  char v5; // r14
  char v6; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  char v8; // r15
  __int64 v9; // r8
  signed __int32 v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int NextClockOwner; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned int Number; // ecx
  unsigned int v19; // r14d
  __int32 v20; // esi
  unsigned int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int8 CurrentIrql; // si
  __int64 NextTickDueTime; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // edx
  __int64 InterruptTimePrecise; // rdi
  unsigned __int8 v32; // si
  __int64 v33; // r9
  char ClockOwner; // r8
  char v36; // [rsp+48h] [rbp-69h] BYREF
  char v37; // [rsp+49h] [rbp-68h] BYREF
  char v38; // [rsp+4Ah] [rbp-67h] BYREF
  char v39; // [rsp+4Bh] [rbp-66h] BYREF
  unsigned __int8 ClockArmedForIdle; // [rsp+4Ch] [rbp-65h] BYREF
  char v41; // [rsp+4Dh] [rbp-64h] BYREF
  unsigned __int64 v42; // [rsp+50h] [rbp-61h] BYREF
  __int64 v43; // [rsp+58h] [rbp-59h] BYREF
  __int64 v44; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v45; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-41h] BYREF
  __int64 v47; // [rsp+78h] [rbp-39h] BYREF
  int v48; // [rsp+80h] [rbp-31h]
  int v49; // [rsp+84h] [rbp-2Dh]
  _QWORD v50[2]; // [rsp+88h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+98h] [rbp-19h] BYREF
  unsigned __int8 *p_ClockArmedForIdle; // [rsp+B8h] [rbp+7h]
  __int64 v53; // [rsp+C0h] [rbp+Fh]
  char *v54; // [rsp+C8h] [rbp+17h]
  __int64 v55; // [rsp+D0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  v5 = a2;
  v6 = a1;
  v44 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v46 = 0LL;
  v39 = 0;
  v38 = 0;
  v45 = 0;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return (char)v3;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v37 = 0;
  v36 = 0;
  if ( a3 )
    *a3 = -1;
LABEL_4:
  v9 = 3LL;
  while ( 1 )
  {
    v10 = KiClockState;
    if ( KiClockState == 1 )
    {
      v10 = _InterlockedCompareExchange(&KiClockState, 3, 1);
      if ( v10 == 1 )
        break;
    }
    if ( v10 != 3 )
      goto LABEL_38;
    if ( (KiVelocityFlags & 0x80000) != 0 )
    {
      KeYieldProcessorEx(&v45);
      goto LABEL_4;
    }
    _mm_pause();
  }
  KiUpdateTimeAssist(0LL, 1, (__int64 *)&v42, &v46);
  KiClockTimerOneShotEndTime = v42;
  if ( KeMinimumIncrement - 1 + (int)v42 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v42;
  v11 = (unsigned int)(v42 - KiLastPseudoHrTimerExpiration);
  v12 = v42;
  if ( (int)v11 + KeMinimumIncrement - 1 >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v42;
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a3
      && (_DWORD)KiClockTimerOwner == CurrentPrcb->Number
      && v42 >= KiClockTimerNextTickTime
      && (unsigned __int8)KiOnlyClockInterruptPending(&v37, &v36) )
    {
      *a3 = v12 - KiClockTimerNextTickTime;
    }
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( v12 - KiClockTimerOneShotStartTime < (unsigned __int64)qword_140F21788 )
    qword_140F21788 = v12 - KiClockTimerOneShotStartTime;
  if ( v12 - KiClockTimerOneShotStartTime > (unsigned __int64)qword_140F21780 )
    qword_140F21780 = v12 - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    LOBYTE(v11) = v5;
    if ( (unsigned int)KiGetPastDueIRTimerInfo(v12, v11, &v39, &v38)
      && (unsigned __int8)KiOnlyClockInterruptPending(&v37, &v36) )
    {
      LOBYTE(v13) = v38;
      LOBYTE(v14) = v39;
      ExRecordOneTimerExpiry(v14, v13);
    }
    KiAdjustTimersAfterDripsExit(CurrentPrcb, v12);
    KiConsiderTimerRebasing = 0;
  }
  NextClockOwner = KiGetNextClockOwner(CurrentPrcb);
  Number = CurrentPrcb->Number;
  v19 = NextClockOwner;
  if ( Number == NextClockOwner )
  {
    if ( v12 + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement <= KiClockTimerNextTickTime )
    {
      if ( KiClockTimerPerCpu )
      {
        CurrentPrcb->ClockOwner = 1;
        LODWORD(KiClockTimerOwner) = Number;
        if ( !(unsigned __int8)((__int64 (*)(void))KiGetPendingTick)() )
          guard_dispatch_icall_no_overrides(v22, v16, v23, v17);
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
          v12,
          -(__int64)(unsigned int)KeQuantumEndTimerIncrement,
          KeMinimumIncrement,
          3,
          1,
          0);
        KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, v12, 1);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      v20 = 0;
      KiRestoreClockTickRate(v12, &v43, (int *)&v44, v17);
      if ( KiClockTimerPerCpuTickScheduling )
        NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
      else
        NextTickDueTime = v12 + (unsigned int)KeTimeIncrement;
      KiClockTimerNextTickTime = NextTickDueTime;
      KiEventClockStateChange(0, 1, &v44, &v43);
      goto LABEL_35;
    }
  }
  else
  {
    v8 = 1;
  }
  ++qword_140F21778;
  v20 = 2;
  KiEventClockStateChange(2, 1, 0LL, 0LL);
  if ( v8 )
  {
    LODWORD(KiClockTimerOwner) = v19;
    KiSendClockInterruptToTargetProcessor(v19);
  }
LABEL_35:
  a1 = (unsigned int)KiClockTimerOwner;
  v49 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v48 = KiClockTimerOwner;
    v50[0] = &v47;
    v47 = v12;
    v50[1] = 16LL;
    EtwTraceKernelEvent((int)v50, 1, 0x40100000u, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v20);
LABEL_38:
  if ( (_DWORD)KiClockTimerOwner == CurrentPrcb->Number )
  {
    if ( CurrentPrcb->ClockOwner )
      goto LABEL_42;
    CurrentPrcb->ClockOwner = 1;
  }
  if ( !CurrentPrcb->ClockOwner )
  {
LABEL_61:
    KiSetVpThreadHrTimerActive(KiProcessorBlock[CurrentPrcb->Number], 0);
    goto LABEL_62;
  }
LABEL_42:
  if ( !v6 && KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v21 = (unsigned __int8)KiOnlyClockInterruptPending(&v37, &v36) == 0;
    KiResetForceIdle(v21, 0);
  }
  if ( !CurrentPrcb->ClockOwner )
    goto LABEL_61;
LABEL_62:
  LOBYTE(v3) = KiGetPendingTick(a1, a2, v9);
  if ( !(_BYTE)v3 )
  {
    if ( !CurrentPrcb->ClockOwner && !KiClockTimerPerCpuTickScheduling )
      goto LABEL_80;
    LOBYTE(v3) = guard_dispatch_icall_no_overrides(v27, v26, v28, v29);
  }
  if ( !KiClockTimerPerCpuTickScheduling )
    goto LABEL_80;
  if ( (unsigned int)dword_140E070B8 > 5 )
  {
    ClockArmedForIdle = CurrentPrcb->ClockTimerState.ClockArmedForIdle;
    v53 = 1LL;
    p_ClockArmedForIdle = &ClockArmedForIdle;
    v41 = v6;
    v54 = &v41;
    v55 = 1LL;
    LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                   (__int64)&dword_140E070B8,
                   (unsigned __int8 *)&byte_140047997,
                   0LL,
                   0LL,
                   4u,
                   &v51);
  }
  if ( !CurrentPrcb->ClockTimerState.ClockArmedForIdle )
  {
LABEL_80:
    if ( CurrentPrcb->ClockOwner )
      return (char)v3;
    goto LABEL_81;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v46);
  v42 = InterruptTimePrecise;
  v32 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v30) = 15;
    KiRaiseIrqlProcessIrqlFlags(v32, v30);
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
  KiRestoreClockTickRate(InterruptTimePrecise, &v43, (int *)&v44, v33);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
  LOBYTE(v3) = v32;
  __writecr8(v32);
  if ( CurrentPrcb->ClockOwner )
  {
    KiClockTimerNextTickTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
    LOBYTE(v3) = KiClockState;
    if ( KiClockState == 2 )
    {
      _InterlockedExchange(&KiClockState, 0);
      LOBYTE(v3) = KiEventClockStateChange(0, 2, &v44, &v43);
    }
    goto LABEL_80;
  }
LABEL_81:
  if ( (CurrentPrcb->PendingTickFlags & 1) != 0 && !KiClockTimerPerCpuTickScheduling )
  {
    guard_dispatch_icall_no_overrides(v27, v26, v28, v29);
    LOBYTE(v3) = KiSetPendingTick(0);
    CurrentPrcb->ClockTimerState.ClockActive = 0;
  }
  return (char)v3;
}
