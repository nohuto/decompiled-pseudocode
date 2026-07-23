/*
 * XREFs of KiAddThreadToReadyQueue @ 0x1403E7AA0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiIsThreadExemptFromForcePark @ 0x1402A968C (KiIsThreadExemptFromForcePark.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiAddThreadToScbQueue @ 0x1402D847C (KiAddThreadToScbQueue.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402D8644 (KiReadGuestSchedulerAssistPriority.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14041E2F0 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 */

int *__fastcall KiAddThreadToReadyQueue(struct _KPRCB *a1, struct _KSCB *a2, __int64 a3, char a4, int a5, int *a6)
{
  struct _KSCB *v7; // r10
  bool v9; // r15
  __int64 v10; // rax
  _BYTE *SchedulerAssist; // rax
  char v12; // r14
  int v13; // eax
  struct _KSCB *v14; // rcx
  int v15; // r8d
  int v16; // r9d
  struct _KSCB *v17; // rdx
  int *result; // rax
  __int64 v19; // r12
  _DWORD *v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  unsigned __int64 SharedReadyQueueMask; // rdx
  _WORD *v24; // rcx
  __int64 Group; // rax
  __int64 v26; // rcx
  _KSHARED_READY_QUEUE *v27; // rdi
  _LIST_ENTRY *v28; // r14
  _QWORD *v29; // rdx
  struct _LIST_ENTRY *v30; // rax
  struct _LIST_ENTRY *v31; // rcx
  unsigned int v32; // ebx
  struct _LIST_ENTRY *v33; // rcx
  __int64 v34; // rax
  int v35; // ebx
  char v36; // r9
  int v37; // r10d
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rax
  unsigned __int64 NonParkedSet; // rax
  _KFORCE_PARK_DUTY_CYCLE_DATA *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  struct _LIST_ENTRY *v43; // rcx
  _LIST_ENTRY *v44; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rdx
  unsigned int ReadySummary; // eax
  bool v48; // zf
  __int64 v49; // rax
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  _KFORCE_PARK_DUTY_CYCLE_DATA *ForceParkDutyCycleData; // rsi
  _KSHARED_READY_QUEUE *v52; // rdi
  _QWORD *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned int v56; // ebx
  __int128 v57; // [rsp+30h] [rbp-20h] BYREF
  __int128 v58; // [rsp+40h] [rbp-10h] BYREF

  v7 = a2;
  if ( !a4 )
    *(_DWORD *)(a3 + 436) = MEMORY[0xFFFFF78000000320];
  v9 = 0;
  if ( !a2 )
  {
    v10 = *(_QWORD *)(a3 + 104);
    if ( v10 )
      v7 = (struct _KSCB *)(v10 + a1->ScbOffset);
    else
      v7 = 0LL;
  }
  SchedulerAssist = a1->SchedulerAssist;
  if ( SchedulerAssist )
    SchedulerAssist[16] = 0;
  v12 = 0;
  *(_BYTE *)(a3 + 388) = 1;
  if ( v7 )
  {
    v13 = *(_DWORD *)(a3 + 120);
    if ( (v13 & 0xC00) == 0 )
    {
      v14 = v7;
      v15 = 0;
      v16 = 0;
      if ( *(char *)(a3 + 195) < 16 && (v13 & 0x200) == 0 && !*(_DWORD *)(a3 + 484) && *(_BYTE *)(a3 + 390) != 1 )
      {
        v17 = v7;
        do
        {
          if ( (*(_BYTE *)&v17->0 & 2) != 0 )
          {
            v15 = -1;
            goto LABEL_25;
          }
          v17 = v17->Parent;
        }
        while ( v17 );
        do
        {
          v15 += v14->Rank;
          if ( v7->ShareRank )
          {
            v16 += *v14->ShareRank;
          }
          else if ( v15 )
          {
            break;
          }
          v14 = v14->Parent;
        }
        while ( v14 );
        if ( v16 )
          v12 = 1;
      }
LABEL_25:
      if ( v15 )
      {
        KiAddThreadToScbQueue(a1, v7, a3, a5);
        result = a6;
        *a6 = 2;
        return result;
      }
    }
  }
  v19 = *(char *)(a3 + 195);
  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(a3 + 968), 0x40000u);
  v20 = (_DWORD *)(a3 + 120);
  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
  {
    v20 = (_DWORD *)(a3 + 120);
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a3, 0LL) != *(_DWORD *)(a3 + 1024) )
    {
      KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
      v21 = (_QWORD *)(a3 + 1008);
      v20 = (_DWORD *)(a3 + 120);
      if ( *(_QWORD *)(a3 + 1008) == 1LL )
      {
        v22 = (_QWORD *)qword_140F22508;
        v9 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140F22508 != &KiUpdateVpThreadPriorityListHead )
          goto LABEL_83;
        *v21 = &KiUpdateVpThreadPriorityListHead;
        v20 = (_DWORD *)(a3 + 120);
        *(_QWORD *)(a3 + 1016) = v22;
        *v22 = v21;
        qword_140F22508 = a3 + 1008;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiUpdateVpThreadPriorityLock);
      if ( v9 )
        KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
    }
  }
  SharedReadyQueueMask = a1->SharedReadyQueueMask;
  if ( (*v20 & 0x2000) == 0
    || !SharedReadyQueueMask
    || ((v24 = *(_WORD **)(a3 + 576), Group = a1->Group, (unsigned __int16)Group >= *v24)
      ? (v26 = 0LL)
      : (v26 = *(_QWORD *)&v24[4 * Group + 4]),
        (SharedReadyQueueMask & v26) != SharedReadyQueueMask || v12) )
  {
    v43 = (struct _LIST_ENTRY *)(a3 + 216);
    v44 = &a1->DispatcherReadyListHead[v19];
    if ( a5 )
    {
      Flink = v44->Flink;
      if ( v44->Flink->Blink != v44 )
        goto LABEL_83;
      v43->Flink = Flink;
      *(_QWORD *)(a3 + 224) = v44;
      Flink->Blink = v43;
      v44->Flink = v43;
      _bittestandset(&a1->AffinitizedSelectionMask, v19);
    }
    else
    {
      Blink = v44->Blink;
      if ( Blink->Flink != v44 )
        goto LABEL_83;
      v43->Flink = v44;
      *(_QWORD *)(a3 + 224) = Blink;
      Blink->Flink = v43;
      v44->Blink = v43;
    }
    ReadySummary = a1->ReadySummary;
    v48 = ++a1->ReadyThreadCount == 1;
    a1->ReadySummary = ReadySummary | (1 << v19);
    if ( v48 && !a1->ScbQueue.Root )
      _InterlockedOr64((volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues, a1->GroupSetMember);
    v49 = *(unsigned int *)(a3 + 84);
    *(_DWORD *)(a3 + 1784) = v49;
    SharedReadyQueue = a1->SharedReadyQueue;
    a1->ReadyQueueExpectedRunTime += v49;
    KiUpdateSoftParkElectionStatisticsOnInsertion(SharedReadyQueue, a3);
    if ( !KiForceParkingConfiguration
      || (a1->IdleState & 0x20) == 0
      || KiIsThreadExemptFromForcePark(a3)
      || (ForceParkDutyCycleData = a1->ForceParkDutyCycleData,
          v52 = a1->SharedReadyQueue,
          ForceParkDutyCycleData->CurrentState) )
    {
LABEL_113:
      v35 = 0;
      goto LABEL_114;
    }
    if ( v52 )
    {
      v58 = 0LL;
      if ( (KiVelocityFlags & 0x200000) != 0 )
      {
        *((_QWORD *)&v58 + 1) = v52;
        *(_QWORD *)&v58 = 0LL;
        v53 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v52, (__int64)&v58);
        if ( v53 )
          KxWaitForLockOwnerShip((__int64)&v58, v53);
      }
      else
      {
        v56 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v52, 0LL) )
        {
          do
          {
            if ( (++v56 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v56);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v52->Lock );
        }
      }
      v48 = (KiVelocityFlags & 0x200000) == 0;
      v52->ForceParkDutyCyclingArmedMask |= a1->GroupSetMember;
      if ( v48 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v52, 0LL);
      }
      else
      {
        _m_prefetchw(&v58);
        v54 = v58;
        if ( (_QWORD)v58 )
          goto LABEL_100;
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v58 + 1),
                           0LL,
                           (signed __int64)&v58) != &v58 )
        {
          v54 = KxWaitForLockChainValid((__int64 *)&v58);
LABEL_100:
          *(_QWORD *)&v58 = 0LL;
          v55 = *((_QWORD *)&v58 + 1);
          if ( (((unsigned __int8)v55 ^ (unsigned __int8)_InterlockedExchange64(
                                                           (volatile __int64 *)(v54 + 8),
                                                           *((__int64 *)&v58 + 1))) & 4) != 0 )
            KeWakeAddressAll(v54 + 8, v55);
        }
      }
    }
    ForceParkDutyCycleData->CurrentState = KiForceParkDutyCycleArmed;
    ForceParkDutyCycleData->DpcTransition = KiForceParkDutyCycleTransitionArm;
    KiInsertQueueDpc((ULONG_PTR)ForceParkDutyCycleData, 0LL, 0LL, 0LL, 0);
    goto LABEL_113;
  }
  v27 = a1->SharedReadyQueue;
  v28 = &v27->ReadyListHead[v19];
  v57 = 0LL;
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    *((_QWORD *)&v57 + 1) = v27;
    *(_QWORD *)&v57 = 0LL;
    v29 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v27, (__int64)&v57);
    if ( v29 )
      KxWaitForLockOwnerShip((__int64)&v57, v29);
  }
  else
  {
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
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
      while ( v27->Lock );
    }
  }
  v30 = (struct _LIST_ENTRY *)(a3 + 216);
  if ( a5 )
  {
    v31 = v28->Flink;
    if ( v28->Flink->Blink == v28 )
    {
      v30->Flink = v31;
      *(_QWORD *)(a3 + 224) = v28;
      v31->Blink = v30;
      v28->Flink = v30;
      _bittestandreset(&a1->AffinitizedSelectionMask, v19);
      goto LABEL_60;
    }
LABEL_83:
    __fastfail(3u);
  }
  v33 = v28->Blink;
  if ( v33->Flink != v28 )
    goto LABEL_83;
  v30->Flink = v28;
  *(_QWORD *)(a3 + 224) = v33;
  v33->Flink = v30;
  v28->Blink = v30;
LABEL_60:
  v27->ReadySummary |= 1 << v19;
  *(_DWORD *)(a3 + 536) |= 0x80000000;
  if ( ++v27->ReadyThreadCount == 1 )
    _InterlockedOr64((volatile signed __int64 *)&v27->SubNode->StealableSharedReadyQueues, v27->Affinity);
  v34 = *(unsigned int *)(a3 + 84);
  *(_DWORD *)(a3 + 1784) = v34;
  v27->ReadyQueueExpectedRunTime += v34;
  KiUpdateSoftParkElectionStatisticsOnInsertion(v27, a3);
  v35 = 1;
  if ( KiForceParkingConfiguration && (a1->IdleState & 0x20) != 0 && !KiIsThreadExemptFromForcePark(a3) )
  {
    if ( (v36 & 0x10) == 0
      || ((SchedulerSubNode = a1->SchedulerSubNode, !v37)
        ? (NonParkedSet = SchedulerSubNode->NonParkedSet)
        : (NonParkedSet = ~SchedulerSubNode->ForceParkRequestSet),
          (NonParkedSet & v27->Affinity) == 0) )
    {
      if ( !v27->ForceParkDutyCyclingArmedMask )
      {
        v27->ForceParkDutyCyclingArmedMask |= a1->GroupSetMember;
        v40 = a1->ForceParkDutyCycleData;
        v40->CurrentState = KiForceParkDutyCycleArmed;
        v40->DpcTransition = KiForceParkDutyCycleTransitionArm;
        KiInsertQueueDpc((ULONG_PTR)v40, 0LL, 0LL, 0LL, 0);
      }
    }
  }
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    _m_prefetchw(&v57);
    v41 = v57;
    if ( (_QWORD)v57 )
      goto LABEL_76;
    if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v57 + 1), 0LL, (signed __int64)&v57) != &v57 )
    {
      v41 = KxWaitForLockChainValid((__int64 *)&v57);
LABEL_76:
      *(_QWORD *)&v57 = 0LL;
      v42 = *((_QWORD *)&v57 + 1);
      if ( (((unsigned __int8)v42 ^ (unsigned __int8)_InterlockedExchange64(
                                                       (volatile __int64 *)(v41 + 8),
                                                       *((__int64 *)&v57 + 1))) & 4) != 0 )
        KeWakeAddressAll(v41 + 8, v42);
    }
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
  }
LABEL_114:
  result = a6;
  *a6 = v35;
  return result;
}
