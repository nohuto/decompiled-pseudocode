/*
 * XREFs of KiUpdateTime @ 0x1402AA2B0
 * Callers:
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KiUpdateRunTime @ 0x1402AA8E0 (KiUpdateRunTime.c)
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x1402ABB08 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 *     PoExecuteIdleCheck @ 0x1402ABB40 (PoExecuteIdleCheck.c)
 *     RtlBeginReadTickLock @ 0x1402ABCF0 (RtlBeginReadTickLock.c)
 *     PpmExecutePeriodicPerfCheck @ 0x1402ABD08 (PpmExecutePeriodicPerfCheck.c)
 *     KiComputeNewSystemTime @ 0x1402ABEDC (KiComputeNewSystemTime.c)
 *     KiComputeNewInterruptTime @ 0x1402ABF50 (KiComputeNewInterruptTime.c)
 *     RtlWriteAcquireTickLock @ 0x1402ABFD4 (RtlWriteAcquireTickLock.c)
 *     RtlWriteTryAcquireTickLock @ 0x1402ABFF8 (RtlWriteTryAcquireTickLock.c)
 *     KiForwardTick @ 0x1402AC02C (KiForwardTick.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiSetForceIdleState @ 0x140484E74 (KiSetForceIdleState.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiUpdateTime(unsigned __int8 a1, unsigned __int8 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int8 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // al
  char v10; // bl
  __int64 *v11; // rsi
  char v12; // r15
  __int64 TickLock; // rdi
  LARGE_INTEGER v14; // rax
  unsigned __int64 v15; // r9
  LARGE_INTEGER v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // ebx
  unsigned __int8 CurrentIrql; // di
  __int64 v25; // r15
  int IsEnabledNoReportingNoInline; // eax
  int v27; // r12d
  LARGE_INTEGER InterruptTimePrecise; // rcx
  bool v29; // si
  LARGE_INTEGER v30; // rbx
  unsigned __int8 TypeFlags; // al
  unsigned __int64 v32; // r14
  int v33; // ebx
  struct _KPRCB *v35; // rcx
  signed __int32 *SchedulerAssist; // r8
  bool v37; // zf
  __int64 v38; // rdx
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  unsigned __int64 v41; // rdx
  char v42; // [rsp+30h] [rbp-D0h]
  bool v43; // [rsp+31h] [rbp-CFh] BYREF
  char v44; // [rsp+32h] [rbp-CEh] BYREF
  unsigned __int8 v45; // [rsp+33h] [rbp-CDh]
  unsigned __int8 v46; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v47; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v48; // [rsp+40h] [rbp-C0h] BYREF
  int v49; // [rsp+48h] [rbp-B8h] BYREF
  int v50; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v51; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v53; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  LONGLONG v55; // [rsp+70h] [rbp-90h] BYREF
  struct _KAFFINITY_EX v56; // [rsp+80h] [rbp-80h] BYREF
  char v57[32]; // [rsp+190h] [rbp+90h] BYREF
  LARGE_INTEGER *v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  int *v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  __int64 *v62; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  LONGLONG *v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  int *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  bool *v70; // [rsp+210h] [rbp+110h]
  __int64 v71; // [rsp+218h] [rbp+118h]
  char *v72; // [rsp+220h] [rbp+120h]
  __int64 v73; // [rsp+228h] [rbp+128h]

  v51 = a3;
  v45 = a2;
  v46 = a1;
  memset_0(&v56, 0, sizeof(v56));
  CurrentPrcb = KeGetCurrentPrcb();
  v42 = 0;
  v4 = 0;
  v9 = KeDisableInterrupts(v6, v5, v7, v8);
  v10 = 0;
  v11 = (__int64 *)(MmWriteableSharedUserData + 832);
  v48 = 0LL;
  v12 = v9;
  do
  {
    while ( 1 )
    {
      TickLock = RtlBeginReadTickLock(v11);
      v14 = KeQueryPerformanceCounter(0LL);
      ((void (__fastcall *)(_QWORD, _QWORD))KiComputeNewInterruptTime)((LARGE_INTEGER)v14.QuadPart, &v48);
      if ( !KiTimeUpdateTryAcquireTickLock )
        break;
      if ( *v11 == TickLock )
      {
        if ( v48 <= KiTimeUpdateTolerance )
          goto LABEL_48;
        if ( (unsigned __int8)RtlWriteTryAcquireTickLock(v11) )
        {
          v10 = 1;
          goto LABEL_7;
        }
      }
    }
  }
  while ( *v11 != TickLock );
  v15 = v48;
LABEL_7:
  if ( !KiTimeUpdateTryAcquireTickLock )
  {
    if ( v15 <= KiTimeUpdateTolerance )
    {
LABEL_48:
      v19 = MEMORY[0xFFFFF78000000008];
      v20 = MEMORY[0xFFFFF78000000320];
      v47 = MEMORY[0xFFFFF78000000320];
      goto LABEL_12;
    }
    goto LABEL_9;
  }
  if ( !v10 )
LABEL_9:
    RtlWriteAcquireTickLock(v11);
  v16 = KeQueryPerformanceCounter(0LL);
  v17 = ((__int64 (__fastcall *)(_QWORD))KiComputeNewSystemTime)((LARGE_INTEGER)v16.QuadPart);
  HIDWORD(v47) = HIDWORD(v17);
  v18 = v17;
  v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiComputeNewInterruptTime)((LARGE_INTEGER)v16.QuadPart, &v48);
  *(_DWORD *)(MmWriteableSharedUserData + 28) = HIDWORD(v47);
  *(_QWORD *)(MmWriteableSharedUserData + 20) = v18;
  *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(v19);
  *(_QWORD *)(MmWriteableSharedUserData + 8) = v19;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = v16;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = v16;
  v20 = MEMORY[0xFFFFF78000000320];
  v21 = (unsigned int)KiTickOffset - v48;
  v47 = MEMORY[0xFFFFF78000000320];
  if ( v21 <= 0 )
  {
    v38 = 1LL;
    v21 += KeMaximumIncrement;
    if ( v21 <= 0 )
    {
      v41 = ((unsigned __int64)(((unsigned __int64)-v21
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          + 1;
      LODWORD(v21) = v41 * KeMaximumIncrement + v21;
      v38 = v41 + 1;
    }
    v20 = v38 + MEMORY[0xFFFFF78000000320];
    v47 = v38 + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(MmWriteableSharedUserData + 808) = (unsigned __int64)(v38 + MEMORY[0xFFFFF78000000320]) >> 32;
    *(_QWORD *)(MmWriteableSharedUserData + 800) = v20;
  }
  v22 = *v11 + 1;
  KiTickOffset = v21;
  *v11 = v22;
LABEL_12:
  v23 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
    {
      if ( (++v23 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v23);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleStartTime && v19 >= KiForceIdleStartTime && KiForceIdleState == 2 )
  {
    KiSetForceIdleState(1LL);
    if ( !KiForceIdleStartDpc.DpcData )
      KiForceIdleStartDpc.Number = CurrentPrcb->Number + 2048;
    KeInsertQueueDpc(&KiForceIdleStartDpc, 0LL, 0LL);
  }
  if ( ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0 )
    v42 = 1;
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  if ( v12 )
  {
    v35 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v35->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v39 = *SchedulerAssist;
      do
      {
        v40 = v39;
        v39 = _InterlockedCompareExchange(SchedulerAssist, v39 & 0xFFDFFFFF, v39);
      }
      while ( v40 != v39 );
      if ( (v39 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v35);
    }
    _enable();
  }
  if ( KeMinimumIncrement - 1 + (int)v19 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v19;
  if ( KeMinimumIncrement - 1 + (int)v19 - (int)KiLastPseudoHrTimerExpiration >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v19;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
    v25 = KiLastPseudoHrTimerExpiration + KePseudoHrTimeIncrement;
    IsEnabledNoReportingNoInline = Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline();
    v27 = KeMinimumIncrement;
    InterruptTimePrecise.QuadPart = v19;
    v29 = IsEnabledNoReportingNoInline == 0;
    if ( !KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v30.QuadPart = InterruptTimePrecise.QuadPart - v25;
    if ( v25 > 0 )
      v30.QuadPart = v25;
    if ( (unsigned int)dword_140E07080 > 5 )
    {
      v53 = InterruptTimePrecise;
      v49 = 1;
      v58 = &v53;
      v71 = 1LL;
      v60 = &v49;
      v73 = 1LL;
      v62 = &v54;
      v59 = 8LL;
      v61 = 4LL;
      v55 = v30.QuadPart - InterruptTimePrecise.QuadPart;
      v54 = v25;
      v64 = &v55;
      p_PerformanceCounter = &PerformanceCounter;
      v68 = &v50;
      v70 = &v43;
      v72 = &v44;
      v63 = 8LL;
      v65 = 8LL;
      PerformanceCounter = v30;
      v67 = 8LL;
      v50 = v27;
      v69 = 4LL;
      v43 = v29;
      v44 = 0;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140E07080, &word_1400480C6, 0LL, 0LL, 10, v57);
    }
    TypeFlags = CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TypeFlags;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[1].DueTime = v30.QuadPart;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TolerableDelay = v27;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TypeFlags = (2 * v29) | TypeFlags & 0xFD | 1;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v20 = v47;
    v4 = 0;
  }
  if ( v20 > KiBalanceSetManagerLastCheckTick )
  {
    v37 = KiBalanceSetManagerCount-- == 1;
    KiBalanceSetManagerLastCheckTick = v20;
    if ( v37 )
    {
      KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
      KeInsertQueueDpc(&KiBalanceSetManagerPeriodicDpc, 0LL, 0LL);
    }
  }
  if ( !KiClockTimerPerCpuTickScheduling )
    PoExecuteIdleCheck(v19);
  if ( !PpmCheckTimerImplementation && !v42 )
    PpmExecutePeriodicPerfCheck();
  v32 = v19 >> 18;
  if ( KiGroupSchedulingEnabled && v20 > KiGenerationEndTick )
  {
    v4 = 1;
    KiGenerationEndTick += (unsigned int)KiGenerationTicks;
  }
  v33 = KeNumberProcessors_0;
  if ( (unsigned int)KeNumberProcessors_0 > 1 && !KiClockTimerPerCpuTickScheduling )
  {
    *(_QWORD *)&v56.Count = 2097153LL;
    memset_0(&v56.8, 0, sizeof(v56.8));
    KiForwardTick((int)CurrentPrcb, v33, v32, v4, &v56);
    KiOrAffinityEx(&KiClockCheckPending, &v56, &KiClockCheckPending, KiClockCheckPending.Size);
  }
  return KiUpdateRunTime(v46, v45, v51);
}
