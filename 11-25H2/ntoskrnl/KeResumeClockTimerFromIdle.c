/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x1405B5B04
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1404E92D8 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     KiUpdateTimeAssist @ 0x140275E04 (KiUpdateTimeAssist.c)
 *     KiSetPendingTick @ 0x140277258 (KiSetPendingTick.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402777C0 (KiSendClockInterruptToTargetProcessor.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140277BC0 (KiSetClockTimerKTimerDeadlines.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiResetForceIdle @ 0x140404598 (KiResetForceIdle.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiEventClockStateChange @ 0x14045A880 (KiEventClockStateChange.c)
 *     KiSetVpThreadHrTimerActive @ 0x14045ACC4 (KiSetVpThreadHrTimerActive.c)
 *     KiRestoreClockTickRate @ 0x1404C7BF0 (KiRestoreClockTickRate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1405B6284 (KiAdjustTimersAfterDripsExit.c)
 *     KiGetNextClockOwner @ 0x1405B63C8 (KiGetNextClockOwner.c)
 *     KiGetPendingTick @ 0x1405B6640 (KiGetPendingTick.c)
 *     KiOnlyClockInterruptPending @ 0x1405B6674 (KiOnlyClockInterruptPending.c)
 *     KiGetPastDueIRTimerInfo @ 0x1405C0C38 (KiGetPastDueIRTimerInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KeResumeClockTimerFromIdle(__int64 a1, char a2, _DWORD *a3)
{
  _UNKNOWN **v3; // rax
  char v6; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  char v8; // r15
  __int64 v9; // rdx
  signed __int32 v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // r9
  char v15; // r10
  __int64 v16; // r8
  unsigned __int8 v17; // r10
  char *v18; // rcx
  __int64 v19; // r9
  int v20; // eax
  unsigned int NextClockOwner; // eax
  int v22; // edx
  unsigned int Number; // ecx
  unsigned int v24; // r14d
  __int32 v25; // esi
  unsigned int v26; // ecx
  __int64 v27; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v29; // rcx
  int v30; // edx
  LARGE_INTEGER InterruptTimePrecise; // rdi
  unsigned __int8 v32; // si
  char ClockOwner; // r8
  unsigned __int8 v35; // [rsp+48h] [rbp-69h] BYREF
  char v36; // [rsp+49h] [rbp-68h] BYREF
  char v37; // [rsp+4Ah] [rbp-67h] BYREF
  unsigned __int8 v38; // [rsp+4Bh] [rbp-66h] BYREF
  unsigned __int8 ClockArmedForIdle; // [rsp+4Ch] [rbp-65h] BYREF
  char v40; // [rsp+4Dh] [rbp-64h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-61h] BYREF
  __int64 v42; // [rsp+58h] [rbp-59h] BYREF
  __int64 v43; // [rsp+60h] [rbp-51h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-41h] BYREF
  int v46; // [rsp+78h] [rbp-39h]
  int v47; // [rsp+7Ch] [rbp-35h]
  _QWORD v48[3]; // [rsp+80h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+98h] [rbp-19h] BYREF
  unsigned __int8 *p_ClockArmedForIdle; // [rsp+B8h] [rbp+7h]
  __int64 v51; // [rsp+C0h] [rbp+Fh]
  char *v52; // [rsp+C8h] [rbp+17h]
  __int64 v53; // [rsp+D0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  v6 = a1;
  v42 = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v35 = 0;
  v38 = 0;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return (char)v3;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v37 = 0;
  v36 = 0;
  if ( a3 )
    *a3 = -1;
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
      goto LABEL_43;
    _mm_pause();
  }
  KiUpdateTimeAssist(0LL, 1, (__int64 *)&v41, &PerformanceCounter);
  KiClockTimerOneShotEndTime = v41;
  if ( KeMinimumIncrement - 1 + (int)v41 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v41;
  v11 = (unsigned int)(v41 - KiLastPseudoHrTimerExpiration);
  v12 = v41;
  if ( (int)v11 + KeMinimumIncrement - 1 >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v41;
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a3
      && (_DWORD)KiClockTimerOwner == CurrentPrcb->Number
      && v41 >= KiClockTimerNextTickTime
      && (unsigned __int8)KiOnlyClockInterruptPending(&v37, &v36) )
    {
      *a3 = v12 - KiClockTimerNextTickTime;
    }
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( v12 - KiClockTimerOneShotStartTime < qword_140F209A8 )
    qword_140F209A8 = v12 - KiClockTimerOneShotStartTime;
  if ( v12 - KiClockTimerOneShotStartTime > qword_140F209A0 )
    qword_140F209A0 = v12 - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    LOBYTE(v11) = a2;
    if ( (unsigned int)KiGetPastDueIRTimerInfo(v12, v11, &v35, &v38)
      && (unsigned __int8)KiOnlyClockInterruptPending(&v37, &v36) )
    {
      v13 = v38;
      v14 = v35;
      if ( ExpIRTimerExpiryCounts )
      {
        if ( v35 >= 0x14u )
        {
          v14 = 0;
          v13 = 0;
        }
        v15 = -(v13 < (unsigned __int8)byte_140E09280[24 * v14]);
        v16 = (unsigned __int8)(v13 & v15);
        v17 = v14 & v15;
        if ( v17 )
        {
          v18 = byte_140E09280;
          v19 = v17;
          do
          {
            v20 = (unsigned __int8)*v18;
            v18 += 24;
            v16 = (unsigned int)(v20 + v16);
            --v19;
          }
          while ( v19 );
        }
        ++*(_DWORD *)(ExpIRTimerExpiryCounts + 4 * v16);
      }
      v12 = v41;
    }
    KiAdjustTimersAfterDripsExit(CurrentPrcb, v12);
    KiConsiderTimerRebasing = 0;
  }
  NextClockOwner = KiGetNextClockOwner(CurrentPrcb);
  Number = CurrentPrcb->Number;
  v24 = NextClockOwner;
  if ( Number == NextClockOwner )
  {
    if ( v12 + (unsigned int)KiLastRequestedTimeIncrement <= KiClockTimerNextTickTime )
    {
      if ( KiClockTimerPerCpu )
      {
        CurrentPrcb->ClockOwner = 1;
        LODWORD(KiClockTimerOwner) = Number;
        if ( !(unsigned __int8)((__int64 (*)(void))KiGetPendingTick)() )
          guard_dispatch_icall_no_overrides(v27);
      }
      if ( CurrentPrcb->ClockOwner && KiClockTimerPerCpuTickScheduling )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v22) = 15;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v22);
        }
        KiSetClockTimer(
          (__int64)CurrentPrcb,
          (LARGE_INTEGER)v12,
          -(__int64)(unsigned int)KeQuantumEndTimerIncrement,
          KeMinimumIncrement,
          3,
          1,
          0);
        KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, (LARGE_INTEGER)v12, 1);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      v25 = 0;
      KiRestoreClockTickRate(v12, &v43, (int *)&v42);
      KiClockTimerNextTickTime = v12 + (unsigned int)KeTimeIncrement;
      KiEventClockStateChange(0, 1, &v42, &v43);
      goto LABEL_40;
    }
  }
  else
  {
    v8 = 1;
  }
  ++qword_140F20998;
  v25 = 2;
  KiEventClockStateChange(2, 1, 0LL, 0LL);
  if ( v8 )
  {
    LODWORD(KiClockTimerOwner) = v24;
    KiSendClockInterruptToTargetProcessor(v24);
  }
LABEL_40:
  a1 = (unsigned int)KiClockTimerOwner;
  v47 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v46 = KiClockTimerOwner;
    v48[0] = &v45;
    v45 = v12;
    v48[1] = 16LL;
    EtwTraceKernelEvent((int)v48, 1, 0x40100000u, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v25);
LABEL_43:
  if ( (_DWORD)KiClockTimerOwner == CurrentPrcb->Number )
  {
    if ( CurrentPrcb->ClockOwner )
      goto LABEL_47;
    CurrentPrcb->ClockOwner = 1;
  }
  if ( !CurrentPrcb->ClockOwner )
  {
LABEL_63:
    KiSetVpThreadHrTimerActive(KiProcessorBlock[CurrentPrcb->Number], 0);
    goto LABEL_64;
  }
LABEL_47:
  if ( !v6 && KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v26 = (unsigned __int8)KiOnlyClockInterruptPending(&v37, &v36) == 0;
    KiResetForceIdle(v26, 0);
  }
  if ( !CurrentPrcb->ClockOwner )
    goto LABEL_63;
LABEL_64:
  LOBYTE(v3) = KiGetPendingTick(a1, v9);
  if ( !(_BYTE)v3 )
  {
    if ( !CurrentPrcb->ClockOwner && !KiClockTimerPerCpuTickScheduling )
      goto LABEL_81;
    LOBYTE(v3) = guard_dispatch_icall_no_overrides(v29);
  }
  if ( !KiClockTimerPerCpuTickScheduling )
    goto LABEL_81;
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    ClockArmedForIdle = CurrentPrcb->ClockTimerState.ClockArmedForIdle;
    v51 = 1LL;
    p_ClockArmedForIdle = &ClockArmedForIdle;
    v40 = v6;
    v52 = &v40;
    v53 = 1LL;
    LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                   (__int64)&dword_140E07080,
                   (unsigned __int8 *)byte_140047510,
                   0LL,
                   0LL,
                   4u,
                   &v49);
  }
  if ( !CurrentPrcb->ClockTimerState.ClockArmedForIdle )
  {
LABEL_81:
    if ( CurrentPrcb->ClockOwner )
      return (char)v3;
    goto LABEL_82;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
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
  KiRestoreClockTickRate(InterruptTimePrecise.QuadPart, &v43, (int *)&v42);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
  LOBYTE(v3) = v32;
  __writecr8(v32);
  if ( CurrentPrcb->ClockOwner )
  {
    LOBYTE(v3) = LOBYTE(InterruptTimePrecise.LowPart) + KeTimeIncrement;
    KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + (unsigned int)KeTimeIncrement;
    goto LABEL_81;
  }
LABEL_82:
  if ( (CurrentPrcb->PendingTickFlags & 1) != 0 && !KiClockTimerPerCpuTickScheduling )
  {
    guard_dispatch_icall_no_overrides(v29);
    LOBYTE(v3) = KiSetPendingTick(0);
    CurrentPrcb->ClockTimerState.ClockActive = 0;
  }
  return (char)v3;
}
