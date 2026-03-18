/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x1404DFCEC
 * Callers:
 *     CcAsyncCopyRead @ 0x1402A94F0 (CcAsyncCopyRead.c)
 *     CcAsyncReadWorker @ 0x1404DF280 (CcAsyncReadWorker.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     CcFreeWorkQueueEntry @ 0x1402A7E6C (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1402A7FF0 (CcPerfLogWorkItemEnqueue.c)
 *     ExAllocatePoolWithTagFromNode @ 0x1402AC224 (ExAllocatePoolWithTagFromNode.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402CD5E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CcCompleteAsyncRead @ 0x1404DF87C (CcCompleteAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1404E00C0 (CcShouldSpinAsyncReadWorkerThread.c)
 */

__int64 __fastcall CcPostWorkQueueAsyncRead(struct _SLIST_ENTRY *P, __int64 a2)
{
  char v4; // r12
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 Next_high; // r13
  unsigned __int64 *v8; // rbx
  char v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  struct _SLIST_ENTRY **v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rdx
  unsigned __int64 v15; // rtt
  __int64 result; // rax
  _QWORD *v17; // r10
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rbp
  _SLIST_ENTRY *v21; // r8
  struct _SLIST_ENTRY **v22; // rax
  signed __int64 v23; // rax
  signed __int64 v24; // rdx
  unsigned __int64 v25; // rtt
  ULONG_PTR v26; // r9
  __int64 PoolWithTagFromNode; // rax
  ULONG_PTR v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbp
  _QWORD *v33; // rax
  _QWORD *v34; // rdi
  signed __int64 v35; // rax
  signed __int64 v36; // rdx
  unsigned __int64 v37; // rtt
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+8h] BYREF
  _SLIST_ENTRY *Next; // [rsp+70h] [rbp+18h]

  v4 = 0;
  BugCheckParameter2 = 0LL;
  v5 = *((_QWORD *)&P[8].Next + 1);
  v6 = *((_QWORD *)&P[9].Next + 1);
  Next_high = HIDWORD(P[7].Next);
  v8 = (unsigned __int64 *)(&P[9].Next[72].Next + 1);
  Next = P[9].Next;
  if ( !CcEnablePerVolumeLazyWriter )
    v8 = (unsigned __int64 *)(v5 + 1224);
  if ( (xmmword_140FC5B10 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, (__int64)P, 0, 0);
  if ( LODWORD(P[8].Next) != 5 )
  {
    v18 = (_QWORD *)(16 * Next_high + *(_QWORD *)(v6 + 264));
    if ( (_QWORD *)*v18 != v18
      || *(_DWORD *)(*(_QWORD *)(v6 + 248) + 4 * Next_high) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      v19 = KeAbPreAcquire((__int64)v8, 0LL);
      v20 = v19;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        ExfAcquirePushLockExclusiveEx(v8, (__int64)v19, (__int64)v8);
      if ( v20 )
        *((_BYTE *)v20 + 10) = 1;
      v21 = (_SLIST_ENTRY *)(16 * Next_high + *(_QWORD *)(v6 + 264));
      if ( v21->Next != v21
        || *(_DWORD *)(*(_QWORD *)(v6 + 248) + 4 * Next_high) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
      {
        v22 = (struct _SLIST_ENTRY **)*((_QWORD *)&v21->Next + 1);
        if ( *v22 != v21 )
          goto LABEL_33;
        P->Next = v21;
        v4 = 1;
        *((_QWORD *)&P->Next + 1) = v22;
        *v22 = P;
        *((_QWORD *)&v21->Next + 1) = P;
      }
      _m_prefetchw(v8);
      v23 = *v8;
      v24 = *v8 - 16;
      if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v24 = 0LL;
      if ( (v23 & 2) != 0 || (v25 = *v8, v25 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v24, v23)) )
        ExfReleasePushLock(v8);
      result = KeAbPostRelease((ULONG_PTR)v8);
      if ( v4 )
        return result;
    }
    v26 = *(unsigned int *)(v6 + 24);
    LODWORD(v26) = v26 | 0x80000000;
    PoolWithTagFromNode = ExAllocatePoolWithTagFromNode((__int64)v18, 0x50uLL, 0x71576343uLL, v26);
    v28 = PoolWithTagFromNode;
    if ( !PoolWithTagFromNode )
    {
      **((_DWORD **)&P[4].Next + 1) = -1073741670;
      CcCompleteAsyncRead((__int64)P);
      return CcFreeWorkQueueEntry(P, v29, v30, v31);
    }
    v32 = (__int64)Next;
    *(_QWORD *)(PoolWithTagFromNode + 64) = Next;
    *(_DWORD *)(PoolWithTagFromNode + 32) = 4;
    *(_QWORD *)(PoolWithTagFromNode + 56) = v5;
    *(_QWORD *)(PoolWithTagFromNode + 72) = v6;
    *(_QWORD *)(PoolWithTagFromNode + 48) = P;
    *(_DWORD *)(PoolWithTagFromNode + 36) = Next_high;
    *(_QWORD *)(PoolWithTagFromNode + 16) = CcCompleteAsyncReadWorker;
    *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
    *(_QWORD *)PoolWithTagFromNode = 0LL;
    v33 = KeAbPreAcquire((__int64)v8, 0LL);
    v34 = v33;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, (__int64)v33, (__int64)v8);
    if ( v34 )
      *((_BYTE *)v34 + 10) = 1;
    *(_DWORD *)(v28 + 40) = (*(_DWORD *)(*(_QWORD *)(v6 + 248) + 4 * Next_high))++;
    CcReferencePartitionAndPrivateVolumeCacheMap(v5, v32);
    _m_prefetchw(v8);
    v35 = *v8;
    v36 = *v8 - 16;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v36 = 0LL;
    if ( (v35 & 2) != 0 || (v37 = *v8, v37 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v36, v35)) )
      ExfReleasePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    *(_QWORD *)v28 = 0LL;
    result = ExQueueWorkItemToPartition(v28, 46, *(_DWORD *)(v6 + 24), *(_QWORD *)(v5 + 8));
    v17 = (_QWORD *)BugCheckParameter2;
    goto LABEL_53;
  }
  v9 = 0;
  v10 = KeAbPreAcquire((__int64)v8, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, (__int64)v10, (__int64)v8);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v12 = *(struct _SLIST_ENTRY ***)(a2 + 8);
  if ( *v12 != (struct _SLIST_ENTRY *)a2 )
LABEL_33:
    __fastfail(3u);
  *((_QWORD *)&P->Next + 1) = v12;
  P->Next = (_SLIST_ENTRY *)a2;
  *v12 = P;
  *(_QWORD *)(a2 + 8) = P;
  if ( *(_QWORD *)(*(_QWORD *)(v6 + 264) + 16 * Next_high) == *(_QWORD *)(v6 + 264) + 16 * Next_high
    || *(_DWORD *)(*(_QWORD *)(v6 + 240) + 4 * Next_high) <= 1u )
  {
    KeSetEvent((PRKEVENT)(*(_QWORD *)(v6 + 272) + 24 * Next_high), 0, 0);
  }
  else
  {
    v9 = 1;
  }
  _m_prefetchw(v8);
  v13 = *v8;
  v14 = *v8 - 16;
  if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (v13 & 2) != 0 || (v15 = *v8, v15 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v14, v13)) )
    ExfReleasePushLock(v8);
  result = KeAbPostRelease((ULONG_PTR)v8);
  if ( !v9 )
  {
    result = CcShouldSpinAsyncReadWorkerThread(v5, v6, &BugCheckParameter2, (unsigned int)Next_high);
    v17 = (_QWORD *)BugCheckParameter2;
    if ( (_BYTE)result )
    {
      if ( !BugCheckParameter2 )
        return result;
      result = *(_QWORD *)(v6 + 280);
      *(_DWORD *)(result + 4 * (101 * Next_high + *(unsigned int *)(BugCheckParameter2 + 40))) = 0;
    }
LABEL_53:
    if ( v17 )
    {
      *v17 = 0LL;
      return ExQueueWorkItemToPartition((ULONG_PTR)v17, 0, *(_DWORD *)(v6 + 24), *(_QWORD *)(v5 + 8));
    }
  }
  return result;
}
