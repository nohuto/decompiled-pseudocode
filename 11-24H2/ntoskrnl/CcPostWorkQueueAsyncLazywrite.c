/*
 * XREFs of CcPostWorkQueueAsyncLazywrite @ 0x1404D8AC0
 * Callers:
 *     CcLazyWriteScanVolume @ 0x1404AFE00 (CcLazyWriteScanVolume.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x14057B740 (CcQueueAsyncLazywriteCompletion.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140279DE0 (CcPerfLogWorkItemEnqueue.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402E62E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall CcPostWorkQueueAsyncLazywrite(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // r15
  int v8; // eax
  __int64 *v9; // rcx
  _QWORD *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rax
  _QWORD *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 144);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140FC6B50 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, a1, 0, 1);
  v8 = *(_DWORD *)(a1 + 128);
  if ( v8 != 7 && v8 != 4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
    v9 = *(__int64 **)(v3 + 392);
    if ( *v9 == v3 + 384 )
    {
      *(_QWORD *)a1 = v3 + 384;
      *(_QWORD *)(a1 + 8) = v9;
      *v9 = a1;
      *(_QWORD *)(v3 + 392) = a1;
      v10 = (_QWORD *)(v3 + 360);
      v11 = *(__int64 **)(v3 + 360);
      if ( v11 == (__int64 *)(v3 + 360) )
        goto LABEL_19;
      v4 = *(_QWORD **)(v3 + 360);
      if ( (_QWORD *)v11[1] == v10 )
      {
        v12 = *v11;
        if ( *(_QWORD **)(v12 + 8) == v4 )
        {
          *v10 = v12;
          *(_QWORD *)(v12 + 8) = v10;
          ++*(_DWORD *)(v3 + 376);
          CcReferencePartitionAndPrivateVolumeCacheMap(v2, v5);
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    __fastfail(3u);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
  v13 = *(__int64 **)(a2 + 8);
  if ( *v13 != a2 )
    goto LABEL_22;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v13;
  *v13 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( !*(_BYTE *)(v3 + 196) )
  {
    v14 = (_QWORD *)(v3 + 288);
    v15 = *(__int64 **)(v3 + 288);
    if ( v15 != (__int64 *)(v3 + 288) )
    {
      v4 = *(_QWORD **)(v3 + 288);
      if ( (_QWORD *)v15[1] != v14 )
        goto LABEL_22;
      v16 = *v15;
      if ( *(_QWORD **)(v16 + 8) != v4 )
        goto LABEL_22;
      *v14 = v16;
      *(_QWORD *)(v16 + 8) = v14;
      ++*(_DWORD *)(v3 + 304);
      CcReferencePartitionAndPrivateVolumeCacheMap(v2, v5);
    }
  }
  if ( !*(_BYTE *)(v3 + 196) && (*(_DWORD *)(v5 + 1616) & 2) != 0 )
    KeSetEvent((PRKEVENT)(v3 + 328), 0, 0);
LABEL_19:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
  {
    *v4 = 0LL;
    ExQueueWorkItemToPartition((ULONG_PTR)v4, 0, *(_DWORD *)(v3 + 24), *(_QWORD *)(v2 + 8));
  }
}
