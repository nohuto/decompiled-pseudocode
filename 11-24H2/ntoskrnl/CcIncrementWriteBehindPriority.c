/*
 * XREFs of CcIncrementWriteBehindPriority @ 0x1404D4A80
 * Callers:
 *     CcLazyWriteScan @ 0x1402654C8 (CcLazyWriteScan.c)
 *     CcLazyWriteScanVolume @ 0x1404AFE00 (CcLazyWriteScanVolume.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402E62E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

char __fastcall CcIncrementWriteBehindPriority(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned __int64 *v13; // rdx
  _QWORD *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 536);
  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *(_DWORD *)(a1 + 560);
  if ( v4 == -1 )
    v4 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v5 = v4 % CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8 * v5 + 64);
  else
    v6 = *(_QWORD *)(v1 + 8 * v5 + 128);
  v7 = *(_QWORD *)(a1 + 504);
  v8 = *(_QWORD *)(v6 + 16);
  if ( v7 && (v7 & 1) == 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 832), &LockHandle);
    v10 = *(_QWORD *)(a1 + 504);
    if ( !v10 )
    {
      LOBYTE(v7) = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v9);
      return v7;
    }
    *(_QWORD *)(a1 + 504) = v10 | 1;
    v11 = *(_QWORD *)v10;
    v12 = *(_QWORD **)(v10 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) == v10 && *v12 == v10 )
    {
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)v10 = 0LL;
      v13 = *(unsigned __int64 **)(v6 + 80);
      if ( *v13 == v6 + 72 )
      {
        *(_QWORD *)v10 = v6 + 72;
        *(_QWORD *)(v10 + 8) = v13;
        *v13 = v10;
        *(_QWORD *)(v6 + 80) = v10;
        if ( *(_BYTE *)(v6 + 196)
          || (v14 = (_QWORD *)(v6 + 56), v15 = *(__int64 **)(v6 + 56), v15 == (__int64 *)(v6 + 56)) )
        {
LABEL_19:
          LOBYTE(v7) = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, (__int64)v13);
          if ( v2 )
          {
            *v2 = 0LL;
            LOBYTE(v7) = ExQueueWorkItemToPartition((ULONG_PTR)v2, 0, *(_DWORD *)(v6 + 24), *(_QWORD *)(v1 + 8));
          }
          return v7;
        }
        v2 = *(_QWORD **)(v6 + 56);
        v16 = *v15;
        if ( (_QWORD *)v2[1] == v14 && *(_QWORD **)(v16 + 8) == v2 )
        {
          *v14 = v16;
          *(_QWORD *)(v16 + 8) = v14;
          ++*(_DWORD *)(v6 + 48);
          CcReferencePartitionAndPrivateVolumeCacheMap(v1, v8);
          goto LABEL_19;
        }
      }
    }
    __fastfail(3u);
  }
  return v7;
}
