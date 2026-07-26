/*
 * XREFs of NdisReleaseReadWriteLock @ 0x14005E510
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x140096270 (-ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __stdcall NdisReleaseReadWriteLock(PNDIS_RW_LOCK Lock, PLOCK_STATE LockState)
{
  __int64 v2; // rax
  int v4; // edx
  _NDIS_RW_LOCK_REFCOUNT *v5; // rax
  KIRQL OldIrql; // cl
  int v7; // edx

  v4 = LockState->LockState;
  if ( v4 == 3 )
  {
    if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      ndisReleaseReadLockSharedRefCnt(&Lock->SpinLock);
    }
    else
    {
      LODWORD(v2) = KeGetPcr()->Prcb.Number;
      if ( ndisMaxNumberOfProcessors > 0x40 )
        v5 = (_NDIS_RW_LOCK_REFCOUNT *)((char *)Lock->RefCount + 4 * v2);
      else
        v5 = &Lock->RefCount[v2];
      --v5->RefCount;
    }
    OldIrql = LockState->OldIrql;
    LockState->LockState = 255;
    if ( OldIrql < 2u )
      KeLowerIrql(OldIrql);
  }
  else
  {
    v7 = v4 - 4;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        Lock->Context = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&Lock->16);
        LockState->LockState = 255;
      }
    }
    else
    {
      LockState->LockState = 255;
      Lock->Context = 0LL;
      KeReleaseSpinLock(&Lock->SpinLock, LockState->OldIrql);
    }
  }
}
