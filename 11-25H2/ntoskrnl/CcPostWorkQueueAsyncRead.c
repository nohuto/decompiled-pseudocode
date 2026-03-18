/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x1403AA564
 * Callers:
 *     CcAsyncCopyRead @ 0x1403AAC00 (CcAsyncCopyRead.c)
 *     CcAsyncReadWorker @ 0x1404DFB90 (CcAsyncReadWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExAllocatePoolWithTagFromNode @ 0x1402D9F00 (ExAllocatePoolWithTagFromNode.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1403A5530 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x1403AC6BC (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403AD310 (CcPerfLogWorkItemEnqueue.c)
 *     CcCompleteAsyncRead @ 0x1404E018C (CcCompleteAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1404E05FC (CcShouldSpinAsyncReadWorkerThread.c)
 */

__int64 __fastcall CcPostWorkQueueAsyncRead(_QWORD *P, __int64 a2)
{
  char v4; // r12
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r13
  unsigned __int64 *v8; // rbx
  char v9; // r12
  __int64 *v10; // rax
  __int64 *v11; // r14
  _QWORD *v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rdx
  unsigned __int64 v15; // rtt
  __int64 result; // rax
  _QWORD *v17; // r10
  _QWORD *v18; // rcx
  __int64 *v19; // rax
  __int64 *v20; // rbp
  _QWORD *v21; // r8
  _QWORD *v22; // rax
  signed __int64 v23; // rax
  signed __int64 v24; // rdx
  unsigned __int64 v25; // rtt
  ULONG_PTR v26; // r9
  __int64 PoolWithTagFromNode; // rax
  ULONG_PTR v28; // r14
  __int64 v29; // rbp
  __int64 *v30; // rax
  __int64 *v31; // rdi
  signed __int64 v32; // rax
  signed __int64 v33; // rdx
  unsigned __int64 v34; // rtt
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+8h] BYREF
  __int64 v36; // [rsp+70h] [rbp+18h]

  v4 = 0;
  BugCheckParameter2 = 0LL;
  v5 = P[17];
  v6 = P[19];
  v7 = *((unsigned int *)P + 29);
  v8 = (unsigned __int64 *)(P[18] + 1160LL);
  v36 = P[18];
  if ( !CcEnablePerVolumeLazyWriter )
    v8 = (unsigned __int64 *)(v5 + 1224);
  if ( (xmmword_140FC5B10 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, P, 0LL, 0LL);
  if ( *((_DWORD *)P + 32) != 5 )
  {
    v18 = (_QWORD *)(16 * v7 + *(_QWORD *)(v6 + 264));
    if ( (_QWORD *)*v18 != v18
      || *(_DWORD *)(*(_QWORD *)(v6 + 248) + 4 * v7) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      v19 = KeAbPreAcquire((__int64)v8, 0LL);
      v20 = v19;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        ExfAcquirePushLockExclusiveEx(v8, v19, (__int64)v8);
      if ( v20 )
        *((_BYTE *)v20 + 10) = 1;
      v21 = (_QWORD *)(16 * v7 + *(_QWORD *)(v6 + 264));
      if ( (_QWORD *)*v21 != v21
        || *(_DWORD *)(*(_QWORD *)(v6 + 248) + 4 * v7) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
      {
        v22 = (_QWORD *)v21[1];
        if ( (_QWORD *)*v22 != v21 )
          goto LABEL_33;
        *P = v21;
        v4 = 1;
        P[1] = v22;
        *v22 = P;
        v21[1] = P;
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
      *(_DWORD *)P[9] = -1073741670;
      CcCompleteAsyncRead(P);
      return CcFreeWorkQueueEntry(P);
    }
    v29 = v36;
    *(_QWORD *)(PoolWithTagFromNode + 64) = v36;
    *(_DWORD *)(PoolWithTagFromNode + 32) = 4;
    *(_QWORD *)(PoolWithTagFromNode + 56) = v5;
    *(_QWORD *)(PoolWithTagFromNode + 72) = v6;
    *(_QWORD *)(PoolWithTagFromNode + 48) = P;
    *(_DWORD *)(PoolWithTagFromNode + 36) = v7;
    *(_QWORD *)(PoolWithTagFromNode + 16) = CcCompleteAsyncReadWorker;
    *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
    *(_QWORD *)PoolWithTagFromNode = 0LL;
    v30 = KeAbPreAcquire((__int64)v8, 0LL);
    v31 = v30;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v30, (__int64)v8);
    if ( v31 )
      *((_BYTE *)v31 + 10) = 1;
    *(_DWORD *)(v28 + 40) = (*(_DWORD *)(*(_QWORD *)(v6 + 248) + 4 * v7))++;
    CcReferencePartitionAndPrivateVolumeCacheMap(v5, v29);
    _m_prefetchw(v8);
    v32 = *v8;
    v33 = *v8 - 16;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v33 = 0LL;
    if ( (v32 & 2) != 0 || (v34 = *v8, v34 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v33, v32)) )
      ExfReleasePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    *(_QWORD *)v28 = 0LL;
    result = ExQueueWorkItemToPartition(v28);
    v17 = (_QWORD *)BugCheckParameter2;
    goto LABEL_53;
  }
  v9 = 0;
  v10 = KeAbPreAcquire((__int64)v8, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v10, (__int64)v8);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v12 = *(_QWORD **)(a2 + 8);
  if ( *v12 != a2 )
LABEL_33:
    __fastfail(3u);
  P[1] = v12;
  *P = a2;
  *v12 = P;
  *(_QWORD *)(a2 + 8) = P;
  if ( *(_QWORD *)(*(_QWORD *)(v6 + 264) + 16 * v7) == *(_QWORD *)(v6 + 264) + 16 * v7
    || *(_DWORD *)(*(_QWORD *)(v6 + 240) + 4 * v7) <= 1u )
  {
    KeSetEvent((PRKEVENT)(*(_QWORD *)(v6 + 272) + 24 * v7), 0, 0);
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
    result = CcShouldSpinAsyncReadWorkerThread(v5, v6, &BugCheckParameter2, (unsigned int)v7);
    v17 = (_QWORD *)BugCheckParameter2;
    if ( (_BYTE)result )
    {
      if ( !BugCheckParameter2 )
        return result;
      result = *(_QWORD *)(v6 + 280);
      *(_DWORD *)(result + 4 * (101 * v7 + *(unsigned int *)(BugCheckParameter2 + 40))) = 0;
    }
LABEL_53:
    if ( v17 )
    {
      *v17 = 0LL;
      return ExQueueWorkItemToPartition((ULONG_PTR)v17);
    }
  }
  return result;
}
