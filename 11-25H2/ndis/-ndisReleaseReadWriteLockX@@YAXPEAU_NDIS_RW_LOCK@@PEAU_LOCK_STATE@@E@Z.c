/*
 * XREFs of ?ndisReleaseReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@PEAU_LOCK_STATE@@E@Z @ 0x14005E930
 * Callers:
 *     NdisDprReleaseReadWriteLock @ 0x1400C9680 (NdisDprReleaseReadWriteLock.c)
 * Callees:
 *     ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x140096270 (-ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __fastcall ndisReleaseReadWriteLockX(struct _NDIS_RW_LOCK *a1, struct _LOCK_STATE *a2, char a3)
{
  __int64 v3; // rax
  int LockState; // edx
  _NDIS_RW_LOCK_REFCOUNT *v7; // rax
  KIRQL OldIrql; // cl
  int v9; // edx

  LockState = a2->LockState;
  if ( LockState == 3 )
  {
    if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      ndisReleaseReadLockSharedRefCnt(&a1->SpinLock);
    }
    else
    {
      LODWORD(v3) = KeGetPcr()->Prcb.Number;
      if ( ndisMaxNumberOfProcessors > 0x40 )
        v7 = (_NDIS_RW_LOCK_REFCOUNT *)((char *)a1->RefCount + 4 * v3);
      else
        v7 = &a1->RefCount[v3];
      --v7->RefCount;
    }
    a2->LockState = 255;
    if ( !a3 )
    {
      OldIrql = a2->OldIrql;
      if ( OldIrql < 2u )
        KeLowerIrql(OldIrql);
    }
  }
  else
  {
    v9 = LockState - 4;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        a1->Context = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&a1->16);
        a2->LockState = 255;
      }
    }
    else
    {
      a2->LockState = 255;
      a1->Context = 0LL;
      if ( a3 )
        KeReleaseSpinLockFromDpcLevel(&a1->SpinLock);
      else
        KeReleaseSpinLock(&a1->SpinLock, a2->OldIrql);
    }
  }
}
