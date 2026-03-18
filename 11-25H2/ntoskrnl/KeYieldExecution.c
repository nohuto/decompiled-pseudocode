/*
 * XREFs of KeYieldExecution @ 0x14027B240
 * Callers:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     NtYieldExecution @ 0x14027B220 (NtYieldExecution.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiQueryQuantumReset @ 0x1402E5930 (KiQueryQuantumReset.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiAbProcessPreContextSwitch @ 0x140316AB0 (KiAbProcessPreContextSwitch.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140316DD0 (KiUpdateVPBackingThreadPriority.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140330AC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiComputeNewPriority @ 0x1404E8FCC (KiComputeNewPriority.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404F4D1C (KiVpBackingThreadYieldExecution.c)
 *     KiSwapContext @ 0x1406A7790 (KiSwapContext.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KeYieldExecution(int a1)
{
  unsigned int v1; // r15d
  char v2; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 CurrentIrql; // r14
  struct _KPRCB *v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  __int64 v11; // rbx
  __int64 ProcessorCount; // rcx
  _KPRCB **Prcbs; // rsi
  __int64 v14; // r14
  _KPRCB *v15; // rdi
  unsigned int v16; // ebx
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  bool v18; // r10
  _KI_RESCHEDULE_CONTEXT_ENTRY *v19; // r9
  unsigned int v20; // ecx
  _KI_RESCHEDULE_CONTEXT_ENTRY *ProcessorEntries; // rax
  unsigned __int8 AllCompareThreadStateFlags; // dl
  unsigned __int8 v23; // al
  unsigned int i; // edx
  _KI_RESCHEDULE_CONTEXT_ENTRY *v25; // r8
  char v26; // al
  char v27; // al
  char v28; // al
  __int64 v29; // rdi
  char v30; // r9
  unsigned __int64 v31; // rcx
  unsigned __int64 *v32; // r8
  int v33; // edx
  __int64 v34; // rax
  unsigned int j; // ebx
  unsigned int v36; // ebx
  unsigned __int64 v37; // r10
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  _KTHREAD *NextThread; // rdi
  unsigned __int64 v43; // rdx
  unsigned __int64 *v44; // r8
  int v45; // ecx
  __int64 updated; // rax
  struct _KPRCB *v47; // rcx
  unsigned __int64 CycleTime; // rbx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v50; // eax
  signed __int32 v51; // ett
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // ebx
  int v56; // edx
  __int64 v57; // r8
  unsigned __int64 v58; // [rsp+30h] [rbp-58h]
  unsigned __int64 v59; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+40h] [rbp-48h] BYREF
  __int64 v61; // [rsp+98h] [rbp+10h] BYREF
  __int64 v62; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v63; // [rsp+A8h] [rbp+20h]

  v1 = 0;
  v2 = a1;
  v62 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->ReadySummary && !CurrentPrcb->SharedReadyQueue->ReadySummary )
    return 1073741860LL;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  v63 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql);
  v7 = KeGetCurrentPrcb();
  if ( v7->ReadySummary || v7->SharedReadyQueue->ReadySummary )
  {
    if ( (v2 & 2) != 0
      && (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) != 0
      && !(unsigned __int8)KiVpBackingThreadYieldExecution(CurrentThread) )
    {
      v1 = 1073741860;
      goto LABEL_114;
    }
    KiAbProcessPreContextSwitch(CurrentThread, 0LL);
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( CurrentThread->ThreadLock );
    }
    CoreControlBlock = v7->CoreControlBlock;
    v11 = (unsigned __int64)v7 | 1;
    v61 = (unsigned __int64)v7 | 1;
    ProcessorCount = CoreControlBlock->ProcessorCount;
    Prcbs = CoreControlBlock->Prcbs;
    if ( (_BYTE)ProcessorCount )
    {
      v14 = CoreControlBlock->ProcessorCount;
      do
      {
        v15 = *Prcbs;
        v16 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v15->PrcbLock, 0LL) )
        {
          do
          {
            if ( (++v16 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(ProcessorCount) )
            {
              HvlNotifyLongSpinWait(v16);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v15->PrcbLock );
        }
        ++Prcbs;
        --v14;
      }
      while ( v14 );
      v11 = v61;
      LOBYTE(CurrentIrql) = v63;
    }
    if ( v7->NextThread )
      goto LABEL_83;
    StaticRescheduleContext = v7->StaticRescheduleContext;
    memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)StaticRescheduleContext, &v61);
    v18 = (v2 & 1) == 0 || CurrentThread->Priority >= 16;
    v19 = 0LL;
    v20 = 0;
    if ( StaticRescheduleContext->ProcessorCount )
    {
      ProcessorEntries = StaticRescheduleContext->ProcessorEntries;
      while ( ProcessorEntries->Prcb != v7 )
      {
        ++v20;
        ++ProcessorEntries;
        if ( v20 >= StaticRescheduleContext->ProcessorCount )
          goto LABEL_48;
      }
      v19 = ProcessorEntries;
    }
LABEL_48:
    AllCompareThreadStateFlags = v19->AllCompareThreadStateFlags;
    if ( v18 )
      v23 = AllCompareThreadStateFlags | 0x10;
    else
      v23 = AllCompareThreadStateFlags | 8;
    v19->AllCompareThreadStateFlags = v23;
    v19->___u5[0] |= 2u;
    if ( (AllCompareThreadStateFlags & 2) != 0 )
    {
      for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
      {
        v25 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i);
        if ( v25 != v19 )
        {
          v26 = v25->AllCompareThreadStateFlags;
          if ( v18 )
            v27 = v26 | 0x10;
          else
            v27 = v26 | 8;
          v25->AllCompareThreadStateFlags = v27;
          v25->___u5[0] |= 2u;
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
    v28 = KiCommitRescheduleContext(StaticRescheduleContext, v7, 0LL, &v62);
    v29 = v62;
    v30 = v28;
    if ( !v28 && !v62 )
    {
LABEL_83:
      v37 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
      v38 = 0LL;
      v58 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
      v39 = 0LL;
      if ( (v11 & 1) != 0 )
      {
        if ( (v11 & 1) == 1 )
        {
          v39 = *(_QWORD *)(v37 + 36440) + 8LL;
          v38 = **(unsigned __int8 **)(v37 + 36440);
        }
        LODWORD(v40) = 0;
        v41 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (_DWORD)v38 )
        {
          do
          {
            if ( v41 == *(_QWORD *)v39 )
            {
              v40 = (unsigned int)(v40 + 1);
              if ( (_DWORD)v40 == 1 )
                v41 = -1LL;
              else
                v41 = *(&v58 + v40);
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)v39 + 48LL), 0LL);
            }
            v39 += 8LL;
            --v38;
          }
          while ( v38 );
        }
        v11 &= ~1uLL;
        v61 = v37;
      }
      NextThread = v7->NextThread;
      if ( NextThread )
      {
        if ( v7->NestingLevel )
        {
          CycleTime = CurrentThread->CycleTime;
        }
        else
        {
          _disable();
          updated = KiUpdateTotalCyclesCurrentThread(v7, CurrentThread, 0LL);
          v47 = KeGetCurrentPrcb();
          CycleTime = updated;
          SchedulerAssist = (signed __int32 *)v47->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v50 = *SchedulerAssist;
            do
            {
              v51 = v50;
              v50 = _InterlockedCompareExchange(SchedulerAssist, v50 & 0xFFDFFFFF, v50);
            }
            while ( v51 != v50 );
            if ( (v50 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v47);
          }
          _enable();
        }
        v53 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(CurrentThread);
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
        CurrentThread->QuantumTarget = v53;
        LOBYTE(v54) = 1;
        v55 = KiComputeNewPriority(CurrentThread, v52, v54);
        if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority((ULONG_PTR)CurrentThread) )
          KiUpdateThreadPriority(0, v56, (_DWORD)CurrentThread, v55, 0);
        CurrentThread->ThreadLock = 0LL;
        v7->NextThread = 0LL;
        KiCaptureTotalCyclesCurrentThread(v7, CurrentThread);
        KiUpdatePriorityMatrixForRunningTransition(v7, NextThread);
        CurrentThread->WaitReason = 33;
        CurrentThread->WaitIrql = CurrentIrql;
        KiQueueReadyThread(v7);
        LOBYTE(v57) = 1;
        KiSwapContext(CurrentThread, NextThread, v57);
        KiAbProcessPostContextSwitch(CurrentThread);
        goto LABEL_114;
      }
      v43 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
      v60 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v11 & 1) != 0 )
      {
        v44 = (unsigned __int64 *)(*(_QWORD *)(v43 + 36440) + 8LL);
        v45 = **(unsigned __int8 **)(v43 + 36440);
        if ( !**(_BYTE **)(v43 + 36440) )
        {
LABEL_100:
          v61 = 0LL;
          CurrentThread->ThreadLock = 0LL;
          KiAbProcessPostContextSwitch(CurrentThread);
          v1 = 1073741860;
          goto LABEL_114;
        }
      }
      else
      {
        v44 = &v60;
        v45 = 1;
      }
      do
        _InterlockedAnd64((volatile signed __int64 *)(v44[--v45] + 48), 0LL);
      while ( v45 );
      goto LABEL_100;
    }
    v31 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
    v59 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v11 & 1) != 0 )
    {
      v32 = (unsigned __int64 *)(*(_QWORD *)(v31 + 36440) + 8LL);
      v33 = **(unsigned __int8 **)(v31 + 36440);
      if ( !**(_BYTE **)(v31 + 36440) )
      {
LABEL_67:
        v61 = 0LL;
        CurrentThread->ThreadLock = 0LL;
        if ( v30 )
        {
          for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
            KiCompleteRescheduleContextEntry(
              (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * j + 8 * j),
              v7,
              0LL,
              0LL);
          KiFlushSoftwareInterruptBatch(&v7->DeferredDispatchInterrupts);
        }
        if ( v29 )
          KiReadyDeferredReadyList(v7, &v62);
        v36 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v36 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v31) )
            {
              HvlNotifyLongSpinWait(v36);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        KiAcquirePrcbLocksForIsolationUnit(v7, 0LL, &v61);
        v11 = v61;
        goto LABEL_83;
      }
    }
    else
    {
      v32 = &v59;
      v33 = 1;
    }
    do
    {
      v34 = (unsigned int)(v33 - 1);
      v31 = v32[v34];
      --v33;
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 48), 0LL);
    }
    while ( (_DWORD)v34 );
    v29 = v62;
    goto LABEL_67;
  }
  v1 = 1073741860;
LABEL_114:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
  __writecr8((unsigned __int8)CurrentIrql);
  return v1;
}
