/*
 * XREFs of ?ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z @ 0x140048C00
 * Callers:
 *     NdisDprAcquireReadWriteLock @ 0x1400C9660 (NdisDprAcquireReadWriteLock.c)
 * Callees:
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x140048E80 (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x140048F20 (-ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z.c)
 *     ?ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z @ 0x14005F810 (-ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z.c)
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1400C95A4 (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __fastcall ndisAcquireReadWriteLockX(struct _NDIS_RW_LOCK *a1, char a2, struct _LOCK_STATE *a3, char a4)
{
  __int16 v6; // si
  __int64 v7; // rax
  _NDIS_RW_LOCK_REFCOUNT *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // rsi
  unsigned int RefCount; // r13d
  __int64 v13; // rbx
  __int64 v14; // r14
  signed __int32 v15[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( a2 )
  {
    a3->LockState = 1;
    if ( a1->Context == KeGetCurrentThread() )
    {
      a3->LockState = 2;
    }
    else if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      if ( !a4 )
        a3->OldIrql = KfRaiseIrql(2u);
      if ( (unsigned int)ndisAcquireWriteLockSharedRefCnt(a1) )
        a3->LockState = 4;
      else
        a3->LockState = 5;
    }
    else
    {
      if ( a4 )
        KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
      else
        a3->OldIrql = KeAcquireSpinLockRaiseToDpc(&a1->SpinLock);
      LODWORD(v9) = KeGetPcr()->Prcb.Number;
      if ( ndisMaxNumberOfProcessors > 0x40 )
      {
        ndisAcquireWriteLockPerCpuRefCnt(a1, (unsigned int *)&a1->16 + v9, 4uLL);
      }
      else
      {
        v10 = 2 * ((unsigned int)v9 + 1LL);
        v11 = 0LL;
        RefCount = a1->RefCount[(unsigned int)v9].RefCount;
        v13 = 64LL;
        a1->RefCount[(unsigned int)v9].RefCount = 0;
        do
        {
          v14 = 4 * (v11 >> 2);
          while ( *(_DWORD *)&a1->RefCount[0].cacheLine[v14] )
            KeStallExecutionProcessor(1u);
          v11 += 16LL;
          --v13;
        }
        while ( v13 );
        *((_DWORD *)&a1->SpinLock + 2 * v10) = RefCount;
      }
      a3->LockState = 4;
      a1->Context = KeGetCurrentThread();
    }
  }
  else
  {
    HIBYTE(v6) = 0;
    a3->LockState = 0;
    if ( !a4 )
      a3->OldIrql = KfRaiseIrql(2u);
    v7 = ndisMaxNumberOfProcessors;
    if ( ndisMaxNumberOfProcessors > 0x40 )
    {
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        LOBYTE(v6) = (unsigned int)ndisAcquireReadLockSharedRefCnt(&a1->SpinLock) != 0;
        a3->LockState = v6 + 2;
      }
      else
      {
        LODWORD(v7) = KeGetPcr()->Prcb.Number;
        ndisAcquireReadLockPerCpuRefCnt(&a1->SpinLock, (unsigned int *)&a1->16 + v7);
        a3->LockState = 3;
      }
    }
    else
    {
      v8 = &a1->RefCount[KeGetPcr()->Prcb.Number];
      ++v8->RefCount;
      _InterlockedOr(v15, 0);
      if ( !KeTestSpinLock(&a1->SpinLock) && v8->RefCount == 1 && a1->Context != KeGetCurrentThread() )
      {
        v8->RefCount = 0;
        KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
        ++v8->RefCount;
        KeReleaseSpinLockFromDpcLevel(&a1->SpinLock);
      }
      a3->LockState = 3;
    }
  }
}
