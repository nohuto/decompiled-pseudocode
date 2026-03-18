/*
 * XREFs of CcGetPartitionWithCreate @ 0x1404DF450
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CcCreatePartition @ 0x140579350 (CcCreatePartition.c)
 *     CcDeletePartition @ 0x1405793DC (CcDeletePartition.c)
 */

_BYTE *__fastcall CcGetPartitionWithCreate(__int64 a1)
{
  _BYTE *v1; // rbx
  _BYTE *v2; // rsi
  __int64 Partition; // rax
  KIRQL v5; // bp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_BYTE **)(a1 + 8);
  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v1 )
    goto LABEL_10;
  Partition = CcCreatePartition();
  v1 = (_BYTE *)Partition;
  if ( Partition )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 768), &LockHandle);
    v5 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    if ( *(_QWORD *)(a1 + 8) )
    {
      v2 = v1;
      v1 = *(_BYTE **)(a1 + 8);
    }
    else
    {
      ++CcPartitionCount;
      *(_QWORD *)(a1 + 8) = v1;
      v1[1293] = 1;
      if ( PsReferencePartitionSafe(a1) )
        PsDereferencePartition(a1);
      else
        v1[1294] = 1;
    }
    KeReleaseSpinLock(&CcGlobalPartitionLock, v5);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v2 || (v2[1294] = 2, CcDeletePartition(v2), v1) )
    {
LABEL_10:
      if ( v1[1294] >= 2u )
        KeBugCheckEx(0x34u, 0x68FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
  }
  return v1;
}
