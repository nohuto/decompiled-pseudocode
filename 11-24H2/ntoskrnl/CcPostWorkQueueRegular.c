/*
 * XREFs of CcPostWorkQueueRegular @ 0x1402A74B4
 * Callers:
 *     CcPostWorkQueue @ 0x1402A7488 (CcPostWorkQueue.c)
 *     CcLazyWriteScanVolume @ 0x1404B5560 (CcLazyWriteScanVolume.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1402A7D0C (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1402A7FF0 (CcPerfLogWorkItemEnqueue.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402CD5E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall CcPostWorkQueueRegular(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  ULONG_PTR v6; // rdi
  __int64 v7; // r13
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rax
  ULONG_PTR *v12; // rcx
  ULONG_PTR v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 136);
  v5 = *(_QWORD *)(a1 + 152);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 144);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140FC5B10 & 0x20000) != 0 )
  {
    if ( ((*(_DWORD *)(a1 + 128) - 2) & 0xFFFFFFFD) != 0 )
      a4 = 0LL;
    else
      LOBYTE(a4) = 1;
    CcPerfLogWorkItemEnqueue(
      a2,
      a1,
      0LL,
      a4,
      LockHandle.LockQueue.Next,
      LockHandle.LockQueue.Lock,
      *(_QWORD *)&LockHandle.OldIrql);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 832), &LockHandle);
  if ( *(_DWORD *)(a1 + 128) == 3 && *(_QWORD *)(v5 + 104) != v5 + 104 )
  {
    v10 = *(_QWORD *)(v4 + 1056);
    if ( (v10 >= *(_QWORD *)(v4 + 1080) >> 2 || v10 > *(_QWORD *)(**(_QWORD **)(v4 + 8) + 18688LL) >> 1)
      && !(unsigned __int8)CcIsWriteBehindThreadpoolAtLowPriority(v4) )
    {
      *(_BYTE *)(v5 + 224) = 1;
    }
  }
  v11 = *(_QWORD **)(a2 + 8);
  if ( *v11 != a2 )
    goto LABEL_23;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v11;
  *v11 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( *(_BYTE *)(v5 + 196) )
    goto LABEL_20;
  v12 = (ULONG_PTR *)(v5 + 56);
  if ( (ULONG_PTR *)*v12 == v12
    || *(_DWORD *)(a1 + 128) == 2 && (unsigned int)(*(_DWORD *)(v5 + 188) + 1) > *(_DWORD *)(v4 + 1288) )
  {
    goto LABEL_20;
  }
  v6 = *v12;
  if ( *(ULONG_PTR **)(*v12 + 8) != v12 || (v13 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
LABEL_23:
    __fastfail(3u);
  *v12 = v13;
  *(_QWORD *)(v13 + 8) = v12;
  ++*(_DWORD *)(v5 + 48);
  CcReferencePartitionAndPrivateVolumeCacheMap(v4, v7);
LABEL_20:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 )
  {
    *(_QWORD *)v6 = 0LL;
    ExQueueWorkItemToPartition(v6);
  }
}
