/*
 * XREFs of KiUpdateTime @ 0x14029B7C0
 * Callers:
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14029B69C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KiUpdateRunTime @ 0x14029BDF0 (KiUpdateRunTime.c)
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x14029D018 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 *     PoExecuteIdleCheck @ 0x14029D050 (PoExecuteIdleCheck.c)
 *     RtlBeginReadTickLock @ 0x14029D200 (RtlBeginReadTickLock.c)
 *     PpmExecutePeriodicPerfCheck @ 0x14029D218 (PpmExecutePeriodicPerfCheck.c)
 *     KiComputeNewSystemTime @ 0x14029D3EC (KiComputeNewSystemTime.c)
 *     KiComputeNewInterruptTime @ 0x14029D460 (KiComputeNewInterruptTime.c)
 *     RtlWriteAcquireTickLock @ 0x14029D4E4 (RtlWriteAcquireTickLock.c)
 *     RtlWriteTryAcquireTickLock @ 0x14029D508 (RtlWriteTryAcquireTickLock.c)
 *     KiForwardTick @ 0x14029D53C (KiForwardTick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KiSetForceIdleState @ 0x1403CBA34 (KiSetForceIdleState.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiUpdateTime(unsigned __int8 a1, unsigned __int8 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int8 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // al
  char v9; // bl
  __int64 *v10; // rsi
  char v11; // r15
  __int64 TickLock; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v14; // r9
  LARGE_INTEGER v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned int v22; // ebx
  unsigned __int8 CurrentIrql; // di
  __int64 v24; // r15
  int IsEnabledNoReportingNoInline; // eax
  int v26; // r12d
  __int64 InterruptTimePrecise; // rcx
  bool v28; // si
  unsigned __int64 v29; // rbx
  unsigned __int8 TypeFlags; // al
  unsigned __int64 v31; // r14
  int v32; // ebx
  struct _KPRCB *v34; // rcx
  signed __int32 *SchedulerAssist; // r8
  bool v36; // zf
  __int64 v37; // rdx
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  unsigned __int64 v40; // rdx
  char v41; // [rsp+30h] [rbp-D0h]
  bool v42; // [rsp+31h] [rbp-CFh] BYREF
  char v43; // [rsp+32h] [rbp-CEh] BYREF
  unsigned __int8 v44; // [rsp+33h] [rbp-CDh]
  unsigned __int8 v45; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v46; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v47; // [rsp+40h] [rbp-C0h] BYREF
  int v48; // [rsp+48h] [rbp-B8h] BYREF
  int v49; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v50; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v51; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  struct _KAFFINITY_EX v55; // [rsp+80h] [rbp-80h] BYREF
  char v56[32]; // [rsp+190h] [rbp+90h] BYREF
  __int64 *v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  int *v59; // [rsp+1C0h] [rbp+C0h]
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  __int64 *v61; // [rsp+1D0h] [rbp+D0h]
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 *v63; // [rsp+1E0h] [rbp+E0h]
  __int64 v64; // [rsp+1E8h] [rbp+E8h]
  unsigned __int64 *v65; // [rsp+1F0h] [rbp+F0h]
  __int64 v66; // [rsp+1F8h] [rbp+F8h]
  int *v67; // [rsp+200h] [rbp+100h]
  __int64 v68; // [rsp+208h] [rbp+108h]
  bool *v69; // [rsp+210h] [rbp+110h]
  __int64 v70; // [rsp+218h] [rbp+118h]
  char *v71; // [rsp+220h] [rbp+120h]
  __int64 v72; // [rsp+228h] [rbp+128h]

  v50 = a3;
  v44 = a2;
  v45 = a1;
  memset_0(&v55, 0, sizeof(v55));
  CurrentPrcb = KeGetCurrentPrcb();
  v41 = 0;
  v4 = 0;
  v8 = KeDisableInterrupts(v6, v5, v7);
  v9 = 0;
  v10 = (__int64 *)(MmWriteableSharedUserData + 832);
  v47 = 0LL;
  v11 = v8;
  do
  {
    while ( 1 )
    {
      TickLock = RtlBeginReadTickLock(v10);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      ((void (__fastcall *)(_QWORD, _QWORD))KiComputeNewInterruptTime)((LARGE_INTEGER)PerformanceCounter.QuadPart, &v47);
      if ( !KiTimeUpdateTryAcquireTickLock )
        break;
      if ( *v10 == TickLock )
      {
        if ( v47 <= KiTimeUpdateTolerance )
          goto LABEL_48;
        if ( (unsigned __int8)RtlWriteTryAcquireTickLock(v10) )
        {
          v9 = 1;
          goto LABEL_7;
        }
      }
    }
  }
  while ( *v10 != TickLock );
  v14 = v47;
LABEL_7:
  if ( !KiTimeUpdateTryAcquireTickLock )
  {
    if ( v14 <= KiTimeUpdateTolerance )
    {
LABEL_48:
      v18 = MEMORY[0xFFFFF78000000008];
      v19 = MEMORY[0xFFFFF78000000320];
      v46 = MEMORY[0xFFFFF78000000320];
      goto LABEL_12;
    }
    goto LABEL_9;
  }
  if ( !v9 )
LABEL_9:
    RtlWriteAcquireTickLock(v10);
  v15 = KeQueryPerformanceCounter(0LL);
  v16 = ((__int64 (__fastcall *)(_QWORD))KiComputeNewSystemTime)((LARGE_INTEGER)v15.QuadPart);
  HIDWORD(v46) = HIDWORD(v16);
  v17 = v16;
  v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiComputeNewInterruptTime)((LARGE_INTEGER)v15.QuadPart, &v47);
  *(_DWORD *)(MmWriteableSharedUserData + 28) = HIDWORD(v46);
  *(_QWORD *)(MmWriteableSharedUserData + 20) = v17;
  *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(v18);
  *(_QWORD *)(MmWriteableSharedUserData + 8) = v18;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = v15;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = v15;
  v19 = MEMORY[0xFFFFF78000000320];
  v20 = (unsigned int)KiTickOffset - v47;
  v46 = MEMORY[0xFFFFF78000000320];
  if ( v20 <= 0 )
  {
    v37 = 1LL;
    v20 += (unsigned int)KeMaximumIncrement;
    if ( v20 <= 0 )
    {
      v40 = ((unsigned __int64)(((unsigned __int64)-v20
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          + 1;
      LODWORD(v20) = v40 * KeMaximumIncrement + v20;
      v37 = v40 + 1;
    }
    v19 = v37 + MEMORY[0xFFFFF78000000320];
    v46 = v37 + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(MmWriteableSharedUserData + 808) = (unsigned __int64)(v37 + MEMORY[0xFFFFF78000000320]) >> 32;
    *(_QWORD *)(MmWriteableSharedUserData + 800) = v19;
  }
  v21 = *v10 + 1;
  KiTickOffset = v20;
  *v10 = v21;
LABEL_12:
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
    {
      if ( (++v22 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
  if ( KiForceIdleStartTime && v18 >= KiForceIdleStartTime && KiForceIdleState == 2 )
  {
    KiSetForceIdleState(1LL);
    if ( !KiForceIdleStartDpc.DpcData )
      KiForceIdleStartDpc.Number = CurrentPrcb->Number + 2048;
    KeInsertQueueDpc(&KiForceIdleStartDpc, 0LL, 0LL);
  }
  if ( ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0 )
    v41 = 1;
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  if ( v11 )
  {
    v34 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v34->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v38 = *SchedulerAssist;
      do
      {
        v39 = v38;
        v38 = _InterlockedCompareExchange(SchedulerAssist, v38 & 0xFFDFFFFF, v38);
      }
      while ( v39 != v38 );
      if ( (v38 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v34);
    }
    _enable();
  }
  if ( KeMinimumIncrement - 1 + (int)v18 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v18;
  if ( KeMinimumIncrement - 1 + (int)v18 - (int)KiLastPseudoHrTimerExpiration >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v18;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
    v24 = KiLastPseudoHrTimerExpiration + KePseudoHrTimeIncrement;
    IsEnabledNoReportingNoInline = Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline();
    v26 = KeMinimumIncrement;
    InterruptTimePrecise = v18;
    v28 = IsEnabledNoReportingNoInline == 0;
    if ( !KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v51);
    v29 = InterruptTimePrecise - v24;
    if ( v24 > 0 )
      v29 = v24;
    if ( (unsigned int)dword_140E070B8 > 5 )
    {
      v52 = InterruptTimePrecise;
      v48 = 1;
      v57 = &v52;
      v70 = 1LL;
      v59 = &v48;
      v72 = 1LL;
      v61 = &v53;
      v58 = 8LL;
      v60 = 4LL;
      v54 = v29 - InterruptTimePrecise;
      v53 = v24;
      v63 = &v54;
      v65 = &v51;
      v67 = &v49;
      v69 = &v42;
      v71 = &v43;
      v62 = 8LL;
      v64 = 8LL;
      v51 = v29;
      v66 = 8LL;
      v49 = v26;
      v68 = 4LL;
      v42 = v28;
      v43 = 0;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140E070B8, word_140047B72, 0LL, 0LL, 10, v56);
    }
    TypeFlags = CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TypeFlags;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[1].DueTime = v29;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TolerableDelay = v26;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TypeFlags = (2 * v28) | TypeFlags & 0xFD | 1;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v19 = v46;
    v4 = 0;
  }
  if ( v19 > KiBalanceSetManagerLastCheckTick )
  {
    v36 = KiBalanceSetManagerCount-- == 1;
    KiBalanceSetManagerLastCheckTick = v19;
    if ( v36 )
    {
      KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
      KeInsertQueueDpc(&KiBalanceSetManagerPeriodicDpc, 0LL, 0LL);
    }
  }
  if ( !KiClockTimerPerCpuTickScheduling )
    PoExecuteIdleCheck(v18);
  if ( !PpmCheckTimerImplementation && !v41 )
    PpmExecutePeriodicPerfCheck();
  v31 = v18 >> 18;
  if ( KiGroupSchedulingEnabled && v19 > KiGenerationEndTick )
  {
    v4 = 1;
    KiGenerationEndTick += (unsigned int)KiGenerationTicks;
  }
  v32 = KeNumberProcessors_0;
  if ( (unsigned int)KeNumberProcessors_0 > 1 && !KiClockTimerPerCpuTickScheduling )
  {
    *(_QWORD *)&v55.Count = 2097153LL;
    memset_0(&v55.8, 0, sizeof(v55.8));
    KiForwardTick((int)CurrentPrcb, v32, v31, v4, &v55);
    KiOrAffinityEx(&KiClockCheckPending, &v55, &KiClockCheckPending, KiClockCheckPending.Size);
  }
  return KiUpdateRunTime(v45, v44, v50);
}
