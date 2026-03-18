/*
 * XREFs of KiAddThreadToReadyQueue @ 0x1403EFA70
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueDpc @ 0x140252DA0 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x140313A60 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 *     KiIsThreadExemptFromForcePark @ 0x14031888C (KiIsThreadExemptFromForcePark.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiAddThreadToScbQueue @ 0x140430214 (KiAddThreadToScbQueue.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1404303E4 (KiReadGuestSchedulerAssistPriority.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
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
  __int64 v27; // rdi
  _QWORD *v28; // r14
  struct _KPRCB **v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  int v32; // ebx
  __int64 v33; // rax
  int v34; // ebx
  char v35; // r9
  int v36; // r10d
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rax
  unsigned __int64 NonParkedSet; // rax
  ULONG_PTR v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  struct _LIST_ENTRY *v42; // rcx
  _LIST_ENTRY *v43; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rdx
  int v46; // eax
  __int64 v47; // rax
  __int64 SharedReadyQueue; // rcx
  ULONG_PTR ForceParkDutyCycleData; // rsi
  _KSHARED_READY_QUEUE *v50; // rdi
  struct _KPRCB **v51; // rdx
  bool v52; // zf
  __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // ebx
  __int128 v56; // [rsp+30h] [rbp-20h] BYREF
  __int128 v57; // [rsp+40h] [rbp-10h] BYREF

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
        KiAddThreadToScbQueue(a1, v7);
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
        v22 = (_QWORD *)qword_140F21B28;
        v9 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140F21B28 != &KiUpdateVpThreadPriorityListHead )
          goto LABEL_84;
        *v21 = &KiUpdateVpThreadPriorityListHead;
        v20 = (_DWORD *)(a3 + 120);
        *(_QWORD *)(a3 + 1016) = v22;
        *v22 = v21;
        qword_140F21B28 = a3 + 1008;
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
    v42 = (struct _LIST_ENTRY *)(a3 + 216);
    v43 = &a1->DispatcherReadyListHead[v19];
    if ( a5 )
    {
      Flink = v43->Flink;
      if ( v43->Flink->Blink != v43 )
        goto LABEL_84;
      v42->Flink = Flink;
      *(_QWORD *)(a3 + 224) = v43;
      Flink->Blink = v42;
      v43->Flink = v42;
      _bittestandset(&a1->AffinitizedSelectionMask, v19);
    }
    else
    {
      Blink = v43->Blink;
      if ( Blink->Flink != v43 )
        goto LABEL_84;
      v42->Flink = v43;
      *(_QWORD *)(a3 + 224) = Blink;
      Blink->Flink = v42;
      v43->Blink = v42;
    }
    v46 = a1->ReadySummary | (1 << v19);
    ++a1->ReadyThreadCount;
    a1->ReadySummary = v46;
    if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v42)
      && a1->ReadyThreadCount == 1
      && !a1->ScbQueue.Root )
    {
      _InterlockedOr64((volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues, a1->GroupSetMember);
    }
    v47 = *(unsigned int *)(a3 + 84);
    *(_DWORD *)(a3 + 1784) = v47;
    SharedReadyQueue = (__int64)a1->SharedReadyQueue;
    a1->ReadyQueueExpectedRunTime += v47;
    KiUpdateSoftParkElectionStatisticsOnInsertion(SharedReadyQueue, a3);
    if ( !KiForceParkingConfiguration
      || (a1->IdleState & 0x20) == 0
      || KiIsThreadExemptFromForcePark(a3)
      || (ForceParkDutyCycleData = (ULONG_PTR)a1->ForceParkDutyCycleData,
          v50 = a1->SharedReadyQueue,
          *(_DWORD *)(ForceParkDutyCycleData + 336)) )
    {
LABEL_115:
      v34 = 0;
      goto LABEL_116;
    }
    if ( v50 )
    {
      v57 = 0LL;
      if ( (KiVelocityFlags & 0x200000) != 0 )
      {
        *((_QWORD *)&v57 + 1) = v50;
        *(_QWORD *)&v57 = 0LL;
        v51 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)v50, (__int64)&v57);
        if ( v51 )
          KxWaitForLockOwnerShip((struct _KPRCB *)&v57, v51);
      }
      else
      {
        v55 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v50, 0LL) )
        {
          do
          {
            if ( (++v55 & HvlLongSpinCountMask) == 0
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
          while ( v50->Lock );
        }
      }
      v52 = (KiVelocityFlags & 0x200000) == 0;
      v50->ForceParkDutyCyclingArmedMask |= a1->GroupSetMember;
      if ( v52 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v50, 0LL);
      }
      else
      {
        _m_prefetchw(&v57);
        v53 = v57;
        if ( (_QWORD)v57 )
          goto LABEL_102;
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v57 + 1),
                           0LL,
                           (signed __int64)&v57) != &v57 )
        {
          v53 = KxWaitForLockChainValid((__int64 *)&v57);
LABEL_102:
          *(_QWORD *)&v57 = 0LL;
          v54 = *((_QWORD *)&v57 + 1);
          if ( (((unsigned __int8)v54 ^ (unsigned __int8)_InterlockedExchange64(
                                                           (volatile __int64 *)(v53 + 8),
                                                           *((__int64 *)&v57 + 1))) & 4) != 0 )
            KeWakeAddressAll(v53 + 8, v54);
        }
      }
    }
    *(_DWORD *)(ForceParkDutyCycleData + 336) = 1;
    *(_DWORD *)(ForceParkDutyCycleData + 340) = 1;
    KiInsertQueueDpc(ForceParkDutyCycleData, 0LL, 0LL, 0LL, 0);
    goto LABEL_115;
  }
  v27 = (__int64)a1->SharedReadyQueue;
  v28 = (_QWORD *)(v27 + 16 * (v19 + 4));
  v56 = 0LL;
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    *((_QWORD *)&v56 + 1) = v27;
    *(_QWORD *)&v56 = 0LL;
    v29 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)v27, (__int64)&v56);
    if ( v29 )
      KxWaitForLockOwnerShip((struct _KPRCB *)&v56, v29);
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
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v27 );
    }
  }
  v30 = (_QWORD *)(a3 + 216);
  if ( !a5 )
  {
    v31 = (_QWORD *)v28[1];
    if ( (_QWORD *)*v31 == v28 )
    {
      *v30 = v28;
      *(_QWORD *)(a3 + 224) = v31;
      *v31 = v30;
      v28[1] = v30;
      goto LABEL_60;
    }
LABEL_84:
    __fastfail(3u);
  }
  v31 = (_QWORD *)*v28;
  if ( *(_QWORD **)(*v28 + 8LL) != v28 )
    goto LABEL_84;
  *v30 = v31;
  *(_QWORD *)(a3 + 224) = v28;
  v31[1] = v30;
  *v28 = v30;
  _bittestandreset(&a1->AffinitizedSelectionMask, v19);
LABEL_60:
  *(_DWORD *)(v27 + 8) |= 1 << v19;
  *(_DWORD *)(a3 + 536) |= 0x80000000;
  ++*(_DWORD *)(v27 + 12);
  if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v31)
    && *(_DWORD *)(v27 + 12) == 1 )
  {
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v27 + 720) + 392LL), *(_QWORD *)(v27 + 712));
  }
  v33 = *(unsigned int *)(a3 + 84);
  *(_DWORD *)(a3 + 1784) = v33;
  *(_QWORD *)(v27 + 16) += v33;
  KiUpdateSoftParkElectionStatisticsOnInsertion(v27, a3);
  v34 = 1;
  if ( KiForceParkingConfiguration && (a1->IdleState & 0x20) != 0 && !KiIsThreadExemptFromForcePark(a3) )
  {
    if ( (v35 & 0x10) == 0
      || ((SchedulerSubNode = a1->SchedulerSubNode, !v36)
        ? (NonParkedSet = SchedulerSubNode->NonParkedSet)
        : (NonParkedSet = ~SchedulerSubNode->ForceParkRequestSet),
          (NonParkedSet & *(_QWORD *)(v27 + 712)) == 0) )
    {
      if ( !*(_QWORD *)(v27 + 1768) )
      {
        *(_QWORD *)(v27 + 1768) |= a1->GroupSetMember;
        v39 = (ULONG_PTR)a1->ForceParkDutyCycleData;
        *(_DWORD *)(v39 + 336) = 1;
        *(_DWORD *)(v39 + 340) = 1;
        KiInsertQueueDpc(v39, 0LL, 0LL, 0LL, 0);
      }
    }
  }
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    _m_prefetchw(&v56);
    v40 = v56;
    if ( (_QWORD)v56 )
      goto LABEL_77;
    if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v56 + 1), 0LL, (signed __int64)&v56) != &v56 )
    {
      v40 = KxWaitForLockChainValid((__int64 *)&v56);
LABEL_77:
      *(_QWORD *)&v56 = 0LL;
      v41 = *((_QWORD *)&v56 + 1);
      if ( (((unsigned __int8)v41 ^ (unsigned __int8)_InterlockedExchange64(
                                                       (volatile __int64 *)(v40 + 8),
                                                       *((__int64 *)&v56 + 1))) & 4) != 0 )
        KeWakeAddressAll(v40 + 8, v41);
    }
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
  }
LABEL_116:
  result = a6;
  *a6 = v34;
  return result;
}
