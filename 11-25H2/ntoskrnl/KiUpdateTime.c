/*
 * XREFs of KiUpdateTime @ 0x140272C80
 * Callers:
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140272B6C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KiUpdateRunTime @ 0x140273230 (KiUpdateRunTime.c)
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     PoExecuteIdleCheck @ 0x140274578 (PoExecuteIdleCheck.c)
 *     RtlBeginReadTickLock @ 0x140274730 (RtlBeginReadTickLock.c)
 *     KiComputeNewSystemTime @ 0x140274748 (KiComputeNewSystemTime.c)
 *     KiComputeNewInterruptTime @ 0x1402747C0 (KiComputeNewInterruptTime.c)
 *     RtlWriteTryAcquireTickLock @ 0x140274844 (RtlWriteTryAcquireTickLock.c)
 *     PpmExecutePeriodicPerfCheck @ 0x140274878 (PpmExecutePeriodicPerfCheck.c)
 *     RtlWriteAcquireTickLock @ 0x140274A4C (RtlWriteAcquireTickLock.c)
 *     KiForwardTick @ 0x140274A70 (KiForwardTick.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSetForceIdleState @ 0x1403558C8 (KiSetForceIdleState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x1404F1AE4 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiUpdateTime(unsigned __int8 a1, unsigned __int8 a2, unsigned int a3)
{
  char v3; // r12
  unsigned __int8 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // al
  char v9; // bl
  __int64 *v10; // r14
  char v11; // r15
  __int64 TickLock; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  LARGE_INTEGER v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned int v22; // ebx
  int v23; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int8 CurrentIrql; // di
  int v27; // ebx
  int IsEnabledNoReportingNoInline; // eax
  unsigned __int64 v29; // rsi
  int v30; // ebx
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  bool v34; // zf
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  unsigned __int64 v39; // [rsp+48h] [rbp-170h] BYREF
  int v40[2]; // [rsp+50h] [rbp-168h]
  unsigned int v41; // [rsp+58h] [rbp-160h]
  __int64 v42; // [rsp+60h] [rbp-158h]
  struct _KAFFINITY_EX v43; // [rsp+70h] [rbp-148h] BYREF

  v41 = a3;
  memset_0(&v43, 0, sizeof(v43));
  *(_QWORD *)v40 = KeGetCurrentPrcb();
  v3 = 0;
  v4 = 0;
  v8 = KeDisableInterrupts(v6, v5, v7);
  v9 = 0;
  v10 = (__int64 *)(MmWriteableSharedUserData + 832);
  v39 = 0LL;
  v11 = v8;
  do
  {
    while ( 1 )
    {
      TickLock = RtlBeginReadTickLock(v10);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      ((void (__fastcall *)(_QWORD, _QWORD))KiComputeNewInterruptTime)((LARGE_INTEGER)PerformanceCounter.QuadPart, &v39);
      if ( !KiTimeUpdateTryAcquireTickLock )
        break;
      v14 = *v10;
      if ( *v10 == TickLock )
      {
        if ( v39 <= KiTimeUpdateTolerance )
          goto LABEL_9;
        if ( (unsigned __int8)RtlWriteTryAcquireTickLock(v10) )
        {
          v9 = 1;
          goto LABEL_7;
        }
      }
    }
  }
  while ( *v10 != TickLock );
  v15 = v39;
LABEL_7:
  if ( KiTimeUpdateTryAcquireTickLock )
  {
    if ( v9 )
      goto LABEL_11;
  }
  else if ( v15 <= KiTimeUpdateTolerance )
  {
LABEL_9:
    v16 = MEMORY[0xFFFFF78000000008];
    v17 = MEMORY[0xFFFFF78000000320];
    goto LABEL_13;
  }
  RtlWriteAcquireTickLock(v10);
LABEL_11:
  v18 = KeQueryPerformanceCounter(0LL);
  v42 = ((__int64 (__fastcall *)(_QWORD))KiComputeNewSystemTime)((LARGE_INTEGER)v18.QuadPart);
  v19 = v42;
  v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiComputeNewInterruptTime)((LARGE_INTEGER)v18.QuadPart, &v39);
  *(_DWORD *)(MmWriteableSharedUserData + 28) = HIDWORD(v42);
  *(_QWORD *)(MmWriteableSharedUserData + 20) = v19;
  v14 = MmWriteableSharedUserData;
  *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(v16);
  *(_QWORD *)(MmWriteableSharedUserData + 8) = v16;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = v18;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = v18;
  v17 = MEMORY[0xFFFFF78000000320];
  v20 = (unsigned int)KiTickOffset - v39;
  if ( v20 <= 0 )
  {
    v35 = 1LL;
    v20 += KeMaximumIncrement;
    if ( v20 <= 0 )
    {
      v36 = ((unsigned __int64)(((unsigned __int64)-v20
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          + 1;
      LODWORD(v20) = v36 * KeMaximumIncrement + v20;
      v35 = v36 + 1;
    }
    v14 = MmWriteableSharedUserData;
    v17 = v35 + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(MmWriteableSharedUserData + 808) = (unsigned __int64)(v35 + MEMORY[0xFFFFF78000000320]) >> 32;
    *(_QWORD *)(MmWriteableSharedUserData + 800) = v17;
  }
  v21 = *v10 + 1;
  KiTickOffset = v20;
  *v10 = v21;
LABEL_13:
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
    {
      if ( (++v22 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
      {
        HvlNotifyLongSpinWait(v22);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleStartTime && v16 >= KiForceIdleStartTime && KiForceIdleState == 2 )
  {
    KiSetForceIdleState(1LL);
    v23 = v40[0];
    if ( !KiForceIdleStartDpc.DpcData )
      KiForceIdleStartDpc.Number = *(_DWORD *)(*(_QWORD *)v40 + 36LL) + 2048;
    KeInsertQueueDpc(&KiForceIdleStartDpc, 0LL, 0LL);
  }
  else
  {
    v23 = v40[0];
  }
  if ( ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0 )
    v3 = 1;
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  if ( v11 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v32 = *SchedulerAssist;
      do
      {
        v33 = v32;
        v32 = _InterlockedCompareExchange(SchedulerAssist, v32 & 0xFFDFFFFF, v32);
      }
      while ( v33 != v32 );
      if ( (v32 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  if ( KeMinimumIncrement - 1 + (int)v16 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v16;
  if ( KeMinimumIncrement - 1 + (int)v16 - (int)KiLastPseudoHrTimerExpiration >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v16;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    v27 = KiLastPseudoHrTimerExpiration + KePseudoHrTimeIncrement;
    IsEnabledNoReportingNoInline = Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline();
    KiSetClockTimer(v23, v16, v27, KeMinimumIncrement, 1, IsEnabledNoReportingNoInline == 0, 0);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( v17 > KiBalanceSetManagerLastCheckTick )
  {
    v34 = KiBalanceSetManagerCount-- == 1;
    KiBalanceSetManagerLastCheckTick = v17;
    if ( v34 )
    {
      KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
      KeInsertQueueDpc(&KiBalanceSetManagerPeriodicDpc, 0LL, 0LL);
    }
  }
  if ( !KiClockTimerPerCpuTickScheduling )
    PoExecuteIdleCheck(v16);
  if ( !v3 && !PpmCheckTimerImplementation )
    PpmExecutePeriodicPerfCheck();
  v29 = v16 >> 18;
  if ( KiGroupSchedulingEnabled && v17 > KiGenerationEndTick )
  {
    v4 = 1;
    KiGenerationEndTick += (unsigned int)KiGenerationTicks;
  }
  v30 = KeNumberProcessors_0;
  if ( (unsigned int)KeNumberProcessors_0 > 1 && !KiClockTimerPerCpuTickScheduling )
  {
    *(_QWORD *)&v43.Count = 2097153LL;
    memset_0(&v43.8, 0, sizeof(v43.8));
    KiForwardTick(v23, v30, v29, v4, &v43);
    KiOrAffinityEx(&KiClockCheckPending, &v43, &KiClockCheckPending, KiClockCheckPending.Size);
  }
  return KiUpdateRunTime(a1, a2, v41);
}
