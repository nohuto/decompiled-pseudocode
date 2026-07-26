/*
 * XREFs of ?IsReadLockAlreadyHeldByCurrentThread@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x140097CE0
 * Callers:
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x140048E80 (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1400C95A4 (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsReadLockAlreadyHeldByCurrentThread(struct _NDIS_RW_LOCK *a1)
{
  __int64 v1; // rax
  __int64 i; // rdx

  v1 = qword_140126978 + 520LL * KeGetPcr()->Prcb.Number;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v1 + 512); i = (unsigned int)(i + 1) )
  {
    if ( a1 == *(struct _NDIS_RW_LOCK **)(v1 + 8 * i) )
      return 1LL;
  }
  return 0LL;
}
