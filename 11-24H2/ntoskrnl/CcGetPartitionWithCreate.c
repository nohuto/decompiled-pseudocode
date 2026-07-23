/*
 * XREFs of CcGetPartitionWithCreate @ 0x1404D8560
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcCreatePartition @ 0x140579AF0 (CcCreatePartition.c)
 *     CcDeletePartition @ 0x140579B7C (CcDeletePartition.c)
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
