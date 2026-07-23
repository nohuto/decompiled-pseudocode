/*
 * XREFs of KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x1402D8CB0
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 * Callees:
 *     KiUpdateSharedReadyQueueStatisticsOnRemoval @ 0x1402D8EC4 (KiUpdateSharedReadyQueueStatisticsOnRemoval.c)
 *     KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x1402D8F08 (KiUpdateLocalReadyQueueStatisticsOnRemoval.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402D8F60 (KiRemoveThreadFromScbQueue.c)
 *     ?KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9568 (-KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 */

__int64 __fastcall KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  unsigned int v3; // esi
  struct _KPRCB *v4; // rbx
  __int64 result; // rax
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax

  v2 = (_QWORD *)(a2 + 216);
  v3 = *(unsigned __int8 *)(a1 + 8);
  v4 = *(struct _KPRCB **)(a1 + 48 * (*(unsigned __int8 *)(a1 + 10) + 1LL));
  if ( *(_BYTE *)(a1 + 13) == 2 )
  {
    v11 = *(_QWORD *)(a1 + 32);
    if ( *v2 == v11 && *(_QWORD *)(a2 + 224) == v11 )
      KiAdvanceReadyQueueEnumeratorToNextList((struct _KI_READY_QUEUE_ENUMERATOR *)a1);
    else
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    return KiRemoveThreadFromScbQueue(v4);
  }
  else
  {
    result = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(result + 8);
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( *(_BYTE *)(a1 + 12) == 1 )
      {
        if ( ((*(unsigned __int8 *)(a1 + 11) - 1) & *(unsigned __int8 *)(a1 + 11)) != 0 )
          _bittestandset(&v4->AffinitizedSelectionMask, v3);
        SharedReadyQueue = v4->SharedReadyQueue;
        if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
          _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
        v7 = (_QWORD *)*v2;
        v8 = (_QWORD *)v2[1];
        if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v8 != v2 )
          goto LABEL_10;
        *v8 = v7;
        v7[1] = v8;
        if ( v8 == v7 )
          SharedReadyQueue->ReadySummary ^= 1 << v3;
        return KiUpdateSharedReadyQueueStatisticsOnRemoval(SharedReadyQueue);
      }
    }
    else
    {
      if ( ((*(unsigned __int8 *)(a1 + 11) - 1) & *(unsigned __int8 *)(a1 + 11)) != 0 )
        _bittestandreset(&v4->AffinitizedSelectionMask, v3);
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
        _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
      v9 = (_QWORD *)*v2;
      v10 = *(_QWORD **)(a2 + 224);
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v10 != v2 )
LABEL_10:
        __fastfail(3u);
      *v10 = v9;
      v9[1] = v10;
      if ( v10 == v9 )
        v4->ReadySummary ^= 1 << v3;
      return KiUpdateLocalReadyQueueStatisticsOnRemoval(v4, a2);
    }
  }
  return result;
}
