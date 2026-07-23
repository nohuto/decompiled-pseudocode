/*
 * XREFs of KeYieldExecution @ 0x14031B9F0
 * Callers:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     NtYieldExecution @ 0x14031B9D0 (NtYieldExecution.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x1402A4BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiAbProcessPreContextSwitch @ 0x1402A5600 (KiAbProcessPreContextSwitch.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KiQueryQuantumReset @ 0x1402CCD5C (KiQueryQuantumReset.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036D540 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404CE2D8 (KiVpBackingThreadYieldExecution.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404DD430 (KiUpdateVPBackingThreadPriority.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C275C (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiSwapContext @ 0x1406B3A00 (KiSwapContext.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeYieldExecution(int a1)
{
  unsigned int v1; // r15d
  char v2; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 CurrentIrql; // rbx
  struct _KPRCB *v7; // r13
  unsigned int v8; // ebx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  __int64 v10; // rbx
  _KPRCB **Prcbs; // r14
  __int64 ProcessorCount; // rbp
  _KPRCB *v13; // rdi
  unsigned int v14; // ebx
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rbp
  bool v16; // r10
  _KI_RESCHEDULE_CONTEXT_ENTRY *v17; // r9
  unsigned int v18; // ecx
  _KI_RESCHEDULE_CONTEXT_ENTRY *ProcessorEntries; // rax
  unsigned __int8 AllCompareThreadStateFlags; // dl
  unsigned __int8 v21; // al
  unsigned int i; // r8d
  __int64 v23; // rdx
  char v24; // al
  char v25; // al
  char v26; // al
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  unsigned __int64 v28; // rcx
  unsigned __int64 *v29; // r8
  int v30; // edx
  unsigned int j; // ebx
  unsigned int v32; // ebx
  __int64 v33; // r9
  unsigned __int64 v34; // r10
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  __int64 NextThread; // r14
  unsigned __int64 v39; // rdx
  unsigned __int64 *v40; // r8
  int v41; // ecx
  __int64 updated; // rax
  struct _KPRCB *v43; // rcx
  unsigned __int64 CycleTime; // rbx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v46; // eax
  signed __int32 v47; // ett
  unsigned __int64 v48; // rcx
  int IsEnabledNoReportingNoInline; // eax
  char Priority; // cl
  char v51; // bl
  char v52; // dl
  int DecayBoost; // edi
  int v54; // eax
  int BasePriority; // ecx
  char v56; // dl
  char v57; // al
  __int64 v58; // rdx
  __int64 v59; // r8
  unsigned __int64 v60; // [rsp+30h] [rbp-58h]
  unsigned __int64 v61; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v62; // [rsp+40h] [rbp-48h] BYREF
  __int64 v63; // [rsp+98h] [rbp+10h] BYREF
  struct _SINGLE_LIST_ENTRY v64; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v65; // [rsp+A8h] [rbp+20h]

  v1 = 0;
  v2 = a1;
  v64.Next = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->ReadySummary && !CurrentPrcb->SharedReadyQueue->ReadySummary )
    return 1073741860LL;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  v65 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
  v7 = KeGetCurrentPrcb();
  if ( v7->ReadySummary || v7->SharedReadyQueue->ReadySummary )
  {
    if ( (v2 & 2) != 0
      && (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) != 0
      && !(unsigned __int8)KiVpBackingThreadYieldExecution(CurrentThread) )
    {
      v1 = 1073741860;
      goto LABEL_137;
    }
    KiAbProcessPreContextSwitch(CurrentThread, 0);
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( CurrentThread->ThreadLock );
    }
    CoreControlBlock = v7->CoreControlBlock;
    v10 = (unsigned __int64)v7 | 1;
    v63 = (unsigned __int64)v7 | 1;
    Prcbs = CoreControlBlock->Prcbs;
    if ( CoreControlBlock->ProcessorCount )
    {
      ProcessorCount = CoreControlBlock->ProcessorCount;
      do
      {
        v13 = *Prcbs;
        v14 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v13->PrcbLock, 0LL) )
        {
          do
          {
            if ( (++v14 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v14);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v13->PrcbLock );
        }
        ++Prcbs;
        --ProcessorCount;
      }
      while ( ProcessorCount );
      v10 = v63;
    }
    if ( v7->NextThread )
      goto LABEL_83;
    StaticRescheduleContext = v7->StaticRescheduleContext;
    memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)StaticRescheduleContext, &v63);
    v16 = (v2 & 1) == 0 || CurrentThread->Priority >= 16;
    v17 = 0LL;
    v18 = 0;
    if ( StaticRescheduleContext->ProcessorCount )
    {
      ProcessorEntries = StaticRescheduleContext->ProcessorEntries;
      while ( ProcessorEntries->Prcb != v7 )
      {
        ++v18;
        ++ProcessorEntries;
        if ( v18 >= StaticRescheduleContext->ProcessorCount )
          goto LABEL_48;
      }
      v17 = ProcessorEntries;
    }
LABEL_48:
    AllCompareThreadStateFlags = v17->AllCompareThreadStateFlags;
    if ( v16 )
      v21 = AllCompareThreadStateFlags | 0x10;
    else
      v21 = AllCompareThreadStateFlags | 8;
    v17->AllCompareThreadStateFlags = v21;
    v17->___u5[0] |= 2u;
    if ( (AllCompareThreadStateFlags & 2) != 0 )
    {
      for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
      {
        v23 = (__int64)&StaticRescheduleContext->ProcessorEntries[i];
        if ( (_KI_RESCHEDULE_CONTEXT_ENTRY *)v23 != v17 )
        {
          v24 = *(_BYTE *)(v23 + 32);
          if ( v16 )
            v25 = v24 | 0x10;
          else
            v25 = v24 | 8;
          *(_BYTE *)(v23 + 32) = v25;
          *(_BYTE *)(v23 + 34) |= 2u;
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, &v64);
    v26 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, v7, 0, &v64);
    Next = v64.Next;
    if ( !v26 && !v64.Next )
    {
LABEL_83:
      v33 = 0LL;
      v34 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
      v60 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
      v35 = 0LL;
      if ( (v10 & 1) != 0 )
      {
        if ( (v10 & 1) == 1 )
        {
          v35 = *(_QWORD *)(v34 + 36440) + 8LL;
          v33 = **(unsigned __int8 **)(v34 + 36440);
        }
        LODWORD(v36) = 0;
        v37 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (_DWORD)v33 )
        {
          do
          {
            if ( v37 == *(_QWORD *)v35 )
            {
              v36 = (unsigned int)(v36 + 1);
              if ( (_DWORD)v36 == 1 )
                v37 = -1LL;
              else
                v37 = *(&v60 + v36);
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)v35 + 48LL), 0LL);
            }
            v35 += 8LL;
            --v33;
          }
          while ( v33 );
        }
        v10 &= ~1uLL;
        v63 = v34;
      }
      NextThread = (__int64)v7->NextThread;
      if ( !NextThread )
      {
        v39 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        v62 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v10 & 1) != 0 )
        {
          v40 = (unsigned __int64 *)(*(_QWORD *)(v39 + 36440) + 8LL);
          v41 = **(unsigned __int8 **)(v39 + 36440);
          if ( !**(_BYTE **)(v39 + 36440) )
          {
LABEL_100:
            v63 = 0LL;
            CurrentThread->ThreadLock = 0LL;
            KiAbProcessPostContextSwitch(CurrentThread);
            LOBYTE(CurrentIrql) = v65;
            v1 = 1073741860;
            goto LABEL_137;
          }
        }
        else
        {
          v40 = &v62;
          v41 = 1;
        }
        do
          _InterlockedAnd64((volatile signed __int64 *)(v40[--v41] + 48), 0LL);
        while ( v41 );
        goto LABEL_100;
      }
      if ( v7->NestingLevel )
      {
        CycleTime = CurrentThread->CycleTime;
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread(v7, CurrentThread, 0LL);
        v43 = KeGetCurrentPrcb();
        CycleTime = updated;
        SchedulerAssist = (signed __int32 *)v43->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v46 = *SchedulerAssist;
          do
          {
            v47 = v46;
            v46 = _InterlockedCompareExchange(SchedulerAssist, v46 & 0xFFDFFFFF, v46);
          }
          while ( v47 != v46 );
          if ( (v46 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v43);
        }
        _enable();
      }
      v48 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset((__int64)CurrentThread);
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
      CurrentThread->QuantumTarget = v48;
      IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v48);
      Priority = CurrentThread->Priority;
      if ( IsEnabledNoReportingNoInline )
      {
        if ( Priority >= 16 && (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) == 0 )
        {
          v51 = CurrentThread->Priority;
          goto LABEL_134;
        }
        if ( KiSchedulerForegroundBoostDecayPolicy )
        {
          v56 = 3;
          if ( (CurrentThread->PriorityDecrement & 0xF) != 0 )
          {
            CurrentThread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
            CurrentThread->PriorityDecrement &= 0xFFF0u;
          }
        }
        else
        {
          v56 = 2;
        }
        v51 = KiComputeThreadPriority((__int64)CurrentThread, v56, 1);
      }
      else
      {
        if ( Priority >= 16 && (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) == 0 )
        {
          v51 = CurrentThread->Priority;
LABEL_134:
          if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority((ULONG_PTR)CurrentThread) )
            KiUpdateThreadPriority(0LL, v58, (__int64)CurrentThread, v51, 0);
          CurrentThread->ThreadLock = 0LL;
          v7->NextThread = 0LL;
          KiCaptureTotalCyclesCurrentThread(v7, CurrentThread);
          KiUpdatePriorityMatrixForRunningTransition(v7, NextThread);
          LOBYTE(CurrentIrql) = v65;
          CurrentThread->WaitIrql = v65;
          CurrentThread->WaitReason = 33;
          KiQueueReadyThread(v7, (__int64)&v63, (ULONG_PTR)CurrentThread);
          LOBYTE(v59) = 1;
          KiSwapContext(CurrentThread, NextThread, v59);
          KiAbProcessPostContextSwitch(CurrentThread);
          goto LABEL_137;
        }
        v52 = 6;
        DecayBoost = CurrentThread->DecayBoost;
        if ( KiSchedulerForegroundBoostDecayPolicy )
        {
          v52 = 7;
          if ( (CurrentThread->PriorityDecrement & 0xF) != 0 )
          {
            CurrentThread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
            CurrentThread->PriorityDecrement &= 0xFFF0u;
          }
        }
        v54 = KiComputeThreadPriority((__int64)CurrentThread, v52, 0);
        BasePriority = CurrentThread->BasePriority;
        v51 = v54;
        if ( (char)DecayBoost >= 1 )
          BasePriority = DecayBoost + BasePriority - 1;
        if ( v54 < BasePriority )
          v51 = BasePriority;
      }
      CurrentThread->PriorityDecrement &= 0xF00Fu;
      v57 = CurrentThread->DecayBoost;
      if ( v57 >= 1 )
        CurrentThread->DecayBoost = v57 - 1;
      else
        CurrentThread->DecayBoost = 0;
      goto LABEL_134;
    }
    v28 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
    v61 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v10 & 1) != 0 )
    {
      v29 = (unsigned __int64 *)(*(_QWORD *)(v28 + 36440) + 8LL);
      v30 = **(unsigned __int8 **)(v28 + 36440);
      if ( !**(_BYTE **)(v28 + 36440) )
      {
LABEL_67:
        v63 = 0LL;
        CurrentThread->ThreadLock = 0LL;
        if ( v26 )
        {
          for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
            KiCompleteRescheduleContextEntry(
              (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * j + 8 * j),
              v7,
              0LL,
              0LL);
          KiFlushSoftwareInterruptBatch((char *)&v7->DeferredDispatchInterrupts);
        }
        if ( Next )
          KiReadyDeferredReadyList((__int64)v7, &v64);
        v32 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v32 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v32);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        KiAcquirePrcbLocksForIsolationUnit((__int64)v7, 0LL, (unsigned __int64 *)&v63);
        v10 = v63;
        goto LABEL_83;
      }
    }
    else
    {
      v29 = &v61;
      v30 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v29[--v30] + 48), 0LL);
    while ( v30 );
    Next = v64.Next;
    goto LABEL_67;
  }
  v1 = 1073741860;
LABEL_137:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
  __writecr8((unsigned __int8)CurrentIrql);
  return v1;
}
