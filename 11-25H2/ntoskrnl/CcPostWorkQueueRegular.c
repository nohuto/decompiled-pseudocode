/*
 * XREFs of CcPostWorkQueueRegular @ 0x1403ABCE4
 * Callers:
 *     CcPostWorkQueue @ 0x1403ABCB8 (CcPostWorkQueue.c)
 *     CcLazyWriteScanVolume @ 0x1404B5AC0 (CcLazyWriteScanVolume.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1403A5530 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1403AC55C (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403AD310 (CcPerfLogWorkItemEnqueue.c)
 */

void __fastcall CcPostWorkQueueRegular(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  ULONG_PTR v6; // rdi
  __int64 v7; // r13
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax
  ULONG_PTR *v13; // rcx
  ULONG_PTR v14; // rax
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
    CcPerfLogWorkItemEnqueue(a2, a1, 0LL, a4);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 832), &LockHandle);
  if ( *(_DWORD *)(a1 + 128) == 3 && *(_QWORD *)(v5 + 104) != v5 + 104 )
  {
    v11 = *(_QWORD *)(v4 + 1056);
    if ( (v11 >= *(_QWORD *)(v4 + 1080) >> 2 || v11 > *(_QWORD *)(**(_QWORD **)(v4 + 8) + 18688LL) >> 1)
      && !(unsigned __int8)CcIsWriteBehindThreadpoolAtLowPriority(v4, v11, v10) )
    {
      *(_BYTE *)(v5 + 224) = 1;
    }
  }
  v12 = *(_QWORD **)(a2 + 8);
  if ( *v12 != a2 )
    goto LABEL_23;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v12;
  *v12 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( *(_BYTE *)(v5 + 196) )
    goto LABEL_20;
  v13 = (ULONG_PTR *)(v5 + 56);
  if ( (ULONG_PTR *)*v13 == v13
    || *(_DWORD *)(a1 + 128) == 2 && (unsigned int)(*(_DWORD *)(v5 + 188) + 1) > *(_DWORD *)(v4 + 1288) )
  {
    goto LABEL_20;
  }
  v6 = *v13;
  if ( *(ULONG_PTR **)(*v13 + 8) != v13 || (v14 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
LABEL_23:
    __fastfail(3u);
  *v13 = v14;
  *(_QWORD *)(v14 + 8) = v13;
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
