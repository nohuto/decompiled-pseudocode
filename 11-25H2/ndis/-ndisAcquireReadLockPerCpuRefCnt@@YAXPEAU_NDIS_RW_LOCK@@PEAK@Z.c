/*
 * XREFs of ?ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z @ 0x14005F810
 * Callers:
 *     NdisAcquireReadWriteLock @ 0x1400489C0 (NdisAcquireReadWriteLock.c)
 *     ?ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z @ 0x140048C00 (-ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAcquireReadLockPerCpuRefCnt(PKSPIN_LOCK SpinLock, unsigned int *a2)
{
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  ++*a2;
  _InterlockedOr(v4, 0);
  if ( !KeTestSpinLock(SpinLock) && *a2 == 1 && (struct _KTHREAD *)SpinLock[1] != KeGetCurrentThread() )
  {
    *a2 = 0;
    KeAcquireSpinLockAtDpcLevel(SpinLock);
    ++*a2;
    KeReleaseSpinLockFromDpcLevel(SpinLock);
  }
}
