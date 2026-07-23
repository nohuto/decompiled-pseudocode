/*
 * XREFs of CcAsyncLazywriteWorkerThread @ 0x1404D8960
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcNotifyWriteBehindVolume @ 0x1402650BC (CcNotifyWriteBehindVolume.c)
 *     CcAsyncLazywriteWorker @ 0x14027B0C8 (CcAsyncLazywriteWorker.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C0AEC (CcAsyncLazywriteWorkerMulti.c)
 */

char __fastcall CcAsyncLazywriteWorkerThread(__int64 a1)
{
  __int64 v1; // rsi
  char result; // al
  bool v3; // zf
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v7; // r14
  __int64 *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+38h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 72);
  result = 0;
  v3 = *(_DWORD *)(a1 + 32) == 7;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 64);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = v1 + 288;
  memset(&v10, 0, sizeof(v10));
  if ( v3 )
  {
    *(_DWORD *)(*(_QWORD *)(v1 + 352) + 4LL * *(unsigned int *)(a1 + 40)) = 0;
    if ( (*(_DWORD *)(v5 + 1616) & 2) != 0 )
      CcAsyncLazywriteWorkerMulti(a1);
    else
      CcAsyncLazywriteWorker(a1);
    *(_DWORD *)(*(_QWORD *)(v1 + 352) + 4LL * *(unsigned int *)(a1 + 40)) = -1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 832), &LockHandle);
    v8 = *(__int64 **)(v1 + 296);
    if ( *v8 != v7 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)a1 = v7;
    *v8 = a1;
    *(_QWORD *)(v1 + 296) = a1;
    --*(_DWORD *)(v1 + 304);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( *(_DWORD *)(v1 + 304) <= 1u
      && *(_QWORD *)(v5 + 992) >= (unsigned __int64)*(unsigned int *)(v5 + 1040)
      && MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v5 + 1600) + 5000000LL )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &v10);
      CcNotifyWriteBehindVolume(v5, 32);
      KeReleaseInStackQueuedSpinLock(&v10);
    }
    return CcDereferencePartitionAndPrivateVolumeCacheMap(v4, v5);
  }
  return result;
}
