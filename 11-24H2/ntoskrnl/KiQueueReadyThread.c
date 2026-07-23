/*
 * XREFs of KiQueueReadyThread @ 0x1402A4C20
 * Callers:
 *     KiDispatchInterrupt @ 0x1402A32B0 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiHandleDeferredPreemption @ 0x1402E03DC (KiHandleDeferredPreemption.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402A8750 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckThreadAffinity @ 0x1402A8770 (KiCheckThreadAffinity.c)
 *     KiIsThreadExemptFromForcePark @ 0x1402A968C (KiIsThreadExemptFromForcePark.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402A96E0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402A9700 (KiCheckForMaxOverQuotaScb.c)
 *     KiComputeThreadAffinity @ 0x1402A9724 (KiComputeThreadAffinity.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiQueryQuantumReset @ 0x1402CCD5C (KiQueryQuantumReset.c)
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x1402D8368 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     KiAddThreadToScbQueue @ 0x1402D847C (KiAddThreadToScbQueue.c)
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x1402D8590 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x1402D8768 (-KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D89A8 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1402DBA34 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     KiRequestSoftwareInterrupt @ 0x1402DC510 (KiRequestSoftwareInterrupt.c)
 *     KiEnterDeferredReadyState @ 0x1402DFA30 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x1402DFBE0 (KiDeferredReadyThread.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiCheckPrcbAffinityEx @ 0x140370D80 (KiCheckPrcbAffinityEx.c)
 *     EtwTraceThreadAffinity @ 0x1403A2658 (EtwTraceThreadAffinity.c)
 *     EtwTraceReadyQueueInsertion @ 0x1403C1604 (EtwTraceReadyQueueInsertion.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14041E2F0 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 *     KiProcessScbTracingList @ 0x140449184 (KiProcessScbTracingList.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14046A2F8 (KiTryScheduleNextForegroundBoost.c)
 *     EtwTraceIdealProcessor @ 0x1404AC65C (EtwTraceIdealProcessor.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404DD430 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1404E1290 (KiComputeNewPriority.c)
 */

_KTHREAD *__fastcall KiQueueReadyThread(struct _KPRCB *a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  ULONG_PTR v5; // rsi
  int v6; // edx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  struct _KSCHEDULING_GROUP *v12; // r14
  int v13; // r13d
  struct _SINGLE_LIST_ENTRY *p_TracingListEntry; // rbx
  struct _KSCB *i; // rdi
  __int16 v16; // r12
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  _WORD *v19; // rcx
  __int64 Group; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _KSCB *v23; // r10
  _BYTE *SchedulerAssist; // rax
  char v25; // bl
  int v26; // eax
  int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // r9d
  __int64 v31; // r11
  unsigned int v32; // ebx
  __int64 v33; // r12
  unsigned __int64 SharedReadyQueueMask; // rdx
  _WORD *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdi
  _LIST_ENTRY *v39; // r14
  __int64 v40; // rdx
  struct _LIST_ENTRY *v41; // rax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v43; // ebx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 IdleState; // r9
  int v48; // r10d
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rax
  unsigned __int64 NonParkedSet; // rax
  _KFORCE_PARK_DUTY_CYCLE_DATA *ForceParkDutyCycleData; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  struct _LIST_ENTRY *v54; // rcx
  _LIST_ENTRY *v55; // rax
  struct _LIST_ENTRY *v56; // rdx
  struct _LIST_ENTRY *v57; // rdx
  unsigned int ReadySummary; // eax
  bool v59; // zf
  __int64 v60; // rax
  _KSHARED_READY_QUEUE *v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  _KFORCE_PARK_DUTY_CYCLE_DATA *v64; // r14
  _KSHARED_READY_QUEUE *v65; // rdi
  __int64 v66; // rdx
  unsigned int v67; // ebx
  __int64 v68; // rax
  __int64 v69; // rdx
  _KTHREAD *result; // rax
  _KTHREAD *NextThread; // rbx
  __int64 v72; // rdx
  int v73; // r8d
  bool v74; // [rsp+30h] [rbp-40h]
  int v75; // [rsp+34h] [rbp-3Ch]
  int v76; // [rsp+38h] [rbp-38h]
  struct _SINGLE_LIST_ENTRY *v77; // [rsp+40h] [rbp-30h] BYREF
  __int128 v78; // [rsp+48h] [rbp-28h] BYREF
  __int128 v79; // [rsp+58h] [rbp-18h] BYREF
  int v82; // [rsp+C8h] [rbp+58h]

  v3 = *(_QWORD *)(a3 + 72);
  v4 = a2;
  v5 = a3;
  v6 = *(unsigned __int8 *)(a3 + 565);
  v76 = -1;
  v75 = -1;
  v74 = 0;
  v77 = 0LL;
  v82 = v6;
  if ( *(_QWORD *)(a3 + 568) != KiCpuSetSequence && (*(_DWORD *)(a3 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a3 + 32) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 64), 0LL) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xCu);
    }
    else
    {
      v76 = *(_DWORD *)(a3 + 588);
      if ( v3 >= *(_QWORD *)(a3 + 32) )
      {
        v8 = KiComputeNewPriority((struct _KTHREAD *)a3);
        if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(v5) )
          KiUpdateThreadPriority(0, v9, v5, v8, 0);
        v11 = v3 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v5, v9, v10);
        if ( (*(_DWORD *)(v5 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 5u);
        *(_QWORD *)(v5 + 32) = v11;
        KiTryScheduleNextForegroundBoost(v5);
        v82 = 0;
      }
      if ( !(unsigned int)KiCheckThreadAffinity(v5) && (unsigned int)KiComputeThreadAffinity() )
      {
        if ( !(unsigned __int8)KiCheckPrcbAffinityEx(*(_QWORD *)(v5 + 576), a1) )
          _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0xCu);
        v74 = (WORD2(PerfGlobalGroupMask) & 0x1000) != 0;
      }
      v75 = *(_DWORD *)(v5 + 588);
      *(_QWORD *)(v5 + 64) = 0LL;
    }
  }
  v12 = *(struct _KSCHEDULING_GROUP **)(v5 + 104);
  if ( v12 )
  {
    v13 = 0;
    p_TracingListEntry = v77;
    for ( i = (struct _KSCB *)((char *)v12 + a1->ScbOffset);
          ;
          v12 = (struct _KSCHEDULING_GROUP *)((char *)i - a1->ScbOffset) )
    {
      LODWORD(v77) = i->Rank;
      v16 = i->PrcbLockFlags & 2;
      if ( (i->PrcbLockFlags & 4) != 0 )
      {
        if ( KiCheckMaxOverQuotaTransition(i, v12) )
        {
          if ( (*(_BYTE *)&i->0 & 1) != 0 )
            KiRemoveSchedulingGroupQueue(a1, i, 1u);
        }
        else if ( i->GenerationCycles >= i->RankCycleTarget && (*(_BYTE *)&i->0 & 2) == 0 )
        {
          KiRecomputeGroupSchedulingRank(v12, i, a1);
        }
      }
      else
      {
        KiComputeGroupSchedulingRank(v12, a1, (union _KISOLATION_UNIT_LOCK_HANDLE *)a3, i);
      }
      if ( (WORD2(xmmword_140FC6B50) & 0x4000) != 0
        && ((_DWORD)v77 != i->Rank || (v16 != 0) != ((i->PrcbLockFlags >> 1) & 1)) )
      {
        i->TracingListEntry.Next = p_TracingListEntry;
        i->PrcbLockFlags |= 0x100u;
        p_TracingListEntry = &i->TracingListEntry;
      }
      v13 += i->Rank;
      i = i->Parent;
      if ( !i )
        break;
    }
    v5 = a3;
    v77 = p_TracingListEntry;
    if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(a3)
      && (unsigned __int8)((__int64 (*)(void))KiShouldPreemptionBeDeferred)()
      && v13 )
    {
      v4 = a2;
      if ( (*(_DWORD *)(a3 + 120) & 0xC00) == 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xBu);
    }
    else
    {
      v4 = a2;
    }
  }
  v17 = 0LL;
  if ( *(char *)(v5 + 195) >= KiRebalanceMinPriority || (a1->IdleState & 0x10) != 0 )
  {
    v18 = *(_QWORD *)(v5 + 104);
    if ( !v18 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v18 + a1->ScbOffset, 0LL) )
    {
      v19 = *(_WORD **)(v5 + 576);
      Group = a1->Group;
      if ( (unsigned __int16)Group >= *v19 )
        v21 = 0LL;
      else
        v21 = *(_QWORD *)&v19[4 * Group + 4];
      v17 = v21 & a1->SchedulerSubNode->IdleNonParkedCpuSet;
    }
  }
  if ( (*(_DWORD *)(v5 + 120) & 0x1000) == 0 && !v17 )
  {
    *(_BYTE *)(v5 + 565) = 0;
    *(_DWORD *)(v5 + 436) = MEMORY[0xFFFFF78000000320];
    v22 = *(_QWORD *)(v5 + 104);
    if ( v22 )
      v23 = (struct _KSCB *)(v22 + a1->ScbOffset);
    else
      v23 = 0LL;
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[16] = 0;
    v25 = 0;
    *(_BYTE *)(v5 + 388) = 1;
    if ( v23 )
    {
      v26 = *(_DWORD *)(v5 + 120);
      if ( (v26 & 0xC00) == 0 )
      {
        v27 = 0;
        if ( *(char *)(v5 + 195) < 16
          && (v26 & 0x200) == 0
          && !(unsigned __int8)KiShouldPreemptionBeDeferred(v5, v23, 0LL, 0LL) )
        {
          if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v23, v28) )
          {
            v27 = -1;
          }
          else
          {
            do
            {
              v27 += *(_DWORD *)(v29 + 124);
              if ( v31 )
              {
                v30 += **(_DWORD **)(v29 + 128);
              }
              else if ( v27 )
              {
                break;
              }
              v29 = *(_QWORD *)(v29 + 416);
            }
            while ( v29 );
            if ( v30 )
              v25 = 1;
          }
        }
        if ( v27 )
        {
          KiAddThreadToScbQueue(a1, v23);
          v32 = 2;
LABEL_150:
          if ( (WORD2(xmmword_140FC6B50) & 0x800) != 0 )
          {
            _InterlockedIncrement16((volatile signed __int16 *)(v5 + 868));
            KiReleasePrcbLocksForIsolationUnit(v4);
            EtwTraceReadyQueueInsertion(v5, a1->Number, v32, 0LL);
            _InterlockedDecrement16((volatile signed __int16 *)(v5 + 868));
          }
          else
          {
            KiReleasePrcbLocksForIsolationUnit(v4);
          }
          result = (_KTHREAD *)KiProcessScbTracingList(a1, &v77);
          goto LABEL_158;
        }
      }
    }
    v33 = *(char *)(v5 + 195);
    if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
      _InterlockedOr(*(volatile signed __int32 **)(v5 + 968), 0x40000u);
    KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(v5);
    SharedReadyQueueMask = a1->SharedReadyQueueMask;
    if ( (*(_DWORD *)(v5 + 120) & 0x2000) != 0 && SharedReadyQueueMask )
    {
      v35 = *(_WORD **)(v5 + 576);
      v36 = a1->Group;
      v37 = (unsigned __int16)v36 >= *v35 ? 0LL : *(_QWORD *)&v35[4 * v36 + 4];
      if ( (SharedReadyQueueMask & v37) == SharedReadyQueueMask && !v25 )
      {
        SharedReadyQueue = a1->SharedReadyQueue;
        v39 = &SharedReadyQueue->ReadyListHead[v33];
        v78 = 0LL;
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          *((_QWORD *)&v78 + 1) = SharedReadyQueue;
          *(_QWORD *)&v78 = 0LL;
          v40 = _InterlockedExchange64((volatile __int64 *)SharedReadyQueue, (__int64)&v78);
          if ( v40 )
            KxWaitForLockOwnerShip(&v78, v40);
        }
        else
        {
          v43 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
          {
            do
            {
              if ( (++v43 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v43);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( SharedReadyQueue->Lock );
          }
        }
        v41 = (struct _LIST_ENTRY *)(v5 + 216);
        if ( v82 )
        {
          Flink = v39->Flink;
          if ( v39->Flink->Blink == v39 )
          {
            v41->Flink = Flink;
            *(_QWORD *)(v5 + 224) = v39;
            Flink->Blink = v41;
            v39->Flink = v41;
            _bittestandreset(&a1->AffinitizedSelectionMask, v33);
            goto LABEL_96;
          }
        }
        else
        {
          Blink = v39->Blink;
          if ( Blink->Flink == v39 )
          {
            v41->Flink = v39;
            *(_QWORD *)(v5 + 224) = Blink;
            Blink->Flink = v41;
            v39->Blink = v41;
LABEL_96:
            SharedReadyQueue->ReadySummary |= 1 << v33;
            *(_DWORD *)(v5 + 536) |= 0x80000000;
            if ( ++SharedReadyQueue->ReadyThreadCount == 1 )
              _InterlockedOr64(
                (volatile signed __int64 *)&SharedReadyQueue->SubNode->StealableSharedReadyQueues,
                SharedReadyQueue->Affinity);
            v45 = *(unsigned int *)(v5 + 84);
            *(_DWORD *)(v5 + 1784) = v45;
            SharedReadyQueue->ReadyQueueExpectedRunTime += v45;
            KiUpdateSoftParkElectionStatisticsOnInsertion(SharedReadyQueue, v5);
            v32 = 1;
            if ( KiForceParkingConfiguration )
            {
              IdleState = a1->IdleState;
              if ( (IdleState & 0x20) != 0 && !(unsigned __int8)KiIsThreadExemptFromForcePark(v5) )
              {
                if ( (IdleState & 0x10) == 0
                  || ((SchedulerSubNode = a1->SchedulerSubNode, !v48)
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
            }
            if ( (KiVelocityFlags & 0x200000) == 0 )
            {
              _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
              goto LABEL_150;
            }
            _m_prefetchw(&v78);
            v52 = v78;
            if ( !(_QWORD)v78 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v78 + 1),
                                 0LL,
                                 (signed __int64)&v78) == &v78 )
                goto LABEL_150;
              v52 = KxWaitForLockChainValid(&v78);
            }
            *(_QWORD *)&v78 = 0LL;
            v53 = *((_QWORD *)&v78 + 1);
            if ( (((unsigned __int8)v53 ^ (unsigned __int8)_InterlockedExchange64(
                                                             (volatile __int64 *)(v52 + 8),
                                                             *((__int64 *)&v78 + 1))) & 4) != 0 )
              KeWakeAddressAll(v52 + 8, v53, v46, IdleState);
            goto LABEL_150;
          }
        }
LABEL_119:
        __fastfail(3u);
      }
    }
    v54 = (struct _LIST_ENTRY *)(v5 + 216);
    v55 = &a1->DispatcherReadyListHead[v33];
    if ( v82 )
    {
      v56 = v55->Flink;
      if ( v55->Flink->Blink != v55 )
        goto LABEL_119;
      v54->Flink = v56;
      *(_QWORD *)(v5 + 224) = v55;
      v56->Blink = v54;
      v55->Flink = v54;
      _bittestandset(&a1->AffinitizedSelectionMask, v33);
    }
    else
    {
      v57 = v55->Blink;
      if ( v57->Flink != v55 )
        goto LABEL_119;
      v54->Flink = v55;
      *(_QWORD *)(v5 + 224) = v57;
      v57->Flink = v54;
      v55->Blink = v54;
    }
    ReadySummary = a1->ReadySummary;
    v59 = ++a1->ReadyThreadCount == 1;
    a1->ReadySummary = ReadySummary | (1 << v33);
    if ( v59 && !a1->ScbQueue.Root )
      _InterlockedOr64((volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues, a1->GroupSetMember);
    v60 = *(unsigned int *)(v5 + 84);
    *(_DWORD *)(v5 + 1784) = v60;
    v61 = a1->SharedReadyQueue;
    a1->ReadyQueueExpectedRunTime += v60;
    KiUpdateSoftParkElectionStatisticsOnInsertion(v61, v5);
    if ( !KiForceParkingConfiguration
      || (a1->IdleState & 0x20) == 0
      || (unsigned __int8)KiIsThreadExemptFromForcePark(v5)
      || (v64 = a1->ForceParkDutyCycleData, v65 = a1->SharedReadyQueue, v64->CurrentState) )
    {
LABEL_149:
      v32 = 0;
      goto LABEL_150;
    }
    if ( v65 )
    {
      v79 = 0LL;
      if ( (KiVelocityFlags & 0x200000) != 0 )
      {
        *((_QWORD *)&v79 + 1) = v65;
        *(_QWORD *)&v79 = 0LL;
        v66 = _InterlockedExchange64((volatile __int64 *)v65, (__int64)&v79);
        if ( v66 )
          KxWaitForLockOwnerShip(&v79, v66);
      }
      else
      {
        v67 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v65, 0LL) )
        {
          do
          {
            if ( (++v67 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v67);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v65->Lock );
        }
      }
      v59 = (KiVelocityFlags & 0x200000) == 0;
      v65->ForceParkDutyCyclingArmedMask |= a1->GroupSetMember;
      if ( v59 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v65, 0LL);
      }
      else
      {
        _m_prefetchw(&v79);
        v68 = v79;
        if ( (_QWORD)v79 )
          goto LABEL_145;
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v79 + 1),
                           0LL,
                           (signed __int64)&v79) != &v79 )
        {
          v68 = KxWaitForLockChainValid(&v79);
LABEL_145:
          *(_QWORD *)&v79 = 0LL;
          v69 = *((_QWORD *)&v79 + 1);
          if ( (((unsigned __int8)v69 ^ (unsigned __int8)_InterlockedExchange64(
                                                           (volatile __int64 *)(v68 + 8),
                                                           *((__int64 *)&v79 + 1))) & 4) != 0 )
            KeWakeAddressAll(v68 + 8, v69, v62, v63);
        }
      }
    }
    v64->CurrentState = KiForceParkDutyCycleArmed;
    v64->DpcTransition = KiForceParkDutyCycleTransitionArm;
    KiInsertQueueDpc((ULONG_PTR)v64, 0LL, 0LL, 0LL, 0);
    goto LABEL_149;
  }
  NextThread = a1->NextThread;
  KiEnterDeferredReadyState(v5);
  KiReleasePrcbLocksForIsolationUnit(v4);
  KiProcessScbTracingList(a1, &v77);
  _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 0xCu);
  *(_BYTE *)(v5 + 565) = v82;
  result = (_KTHREAD *)KiDeferredReadyThread(a1, v5, 0LL);
  if ( !NextThread )
  {
    result = a1->IdleThread;
    if ( a1->CurrentThread != result )
    {
      if ( a1->NextThread )
      {
        LOBYTE(v72) = 2;
        result = (_KTHREAD *)KiRequestSoftwareInterrupt(a1, v72);
      }
    }
  }
LABEL_158:
  if ( v74 )
  {
    v73 = *(_DWORD *)(v5 + 116) >> 3;
    LOBYTE(v73) = (*(_DWORD *)(v5 + 116) & 8) != 0;
    result = (_KTHREAD *)EtwTraceThreadAffinity(
                           v5,
                           *(unsigned __int16 *)(v5 + 584),
                           v73,
                           0,
                           *(_QWORD *)(v5 + 576),
                           1334);
  }
  if ( v76 != v75 && (xmmword_140FC6B50 & 0x8000000) != 0 )
    return (_KTHREAD *)EtwTraceIdealProcessor(v5, 1350LL);
  return result;
}
