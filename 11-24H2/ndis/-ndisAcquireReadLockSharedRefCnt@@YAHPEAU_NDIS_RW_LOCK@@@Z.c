/*
 * XREFs of ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1400C2374
 * Callers:
 *     NdisAcquireReadWriteLock @ 0x140028D60 (NdisAcquireReadWriteLock.c)
 *     ?ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z @ 0x140028FA0 (-ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z.c)
 * Callees:
 *     ?IsReadLockAlreadyHeldByCurrentThread@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x14008C530 (-IsReadLockAlreadyHeldByCurrentThread@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

__int64 __fastcall ndisAcquireReadLockSharedRefCnt(struct _NDIS_RW_LOCK *SpinLock)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx

  if ( SpinLock->Context == KeGetCurrentThread() )
    return 0LL;
  v2 = qword_14011C938 + 520LL * KeGetPcr()->Prcb.Number;
  if ( (unsigned int)IsReadLockAlreadyHeldByCurrentThread(SpinLock) )
    return 0LL;
  while ( *(_BYTE *)(v3 + 28) )
    _mm_pause();
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 16));
  v5 = SpinLock->RefCountEx[2];
  SpinLock->RefCountEx[2] = v5 + 1;
  if ( !v5 )
    KeAcquireSpinLockAtDpcLevel(&SpinLock->SpinLock);
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&SpinLock->16);
  v6 = *(unsigned int *)(v2 + 512);
  result = 1LL;
  if ( (unsigned int)v6 < 0x40 )
  {
    *(_QWORD *)(v2 + 8 * v6) = SpinLock;
    ++*(_DWORD *)(v2 + 512);
  }
  return result;
}
