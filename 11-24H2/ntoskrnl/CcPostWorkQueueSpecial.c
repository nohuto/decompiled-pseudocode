/*
 * XREFs of CcPostWorkQueueSpecial @ 0x1404B0E58
 * Callers:
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140265C20 (CcQueueLazyWriteScanThreadForVolume.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140279DE0 (CcPerfLogWorkItemEnqueue.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402E62E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall CcPostWorkQueueSpecial(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  _QWORD *v4; // rbx
  __int64 v5; // r15
  char v6; // si
  _QWORD *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 144);
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140FC6B50 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, a1, 0, ((*(_DWORD *)(a1 + 128) - 2) & 0xFFFFFFFD) == 0);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
  if ( !*(_BYTE *)(v3 + 196) )
  {
    v8 = (_QWORD *)(v5 + 1560);
    v9 = *(__int64 **)(v5 + 1560);
    if ( v9 != (__int64 *)(v5 + 1560) )
    {
      v4 = *(_QWORD **)(v5 + 1560);
      if ( (_QWORD *)v9[1] != v8 || (v10 = *v9, *(_QWORD **)(v10 + 8) != v4) )
        __fastfail(3u);
      *v8 = v10;
      *(_QWORD *)(v10 + 8) = v8;
      v6 = 1;
      CcReferencePartitionAndPrivateVolumeCacheMap(v2, v5);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[6] = a1;
    ExQueueWorkItemToPartition((ULONG_PTR)v4, 0, *(_DWORD *)(v3 + 24), *(_QWORD *)(v2 + 8));
  }
  return v6;
}
