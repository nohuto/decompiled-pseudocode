/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x140A4D108
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14048052C (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x14087B024 (CmpRundownUnitOfWork.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 */

void UNLOCK_TRANSACTION_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
}
