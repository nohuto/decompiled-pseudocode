/*
 * XREFs of KiQueueReadyThread @ 0x140295020
 * Callers:
 *     KiDispatchInterrupt @ 0x1402936B0 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254310 (KiInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRequestSoftwareInterrupt @ 0x140297BA0 (KiRequestSoftwareInterrupt.c)
 *     KiShouldPreemptionBeDeferred @ 0x140299C60 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckThreadAffinity @ 0x140299C80 (KiCheckThreadAffinity.c)
 *     KiIsThreadExemptFromForcePark @ 0x14029AB9C (KiIsThreadExemptFromForcePark.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x14029ABF0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14029AC10 (KiCheckForMaxOverQuotaScb.c)
 *     KiComputeThreadAffinity @ 0x14029AC34 (KiComputeThreadAffinity.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14030C9D4 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x14030E6D0 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KiAddThreadToScbQueue @ 0x14030EA24 (KiAddThreadToScbQueue.c)
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x14030EB30 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiQueryQuantumReset @ 0x1403241CC (KiQueryQuantumReset.c)
 *     KiEnterDeferredReadyState @ 0x140337910 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x1403386A0 (KiDeferredReadyThread.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140339330 (KiReleasePrcbLocksForIsolationUnit.c)
 *     EtwTraceReadyQueueInsertion @ 0x14034A55C (EtwTraceReadyQueueInsertion.c)
 *     EtwTraceThreadAffinity @ 0x1403B3E48 (EtwTraceThreadAffinity.c)
 *     KiCheckPrcbAffinityEx @ 0x1403B44C0 (KiCheckPrcbAffinityEx.c)
 *     KiUpdateThreadPriority @ 0x140429720 (KiUpdateThreadPriority.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14042B760 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x14044F938 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x1404513FC (-KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z.c)
 *     KiProcessScbTracingList @ 0x1404540D4 (KiProcessScbTracingList.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14046FED0 (KiTryScheduleNextForegroundBoost.c)
 *     EtwTraceIdealProcessor @ 0x1404B1DCC (EtwTraceIdealProcessor.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404E6D30 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1404EA2E0 (KiComputeNewPriority.c)
 */

_KTHREAD *__fastcall KiQueueReadyThread(struct _KPRCB *a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  ULONG_PTR v5; // rsi
  int v6; // edx
  int v8; // edi
  int v9; // edx
  unsigned __int64 v10; // rcx
  struct _KSCHEDULING_GROUP *v11; // r14
  int v12; // r13d
  struct _SINGLE_LIST_ENTRY *p_TracingListEntry; // rbx
  struct _KSCB *i; // rdi
  __int16 v15; // r12
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  _WORD *v18; // rcx
  __int64 Group; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _KSCB *v22; // r10
  _BYTE *SchedulerAssist; // rax
  char v24; // bl
  int v25; // eax
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // r9d
  __int64 v30; // r11
  unsigned int v31; // ebx
  __int64 v32; // r12
  unsigned __int64 SharedReadyQueueMask; // rdx
  _WORD *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdi
  _LIST_ENTRY *v38; // r14
  struct _LIST_ENTRY *v39; // rax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v41; // ebx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 IdleState; // r9
  int v46; // r10d
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rax
  unsigned __int64 NonParkedSet; // rax
  _KFORCE_PARK_DUTY_CYCLE_DATA *ForceParkDutyCycleData; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  struct _LIST_ENTRY *v52; // rcx
  _LIST_ENTRY *v53; // rax
  struct _LIST_ENTRY *v54; // rdx
  struct _LIST_ENTRY *v55; // rdx
  unsigned int ReadySummary; // eax
  bool v57; // zf
  __int64 v58; // rax
  _KSHARED_READY_QUEUE *v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _KFORCE_PARK_DUTY_CYCLE_DATA *v62; // r14
  _KSHARED_READY_QUEUE *v63; // rdi
  unsigned int v64; // ebx
  __int64 v65; // rax
  __int64 v66; // rdx
  _KTHREAD *result; // rax
  _KTHREAD *NextThread; // rbx
  __int64 v69; // rdx
  int v70; // r8d
  bool v71; // [rsp+30h] [rbp-40h]
  int v72; // [rsp+34h] [rbp-3Ch]
  int v73; // [rsp+38h] [rbp-38h]
  struct _SINGLE_LIST_ENTRY *v74; // [rsp+40h] [rbp-30h] BYREF
  __int128 v75; // [rsp+48h] [rbp-28h] BYREF
  __int128 v76; // [rsp+58h] [rbp-18h] BYREF
  int v79; // [rsp+C8h] [rbp+58h]

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
        v8 = KiComputeNewPriority((struct _KTHREAD *)a3);
        if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(v5) )
          KiUpdateThreadPriority(0, v9, v5, v8, 0);
        v10 = v3 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v5);
        if ( (*(_DWORD *)(v5 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 5u);
        *(_QWORD *)(v5 + 32) = v10;
        KiTryScheduleNextForegroundBoost(v5);
        v79 = 0;
      }
      if ( !(unsigned int)KiCheckThreadAffinity(v5) && (unsigned int)KiComputeThreadAffinity() )
      {
        if ( !(unsigned __int8)KiCheckPrcbAffinityEx(*(_QWORD *)(v5 + 576), a1) )
          _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0xCu);
        v71 = (WORD2(PerfGlobalGroupMask) & 0x1000) != 0;
      }
      v72 = *(_DWORD *)(v5 + 588);
      *(_QWORD *)(v5 + 64) = 0LL;
    }
  }
  v11 = *(struct _KSCHEDULING_GROUP **)(v5 + 104);
  if ( v11 )
  {
    v12 = 0;
    p_TracingListEntry = v74;
    for ( i = (struct _KSCB *)((char *)v11 + a1->ScbOffset);
          ;
          v11 = (struct _KSCHEDULING_GROUP *)((char *)i - a1->ScbOffset) )
    {
      LODWORD(v74) = i->Rank;
      v15 = i->PrcbLockFlags & 2;
      if ( (i->PrcbLockFlags & 4) != 0 )
      {
        if ( KiCheckMaxOverQuotaTransition(i, v11) )
        {
          if ( (*(_BYTE *)&i->0 & 1) != 0 )
            KiRemoveSchedulingGroupQueue(a1, i, 1u);
        }
        else if ( i->GenerationCycles >= i->RankCycleTarget && (*(_BYTE *)&i->0 & 2) == 0 )
        {
          KiRecomputeGroupSchedulingRank(v11, i, a1);
        }
      }
      else
      {
        KiComputeGroupSchedulingRank(v11, a1, (union _KISOLATION_UNIT_LOCK_HANDLE *)a3, i);
      }
      if ( (WORD2(xmmword_140FC5B10) & 0x4000) != 0
        && ((_DWORD)v74 != i->Rank || (v15 != 0) != ((i->PrcbLockFlags >> 1) & 1)) )
      {
        i->TracingListEntry.Next = p_TracingListEntry;
        i->PrcbLockFlags |= 0x100u;
        p_TracingListEntry = &i->TracingListEntry;
      }
      v12 += i->Rank;
      i = i->Parent;
      if ( !i )
        break;
    }
    v5 = a3;
    v74 = p_TracingListEntry;
    if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(a3)
      && (unsigned __int8)((__int64 (*)(void))KiShouldPreemptionBeDeferred)()
      && v12 )
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
  v16 = 0LL;
  if ( *(char *)(v5 + 195) >= KiRebalanceMinPriority || (a1->IdleState & 0x10) != 0 )
  {
    v17 = *(_QWORD *)(v5 + 104);
    if ( !v17 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v17 + a1->ScbOffset, 0LL) )
    {
      v18 = *(_WORD **)(v5 + 576);
      Group = a1->Group;
      if ( (unsigned __int16)Group >= *v18 )
        v20 = 0LL;
      else
        v20 = *(_QWORD *)&v18[4 * Group + 4];
      v16 = v20 & a1->SchedulerSubNode->IdleNonParkedCpuSet;
    }
  }
  if ( (*(_DWORD *)(v5 + 120) & 0x1000) == 0 && !v16 )
  {
    *(_BYTE *)(v5 + 565) = 0;
    *(_DWORD *)(v5 + 436) = MEMORY[0xFFFFF78000000320];
    v21 = *(_QWORD *)(v5 + 104);
    if ( v21 )
      v22 = (struct _KSCB *)(v21 + a1->ScbOffset);
    else
      v22 = 0LL;
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[16] = 0;
    v24 = 0;
    *(_BYTE *)(v5 + 388) = 1;
    if ( v22 )
    {
      v25 = *(_DWORD *)(v5 + 120);
      if ( (v25 & 0xC00) == 0 )
      {
        v26 = 0;
        if ( *(char *)(v5 + 195) < 16
          && (v25 & 0x200) == 0
          && !(unsigned __int8)KiShouldPreemptionBeDeferred(v5, v22, 0LL, 0LL) )
        {
          if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v22, v27) )
          {
            v26 = -1;
          }
          else
          {
            do
            {
              v26 += *(_DWORD *)(v28 + 124);
              if ( v30 )
              {
                v29 += **(_DWORD **)(v28 + 128);
              }
              else if ( v26 )
              {
                break;
              }
              v28 = *(_QWORD *)(v28 + 416);
            }
            while ( v28 );
            if ( v29 )
              v24 = 1;
          }
        }
        if ( v26 )
        {
          KiAddThreadToScbQueue(a1, v22);
          v31 = 2;
LABEL_150:
          if ( (WORD2(xmmword_140FC5B10) & 0x800) != 0 )
          {
            _InterlockedIncrement16((volatile signed __int16 *)(v5 + 868));
            KiReleasePrcbLocksForIsolationUnit(v4);
            EtwTraceReadyQueueInsertion(v5, a1->Number, v31, 0LL);
            _InterlockedDecrement16((volatile signed __int16 *)(v5 + 868));
          }
          else
          {
            KiReleasePrcbLocksForIsolationUnit(v4);
          }
          result = (_KTHREAD *)KiProcessScbTracingList(a1, &v74);
          goto LABEL_158;
        }
      }
    }
    v32 = *(char *)(v5 + 195);
    if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
      _InterlockedOr(*(volatile signed __int32 **)(v5 + 968), 0x40000u);
    KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(v5);
    SharedReadyQueueMask = a1->SharedReadyQueueMask;
    if ( (*(_DWORD *)(v5 + 120) & 0x2000) != 0 && SharedReadyQueueMask )
    {
      v34 = *(_WORD **)(v5 + 576);
      v35 = a1->Group;
      v36 = (unsigned __int16)v35 >= *v34 ? 0LL : *(_QWORD *)&v34[4 * v35 + 4];
      if ( (SharedReadyQueueMask & v36) == SharedReadyQueueMask && !v24 )
      {
        SharedReadyQueue = a1->SharedReadyQueue;
        v38 = &SharedReadyQueue->ReadyListHead[v32];
        v75 = 0LL;
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          *((_QWORD *)&v75 + 1) = SharedReadyQueue;
          *(_QWORD *)&v75 = 0LL;
          if ( _InterlockedExchange64((volatile __int64 *)SharedReadyQueue, (__int64)&v75) )
            KxWaitForLockOwnerShip(&v75);
        }
        else
        {
          v41 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
          {
            do
            {
              if ( (++v41 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v41);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( SharedReadyQueue->Lock );
          }
        }
        v39 = (struct _LIST_ENTRY *)(v5 + 216);
        if ( v79 )
        {
          Flink = v38->Flink;
          if ( v38->Flink->Blink == v38 )
          {
            v39->Flink = Flink;
            *(_QWORD *)(v5 + 224) = v38;
            Flink->Blink = v39;
            v38->Flink = v39;
            _bittestandreset(&a1->AffinitizedSelectionMask, v32);
            goto LABEL_96;
          }
        }
        else
        {
          Blink = v38->Blink;
          if ( Blink->Flink == v38 )
          {
            v39->Flink = v38;
            *(_QWORD *)(v5 + 224) = Blink;
            Blink->Flink = v39;
            v38->Blink = v39;
LABEL_96:
            SharedReadyQueue->ReadySummary |= 1 << v32;
            *(_DWORD *)(v5 + 536) |= 0x80000000;
            if ( ++SharedReadyQueue->ReadyThreadCount == 1 )
              _InterlockedOr64(
                (volatile signed __int64 *)&SharedReadyQueue->SubNode->StealableSharedReadyQueues,
                SharedReadyQueue->Affinity);
            v43 = *(unsigned int *)(v5 + 84);
            *(_DWORD *)(v5 + 1784) = v43;
            SharedReadyQueue->ReadyQueueExpectedRunTime += v43;
            KiUpdateSoftParkElectionStatisticsOnInsertion(SharedReadyQueue, v5);
            v31 = 1;
            if ( KiForceParkingConfiguration )
            {
              IdleState = a1->IdleState;
              if ( (IdleState & 0x20) != 0 && !(unsigned __int8)KiIsThreadExemptFromForcePark(v5) )
              {
                if ( (IdleState & 0x10) == 0
                  || ((SchedulerSubNode = a1->SchedulerSubNode, !v46)
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
            _m_prefetchw(&v75);
            v50 = v75;
            if ( !(_QWORD)v75 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v75 + 1),
                                 0LL,
                                 (signed __int64)&v75) == &v75 )
                goto LABEL_150;
              v50 = KxWaitForLockChainValid(&v75);
            }
            *(_QWORD *)&v75 = 0LL;
            v51 = *((_QWORD *)&v75 + 1);
            if ( (((unsigned __int8)v51 ^ (unsigned __int8)_InterlockedExchange64(
                                                             (volatile __int64 *)(v50 + 8),
                                                             *((__int64 *)&v75 + 1))) & 4) != 0 )
              KeWakeAddressAll(v50 + 8, v51, v44, IdleState);
            goto LABEL_150;
          }
        }
LABEL_119:
        __fastfail(3u);
      }
    }
    v52 = (struct _LIST_ENTRY *)(v5 + 216);
    v53 = &a1->DispatcherReadyListHead[v32];
    if ( v79 )
    {
      v54 = v53->Flink;
      if ( v53->Flink->Blink != v53 )
        goto LABEL_119;
      v52->Flink = v54;
      *(_QWORD *)(v5 + 224) = v53;
      v54->Blink = v52;
      v53->Flink = v52;
      _bittestandset(&a1->AffinitizedSelectionMask, v32);
    }
    else
    {
      v55 = v53->Blink;
      if ( v55->Flink != v53 )
        goto LABEL_119;
      v52->Flink = v53;
      *(_QWORD *)(v5 + 224) = v55;
      v55->Flink = v52;
      v53->Blink = v52;
    }
    ReadySummary = a1->ReadySummary;
    v57 = ++a1->ReadyThreadCount == 1;
    a1->ReadySummary = ReadySummary | (1 << v32);
    if ( v57 && !a1->ScbQueue.Root )
      _InterlockedOr64((volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues, a1->GroupSetMember);
    v58 = *(unsigned int *)(v5 + 84);
    *(_DWORD *)(v5 + 1784) = v58;
    v59 = a1->SharedReadyQueue;
    a1->ReadyQueueExpectedRunTime += v58;
    KiUpdateSoftParkElectionStatisticsOnInsertion(v59, v5);
    if ( !KiForceParkingConfiguration
      || (a1->IdleState & 0x20) == 0
      || (unsigned __int8)KiIsThreadExemptFromForcePark(v5)
      || (v62 = a1->ForceParkDutyCycleData, v63 = a1->SharedReadyQueue, v62->CurrentState) )
    {
LABEL_149:
      v31 = 0;
      goto LABEL_150;
    }
    if ( v63 )
    {
      v76 = 0LL;
      if ( (KiVelocityFlags & 0x200000) != 0 )
      {
        *((_QWORD *)&v76 + 1) = v63;
        *(_QWORD *)&v76 = 0LL;
        if ( _InterlockedExchange64((volatile __int64 *)v63, (__int64)&v76) )
          KxWaitForLockOwnerShip(&v76);
      }
      else
      {
        v64 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v63, 0LL) )
        {
          do
          {
            if ( (++v64 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v64);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v63->Lock );
        }
      }
      v57 = (KiVelocityFlags & 0x200000) == 0;
      v63->ForceParkDutyCyclingArmedMask |= a1->GroupSetMember;
      if ( v57 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v63, 0LL);
      }
      else
      {
        _m_prefetchw(&v76);
        v65 = v76;
        if ( (_QWORD)v76 )
          goto LABEL_145;
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v76 + 1),
                           0LL,
                           (signed __int64)&v76) != &v76 )
        {
          v65 = KxWaitForLockChainValid(&v76);
LABEL_145:
          *(_QWORD *)&v76 = 0LL;
          v66 = *((_QWORD *)&v76 + 1);
          if ( (((unsigned __int8)v66 ^ (unsigned __int8)_InterlockedExchange64(
                                                           (volatile __int64 *)(v65 + 8),
                                                           *((__int64 *)&v76 + 1))) & 4) != 0 )
            KeWakeAddressAll(v65 + 8, v66, v60, v61);
        }
      }
    }
    v62->CurrentState = KiForceParkDutyCycleArmed;
    v62->DpcTransition = KiForceParkDutyCycleTransitionArm;
    KiInsertQueueDpc((ULONG_PTR)v62, 0LL, 0LL, 0LL, 0);
    goto LABEL_149;
  }
  NextThread = a1->NextThread;
  KiEnterDeferredReadyState(v5);
  KiReleasePrcbLocksForIsolationUnit(v4);
  KiProcessScbTracingList(a1, &v74);
  _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 0xCu);
  *(_BYTE *)(v5 + 565) = v79;
  result = (_KTHREAD *)KiDeferredReadyThread(a1, v5, 0LL);
  if ( !NextThread )
  {
    result = a1->IdleThread;
    if ( a1->CurrentThread != result )
    {
      if ( a1->NextThread )
      {
        LOBYTE(v69) = 2;
        result = (_KTHREAD *)KiRequestSoftwareInterrupt(a1, v69);
      }
    }
  }
LABEL_158:
  if ( v71 )
  {
    v70 = *(_DWORD *)(v5 + 116) >> 3;
    LOBYTE(v70) = (*(_DWORD *)(v5 + 116) & 8) != 0;
    result = (_KTHREAD *)EtwTraceThreadAffinity(
                           v5,
                           *(unsigned __int16 *)(v5 + 584),
                           v70,
                           0,
                           *(_QWORD *)(v5 + 576),
                           1334);
  }
  if ( v73 != v72 && (xmmword_140FC5B10 & 0x8000000) != 0 )
    return (_KTHREAD *)EtwTraceIdealProcessor(v5, 1350LL);
  return result;
}
