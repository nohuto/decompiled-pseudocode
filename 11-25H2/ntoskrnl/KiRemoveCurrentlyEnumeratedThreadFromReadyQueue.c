/*
 * XREFs of KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140352350
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x140352650 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 *     KiRemoveThreadFromScbQueue @ 0x140352968 (KiRemoveThreadFromScbQueue.c)
 *     ?KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x140352F90 (-KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v5; // r8
  struct _KPRCB *v6; // rbx
  __int64 result; // rax
  int v8; // ecx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rbx
  _QWORD *ReadySummary; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rcx

  v3 = *(unsigned __int8 *)(a1 + 8);
  v5 = a2 + 216;
  v6 = *(struct _KPRCB **)(a1 + 48 * (*(unsigned __int8 *)(a1 + 10) + 1LL));
  if ( *(_BYTE *)(a1 + 13) == 2 )
  {
    v14 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)v5 == v14 && *(_QWORD *)(a2 + 224) == v14 )
      KiAdvanceReadyQueueEnumeratorToNextList((struct _KI_READY_QUEUE_ENUMERATOR *)a1);
    else
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    return KiRemoveThreadFromScbQueue(v6);
  }
  else
  {
    result = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(result + 8);
    v8 = *(unsigned __int8 *)(a1 + 12);
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( v8 == 1 )
      {
        if ( ((*(unsigned __int8 *)(a1 + 11) - 1) & *(unsigned __int8 *)(a1 + 11)) != 0 )
          _bittestandset(&v6->AffinitizedSelectionMask, v3);
        SharedReadyQueue = v6->SharedReadyQueue;
        if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
          _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
        ReadySummary = *(_QWORD **)v5;
        v11 = *(_QWORD **)(a2 + 224);
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v11 != v5 )
          goto LABEL_10;
        *v11 = ReadySummary;
        ReadySummary[1] = v11;
        if ( v11 == ReadySummary )
        {
          ReadySummary = (_QWORD *)SharedReadyQueue->ReadySummary;
          LODWORD(ReadySummary) = (unsigned int)ReadySummary ^ (1 << v3);
          SharedReadyQueue->ReadySummary = (unsigned int)ReadySummary;
        }
        --SharedReadyQueue->ReadyThreadCount;
        if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(ReadySummary)
          && !SharedReadyQueue->ReadyThreadCount )
        {
          _InterlockedAnd64(
            (volatile signed __int64 *)&SharedReadyQueue->SubNode->StealableSharedReadyQueues,
            ~SharedReadyQueue->Affinity);
        }
        SharedReadyQueue->ReadyQueueExpectedRunTime -= *(unsigned int *)(a2 + 1784);
        result = SharedReadyQueue->SoftParkElectionGeneration;
        if ( *(_QWORD *)(a2 + 1792) == result )
        {
          v15 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&SharedReadyQueue->SoftParkElectionLock, 0LL) )
          {
            do
            {
              if ( (++v15 & HvlLongSpinCountMask) == 0
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
            while ( SharedReadyQueue->SoftParkElectionLock );
          }
          result = SharedReadyQueue->SoftParkElectionGeneration;
          if ( *(_QWORD *)(a2 + 1792) == result )
          {
            --SharedReadyQueue->SoftParkElectionThreadCount;
            SharedReadyQueue->SoftParkElectionRunTime -= *(unsigned int *)(a2 + 1788);
            if ( !SharedReadyQueue->SoftParkElectionThreadCount )
              SharedReadyQueue->SoftParkElectionAffinityStats.AffinitySummary = 0LL;
            v16 = *(unsigned __int8 *)(a2 + 1829)
                + 8 * (*(unsigned __int8 *)(a2 + 1830) + 2LL * *(unsigned __int8 *)(a2 + 1828));
            result = *(unsigned int *)(a2 + 1788);
            SharedReadyQueue->SoftParkElectionHeteroStats.ExpectedRuntimeByClass[0][0][v16] -= result;
          }
          _InterlockedAnd64((volatile signed __int64 *)&SharedReadyQueue->SoftParkElectionLock, 0LL);
        }
      }
    }
    else
    {
      if ( ((*(unsigned __int8 *)(a1 + 11) - 1) & *(unsigned __int8 *)(a1 + 11)) != 0 )
        _bittestandreset(&v6->AffinitizedSelectionMask, v3);
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
        _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
      v12 = *(_QWORD **)v5;
      v13 = *(_QWORD **)(a2 + 224);
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v13 != v5 )
LABEL_10:
        __fastfail(3u);
      *v13 = v12;
      v12[1] = v13;
      if ( v13 == v12 )
      {
        v12 = (_QWORD *)v6->ReadySummary;
        LODWORD(v12) = (unsigned int)v12 ^ (1 << v3);
        v6->ReadySummary = (unsigned int)v12;
      }
      --v6->ReadyThreadCount;
      if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v12)
        && !v6->ReadyThreadCount
        && !v6->ScbQueue.Root )
      {
        _InterlockedAnd64(
          (volatile signed __int64 *)&v6->SchedulerSubNode->StealableLocalReadyQueues,
          ~v6->GroupSetMember);
      }
      v6->ReadyQueueExpectedRunTime -= *(unsigned int *)(a2 + 1784);
      return KiUpdateSoftParkElectionStatisticsOnRemoval(v6->SharedReadyQueue, a2, 0LL);
    }
  }
  return result;
}
