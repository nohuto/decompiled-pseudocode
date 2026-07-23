/*
 * XREFs of CcPostWorkQueueRegular @ 0x14027AE98
 * Callers:
 *     CcPostWorkQueue @ 0x14027AE6C (CcPostWorkQueue.c)
 *     CcLazyWriteScanVolume @ 0x1404AFE00 (CcLazyWriteScanVolume.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140279B04 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140279DE0 (CcPerfLogWorkItemEnqueue.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402E62E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall CcPostWorkQueueRegular(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  ULONG_PTR v4; // rdi
  __int64 v5; // r13
  unsigned __int64 v8; // rdx
  __int64 *v9; // rax
  ULONG_PTR *v10; // rcx
  ULONG_PTR v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 144);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140FC6B50 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, a1, 0, ((*(_DWORD *)(a1 + 128) - 2) & 0xFFFFFFFD) == 0);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
  if ( *(_DWORD *)(a1 + 128) == 3 && *(_QWORD *)(v3 + 104) != v3 + 104 )
  {
    v8 = *(_QWORD *)(v2 + 1056);
    if ( (v8 >= *(_QWORD *)(v2 + 1080) >> 2 || v8 > *(_QWORD *)(**(_QWORD **)(v2 + 8) + 18688LL) >> 1)
      && !CcIsWriteBehindThreadpoolAtLowPriority(v2) )
    {
      *(_BYTE *)(v3 + 224) = 1;
    }
  }
  v9 = *(__int64 **)(a2 + 8);
  if ( *v9 != a2 )
    goto LABEL_20;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v9;
  *v9 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( *(_BYTE *)(v3 + 196) )
    goto LABEL_17;
  v10 = (ULONG_PTR *)(v3 + 56);
  if ( (ULONG_PTR *)*v10 == v10
    || *(_DWORD *)(a1 + 128) == 2 && (unsigned int)(*(_DWORD *)(v3 + 188) + 1) > *(_DWORD *)(v2 + 1288) )
  {
    goto LABEL_17;
  }
  v4 = *v10;
  if ( *(ULONG_PTR **)(*v10 + 8) != v10 || (v11 = *(_QWORD *)v4, *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4) )
LABEL_20:
    __fastfail(3u);
  *v10 = v11;
  *(_QWORD *)(v11 + 8) = v10;
  ++*(_DWORD *)(v3 + 48);
  CcReferencePartitionAndPrivateVolumeCacheMap(v2, v5);
LABEL_17:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    ExQueueWorkItemToPartition(v4, 0, *(_DWORD *)(v3 + 24), *(_QWORD *)(v2 + 8));
  }
}
