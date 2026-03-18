/*
 * XREFs of KiQueueReadyThread @ 0x14032F910
 * Callers:
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiDispatchInterrupt @ 0x14032E330 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 * Callees:
 *     KiCheckPrcbAffinityEx @ 0x140201CF0 (KiCheckPrcbAffinityEx.c)
 *     KiInsertQueueDpc @ 0x140252DA0 (KiInsertQueueDpc.c)
 *     EtwTraceThreadAffinity @ 0x14026B7D8 (EtwTraceThreadAffinity.c)
 *     KiComputeThreadAffinity @ 0x1402720F8 (KiComputeThreadAffinity.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiQueryQuantumReset @ 0x1402E5930 (KiQueryQuantumReset.c)
 *     KiEnterDeferredReadyState @ 0x1402F0680 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x1402F13A0 (KiDeferredReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F3D40 (KiRequestSoftwareInterrupt.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402F4770 (KiCheckForMaxOverQuotaScb.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     EtwTraceReadyQueueInsertion @ 0x140311C24 (EtwTraceReadyQueueInsertion.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x140313A60 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 *     KiCheckThreadAffinity @ 0x140316A80 (KiCheckThreadAffinity.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140316DD0 (KiUpdateVPBackingThreadPriority.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     KiIsThreadExemptFromForcePark @ 0x14031888C (KiIsThreadExemptFromForcePark.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x140350788 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x140350974 (-KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z.c)
 *     KiShouldPreemptionBeDeferred @ 0x140350F00 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x140350F20 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x140351D88 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140353968 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KiAddThreadToScbQueue @ 0x140430214 (KiAddThreadToScbQueue.c)
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x140430330 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     KiProcessScbTracingList @ 0x140454D48 (KiProcessScbTracingList.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140472C3C (KiTryScheduleNextForegroundBoost.c)
 *     EtwTraceIdealProcessor @ 0x1404B0E7C (EtwTraceIdealProcessor.c)
 *     KiComputeNewPriority @ 0x1404E8FCC (KiComputeNewPriority.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall KiQueueReadyThread(struct _KPRCB *a1, __int64 *a2, ULONG_PTR a3)
{
  unsigned __int64 v3; // rbx
  __int64 *v4; // r13
  ULONG_PTR v5; // rsi
  __int64 v6; // rdx
  char v8; // di
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  struct _KSCHEDULING_GROUP *v13; // r14
  int v14; // r13d
  struct _SINGLE_LIST_ENTRY *p_TracingListEntry; // rbx
  struct _KSCB *i; // rdi
  __int16 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  _WORD *v23; // rcx
  __int64 Group; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r10
  _BYTE *SchedulerAssist; // rax
  char v29; // bl
  __int64 v30; // rcx
  int v31; // r8d
  struct _KSCB *v32; // r10
  __int64 v33; // rdx
  int v34; // r9d
  __int64 v35; // r11
  char v36; // bl
  __int64 v37; // r12
  unsigned __int64 SharedReadyQueueMask; // rdx
  _WORD *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdi
  _LIST_ENTRY *v43; // r14
  struct _KPRCB **v44; // rdx
  struct _LIST_ENTRY *v45; // rax
  struct _LIST_ENTRY *Flink; // rcx
  int v47; // ebx
  __int64 v48; // rax
  char v49; // r9
  int v50; // r10d
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rax
  unsigned __int64 NonParkedSet; // rax
  _KFORCE_PARK_DUTY_CYCLE_DATA *ForceParkDutyCycleData; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  struct _LIST_ENTRY *v56; // rcx
  _LIST_ENTRY *v57; // rax
  struct _LIST_ENTRY *v58; // rdx
  struct _LIST_ENTRY *Blink; // rdx
  unsigned int v60; // eax
  __int64 v61; // rax
  _KSHARED_READY_QUEUE *v62; // rcx
  _KFORCE_PARK_DUTY_CYCLE_DATA *v63; // r14
  _KSHARED_READY_QUEUE *v64; // rdi
  struct _KPRCB **v65; // rdx
  int v66; // ebx
  bool v67; // zf
  __int64 v68; // rax
  __int64 v69; // rdx
  _KTHREAD *NextThread; // rbx
  bool v71; // [rsp+30h] [rbp-40h]
  unsigned int v72; // [rsp+34h] [rbp-3Ch]
  unsigned int v73; // [rsp+38h] [rbp-38h]
  struct _SINGLE_LIST_ENTRY *v74; // [rsp+40h] [rbp-30h] BYREF
  __int128 v75; // [rsp+48h] [rbp-28h] BYREF
  __int128 v76; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR v78; // [rsp+C0h] [rbp+50h]
  int v79; // [rsp+C8h] [rbp+58h]

  v78 = a3;
  v3 = *(_QWORD *)(a3 + 72);
  v4 = a2;
  v5 = a3;
  v6 = *(unsigned __int8 *)(a3 + 565);
  v73 = -1;
  v72 = -1;
  v71 = 0;
  v74 = 0LL;
  v79 = v6;
  if ( *(_QWORD *)(a3 + 568) != KiCpuSetSequence && (*(_DWORD *)(a3 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a3 + 32) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 64), 0LL) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xCu);
    }
    else
    {
      v73 = *(_DWORD *)(a3 + 588);
      if ( v3 >= *(_QWORD *)(a3 + 32) )
      {
        LOBYTE(a3) = 1;
        v8 = KiComputeNewPriority(v5, v6, a3);
        if ( !KiUpdateVPBackingThreadPriority(v5, 0LL, v9, 0) )
          KiUpdateThreadPriority(0LL, v10, v5, v8, 0);
        v11 = v3 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v5);
        if ( (*(_DWORD *)(v5 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 5u);
        *(_QWORD *)(v5 + 32) = v11;
        KiTryScheduleNextForegroundBoost(v5);
        v79 = 0;
      }
      if ( !KiCheckThreadAffinity(v5) && (unsigned int)KiComputeThreadAffinity(v12) )
      {
        if ( !KiCheckPrcbAffinityEx(*(_WORD **)(v5 + 576), (__int64)a1) )
          _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0xCu);
        v71 = (WORD2(PerfGlobalGroupMask) & 0x1000) != 0;
      }
      v72 = *(_DWORD *)(v5 + 588);
      *(_QWORD *)(v5 + 64) = 0LL;
    }
  }
  v13 = *(struct _KSCHEDULING_GROUP **)(v5 + 104);
  if ( v13 )
  {
    v14 = 0;
    p_TracingListEntry = v74;
    for ( i = (struct _KSCB *)((char *)v13 + a1->ScbOffset);
          ;
          v13 = (struct _KSCHEDULING_GROUP *)((char *)i - a1->ScbOffset) )
    {
      LODWORD(v74) = i->Rank;
      v17 = i->PrcbLockFlags & 2;
      if ( (i->PrcbLockFlags & 4) != 0 )
      {
        if ( KiCheckMaxOverQuotaTransition(i, v13) )
        {
          if ( (*(_BYTE *)&i->0 & 1) != 0 )
            KiRemoveSchedulingGroupQueue(a1, i, 1u);
        }
        else if ( i->GenerationCycles >= i->RankCycleTarget && (*(_BYTE *)&i->0 & 2) == 0 )
        {
          KiRecomputeGroupSchedulingRank(v13, i, a1);
        }
      }
      else
      {
        KiComputeGroupSchedulingRank(v13, a1, (union _KISOLATION_UNIT_LOCK_HANDLE *)a3, i);
      }
      if ( (WORD2(xmmword_140FC5B10) & 0x4000) != 0
        && ((_DWORD)v74 != i->Rank || (v17 != 0) != ((i->PrcbLockFlags >> 1) & 1)) )
      {
        i->TracingListEntry.Next = p_TracingListEntry;
        i->PrcbLockFlags |= 0x100u;
        p_TracingListEntry = &i->TracingListEntry;
      }
      v14 += i->Rank;
      i = i->Parent;
      if ( !i )
        break;
    }
    v5 = v78;
    v74 = p_TracingListEntry;
    if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(v78, v18, a3, v19)
      && (unsigned __int8)KiShouldPreemptionBeDeferred(v20)
      && v14 )
    {
      v4 = a2;
      if ( (*(_DWORD *)(v78 + 120) & 0xC00) == 0 )
        _interlockedbittestandset((volatile signed __int32 *)(v78 + 120), 0xBu);
    }
    else
    {
      v4 = a2;
    }
  }
  v21 = 0LL;
  if ( *(char *)(v5 + 195) >= KiRebalanceMinPriority || (a1->IdleState & 0x10) != 0 )
  {
    v22 = *(_QWORD *)(v5 + 104);
    if ( !v22 || !KiCheckForMaxOverQuotaScb(v22 + a1->ScbOffset) )
    {
      v23 = *(_WORD **)(v5 + 576);
      Group = a1->Group;
      if ( (unsigned __int16)Group >= *v23 )
        v25 = 0LL;
      else
        v25 = *(_QWORD *)&v23[4 * Group + 4];
      v21 = v25 & a1->SchedulerSubNode->IdleNonParkedCpuSet;
    }
  }
  if ( (*(_DWORD *)(v5 + 120) & 0x1000) == 0 && !v21 )
  {
    *(_BYTE *)(v5 + 565) = 0;
    *(_DWORD *)(v5 + 436) = MEMORY[0xFFFFF78000000320];
    v26 = *(_QWORD *)(v5 + 104);
    if ( v26 )
      v27 = v26 + a1->ScbOffset;
    else
      v27 = 0LL;
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[16] = 0;
    v29 = 0;
    *(_BYTE *)(v5 + 388) = 1;
    if ( v27 && (*(_DWORD *)(v5 + 120) & 0xC00) == 0 )
    {
      if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(v5, v27, 0LL, 0LL)
        && !(unsigned __int8)KiShouldPreemptionBeDeferred(v30) )
      {
        if ( KiCheckForMaxOverQuotaScb((__int64)v32) )
        {
          v31 = -1;
        }
        else
        {
          do
          {
            v31 += *(_DWORD *)(v33 + 124);
            if ( v35 )
            {
              v34 += **(_DWORD **)(v33 + 128);
            }
            else if ( v31 )
            {
              break;
            }
            v33 = *(_QWORD *)(v33 + 416);
          }
          while ( v33 );
          if ( v34 )
            v29 = 1;
        }
      }
      if ( v31 )
      {
        KiAddThreadToScbQueue(a1, v32);
        v36 = 2;
LABEL_151:
        if ( (WORD2(xmmword_140FC5B10) & 0x800) != 0 )
        {
          _InterlockedIncrement16((volatile signed __int16 *)(v5 + 868));
          KiReleasePrcbLocksForIsolationUnit(v4);
          EtwTraceReadyQueueInsertion(v5, a1->Number, v36, 0LL);
          _InterlockedDecrement16((volatile signed __int16 *)(v5 + 868));
        }
        else
        {
          KiReleasePrcbLocksForIsolationUnit(v4);
        }
        KiProcessScbTracingList(a1, &v74);
        goto LABEL_159;
      }
    }
    v37 = *(char *)(v5 + 195);
    if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
      _InterlockedOr(*(volatile signed __int32 **)(v5 + 968), 0x40000u);
    KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(v5);
    SharedReadyQueueMask = a1->SharedReadyQueueMask;
    if ( (*(_DWORD *)(v5 + 120) & 0x2000) != 0 && SharedReadyQueueMask )
    {
      v39 = *(_WORD **)(v5 + 576);
      v40 = a1->Group;
      v41 = (unsigned __int16)v40 >= *v39 ? 0LL : *(_QWORD *)&v39[4 * v40 + 4];
      if ( (SharedReadyQueueMask & v41) == SharedReadyQueueMask && !v29 )
      {
        SharedReadyQueue = a1->SharedReadyQueue;
        v43 = &SharedReadyQueue->ReadyListHead[v37];
        v75 = 0LL;
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          *((_QWORD *)&v75 + 1) = SharedReadyQueue;
          *(_QWORD *)&v75 = 0LL;
          v44 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)SharedReadyQueue, (__int64)&v75);
          if ( v44 )
            KxWaitForLockOwnerShip((struct _KPRCB *)&v75, v44);
        }
        else
        {
          v47 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
          {
            do
            {
              if ( (++v47 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait();
              }
              else
              {
                _mm_pause();
              }
            }
            while ( SharedReadyQueue->Lock );
          }
        }
        v45 = (struct _LIST_ENTRY *)(v5 + 216);
        if ( v79 )
        {
          Flink = v43->Flink;
          if ( v43->Flink->Blink == v43 )
          {
            v45->Flink = Flink;
            *(_QWORD *)(v5 + 224) = v43;
            Flink->Blink = v45;
            v43->Flink = v45;
            _bittestandreset(&a1->AffinitizedSelectionMask, v37);
LABEL_95:
            SharedReadyQueue->ReadySummary |= 1 << v37;
            *(_DWORD *)(v5 + 536) |= 0x80000000;
            ++SharedReadyQueue->ReadyThreadCount;
            if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(Flink)
              && SharedReadyQueue->ReadyThreadCount == 1 )
            {
              _InterlockedOr64(
                (volatile signed __int64 *)&SharedReadyQueue->SubNode->StealableSharedReadyQueues,
                SharedReadyQueue->Affinity);
            }
            v48 = *(unsigned int *)(v5 + 84);
            *(_DWORD *)(v5 + 1784) = v48;
            SharedReadyQueue->ReadyQueueExpectedRunTime += v48;
            KiUpdateSoftParkElectionStatisticsOnInsertion((__int64)SharedReadyQueue, v5);
            v36 = 1;
            if ( KiForceParkingConfiguration && (a1->IdleState & 0x20) != 0 && !KiIsThreadExemptFromForcePark(v5) )
            {
              if ( (v49 & 0x10) == 0
                || ((SchedulerSubNode = a1->SchedulerSubNode, !v50)
                  ? (NonParkedSet = SchedulerSubNode->NonParkedSet)
                  : (NonParkedSet = ~SchedulerSubNode->ForceParkRequestSet),
                    (NonParkedSet & SharedReadyQueue->Affinity) == 0) )
              {
                if ( !SharedReadyQueue->ForceParkDutyCyclingArmedMask )
                {
                  SharedReadyQueue->ForceParkDutyCyclingArmedMask |= a1->GroupSetMember;
                  ForceParkDutyCycleData = a1->ForceParkDutyCycleData;
                  ForceParkDutyCycleData->CurrentState = KiForceParkDutyCycleArmed;
                  ForceParkDutyCycleData->DpcTransition = KiForceParkDutyCycleTransitionArm;
                  KiInsertQueueDpc((ULONG_PTR)ForceParkDutyCycleData, 0LL, 0LL, 0LL, 0);
                }
              }
            }
            if ( (KiVelocityFlags & 0x200000) == 0 )
            {
              _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
              goto LABEL_151;
            }
            _m_prefetchw(&v75);
            v54 = v75;
            if ( !(_QWORD)v75 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v75 + 1),
                                 0LL,
                                 (signed __int64)&v75) == &v75 )
                goto LABEL_151;
              v54 = KxWaitForLockChainValid((__int64 *)&v75);
            }
            *(_QWORD *)&v75 = 0LL;
            v55 = *((_QWORD *)&v75 + 1);
            if ( (((unsigned __int8)v55 ^ (unsigned __int8)_InterlockedExchange64(
                                                             (volatile __int64 *)(v54 + 8),
                                                             *((__int64 *)&v75 + 1))) & 4) != 0 )
              KeWakeAddressAll(v54 + 8, v55);
            goto LABEL_151;
          }
        }
        else
        {
          Flink = v43->Blink;
          if ( Flink->Flink == v43 )
          {
            v45->Flink = v43;
            *(_QWORD *)(v5 + 224) = Flink;
            Flink->Flink = v45;
            v43->Blink = v45;
            goto LABEL_95;
          }
        }
LABEL_119:
        __fastfail(3u);
      }
    }
    v56 = (struct _LIST_ENTRY *)(v5 + 216);
    v57 = &a1->DispatcherReadyListHead[v37];
    if ( v79 )
    {
      v58 = v57->Flink;
      if ( v57->Flink->Blink != v57 )
        goto LABEL_119;
      v56->Flink = v58;
      *(_QWORD *)(v5 + 224) = v57;
      v58->Blink = v56;
      v57->Flink = v56;
      _bittestandset(&a1->AffinitizedSelectionMask, v37);
    }
    else
    {
      Blink = v57->Blink;
      if ( Blink->Flink != v57 )
        goto LABEL_119;
      v56->Flink = v57;
      *(_QWORD *)(v5 + 224) = Blink;
      Blink->Flink = v56;
      v57->Blink = v56;
    }
    v60 = a1->ReadySummary | (1 << v37);
    ++a1->ReadyThreadCount;
    a1->ReadySummary = v60;
    if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v56)
      && a1->ReadyThreadCount == 1
      && !a1->ScbQueue.Root )
    {
      _InterlockedOr64((volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues, a1->GroupSetMember);
    }
    v61 = *(unsigned int *)(v5 + 84);
    *(_DWORD *)(v5 + 1784) = v61;
    v62 = a1->SharedReadyQueue;
    a1->ReadyQueueExpectedRunTime += v61;
    KiUpdateSoftParkElectionStatisticsOnInsertion((__int64)v62, v5);
    if ( !KiForceParkingConfiguration
      || (a1->IdleState & 0x20) == 0
      || KiIsThreadExemptFromForcePark(v5)
      || (v63 = a1->ForceParkDutyCycleData, v64 = a1->SharedReadyQueue, v63->CurrentState) )
    {
LABEL_150:
      v36 = 0;
      goto LABEL_151;
    }
    if ( v64 )
    {
      v76 = 0LL;
      if ( (KiVelocityFlags & 0x200000) != 0 )
      {
        *((_QWORD *)&v76 + 1) = v64;
        *(_QWORD *)&v76 = 0LL;
        v65 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)v64, (__int64)&v76);
        if ( v65 )
          KxWaitForLockOwnerShip((struct _KPRCB *)&v76, v65);
      }
      else
      {
        v66 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v64, 0LL) )
        {
          do
          {
            if ( (++v66 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait();
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v64->Lock );
        }
      }
      v67 = (KiVelocityFlags & 0x200000) == 0;
      v64->ForceParkDutyCyclingArmedMask |= a1->GroupSetMember;
      if ( v67 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v64, 0LL);
      }
      else
      {
        _m_prefetchw(&v76);
        v68 = v76;
        if ( (_QWORD)v76 )
          goto LABEL_146;
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v76 + 1),
                           0LL,
                           (signed __int64)&v76) != &v76 )
        {
          v68 = KxWaitForLockChainValid((__int64 *)&v76);
LABEL_146:
          *(_QWORD *)&v76 = 0LL;
          v69 = *((_QWORD *)&v76 + 1);
          if ( (((unsigned __int8)v69 ^ (unsigned __int8)_InterlockedExchange64(
                                                           (volatile __int64 *)(v68 + 8),
                                                           *((__int64 *)&v76 + 1))) & 4) != 0 )
            KeWakeAddressAll(v68 + 8, v69);
        }
      }
    }
    v63->CurrentState = KiForceParkDutyCycleArmed;
    v63->DpcTransition = KiForceParkDutyCycleTransitionArm;
    KiInsertQueueDpc((ULONG_PTR)v63, 0LL, 0LL, 0LL, 0);
    goto LABEL_150;
  }
  NextThread = a1->NextThread;
  KiEnterDeferredReadyState(v5);
  KiReleasePrcbLocksForIsolationUnit(v4);
  KiProcessScbTracingList(a1, &v74);
  _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 0xCu);
  *(_BYTE *)(v5 + 565) = v79;
  KiDeferredReadyThread(a1, v5, 0LL);
  if ( !NextThread && a1->CurrentThread != a1->IdleThread && a1->NextThread )
    KiRequestSoftwareInterrupt(a1, 2);
LABEL_159:
  if ( v71 )
    EtwTraceThreadAffinity(
      v5,
      *(_WORD *)(v5 + 584),
      (*(_DWORD *)(v5 + 116) & 8) != 0,
      0,
      *(unsigned __int16 **)(v5 + 576),
      1334);
  if ( v73 != v72 && (xmmword_140FC5B10 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(v5, 1350LL, v73, v72);
}
