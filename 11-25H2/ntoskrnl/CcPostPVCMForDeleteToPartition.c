/*
 * XREFs of CcPostPVCMForDeleteToPartition @ 0x1404B88A4
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403A6590 (CcForEachPrivateVolumeCacheMap.c)
 *     CcProcessDelayedDeletePVCM @ 0x140579210 (CcProcessDelayedDeletePVCM.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     CcPostPVCMDelayedDelete @ 0x1404B89CC (CcPostPVCMDelayedDelete.c)
 */

void __fastcall CcPostPVCMForDeleteToPartition(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_BYTE)a3 && !*(_BYTE *)(v3 + 1294) )
  {
    LOBYTE(a3) = a2;
    CcPostPVCMDelayedDelete(v3, a1, a3);
    return;
  }
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 768), &LockHandle);
  v7 = *(_QWORD **)(v3 + 88);
  v8 = (_QWORD *)(a1 + 576);
  if ( *v7 != v3 + 80 )
    goto LABEL_17;
  *v8 = v3 + 80;
  *(_QWORD *)(a1 + 584) = v7;
  *v7 = v8;
  *(_QWORD *)(v3 + 88) = v8;
  v9 = (_QWORD *)(v3 + 96);
  *(_DWORD *)(a1 + 1616) |= 4u;
  v10 = *(__int64 **)(v3 + 96);
  if ( v10 != (__int64 *)(v3 + 96) )
  {
    v4 = *(_QWORD **)(v3 + 96);
    if ( (_QWORD *)v10[1] == v9 )
    {
      v11 = *v10;
      if ( *(_QWORD **)(v11 + 8) == v4 )
      {
        *v9 = v11;
        *(_QWORD *)(v11 + 8) = v9;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 1296)) <= 1 )
          __fastfail(0xEu);
        goto LABEL_13;
      }
    }
LABEL_17:
    __fastfail(3u);
  }
LABEL_13:
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
  {
    *v4 = 0LL;
    ExQueueWorkItemToPartition(v4, 0, 0xFFFFFFFF, *(_QWORD *)(v3 + 8));
  }
}
