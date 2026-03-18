/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x14087B17C
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14048052C (CmpTransEnlistUowInCmTrans.c)
 *     CmObliterateRMTxArray @ 0x1407DE04C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1407DE140 (CmpLazyCommitWorker.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408790E8 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x14087A4F0 (CmpTransSearchAddTrans.c)
 *     CmpRundownUnitOfWork @ 0x14087B024 (CmpRundownUnitOfWork.c)
 *     CmSnapshotRMTxArray @ 0x14097ABF4 (CmSnapshotRMTxArray.c)
 *     CmpTransInitializeTransaction @ 0x140A04118 (CmpTransInitializeTransaction.c)
 *     CmpRunDownCmRM @ 0x140A04740 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 *     CmpTransMgrPrepare @ 0x140A04E88 (CmpTransMgrPrepare.c)
 *     CmpCleanupTransactionState @ 0x140A05204 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x140A05DB4 (CmpLogCheckpoint.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A063A0 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x140A06460 (CmpTransMgrRollback.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A066A0 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A0683C (CmpPrepareLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x140AA88D4 (CmRmFinalizeRecovery.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
