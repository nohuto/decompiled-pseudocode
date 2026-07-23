/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x14087F02C
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14047B08C (CmpTransEnlistUowInCmTrans.c)
 *     CmObliterateRMTxArray @ 0x1407DE59C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1407DE690 (CmpLazyCommitWorker.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14087D418 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x14087E39C (CmpTransSearchAddTrans.c)
 *     CmpRundownUnitOfWork @ 0x14087EED4 (CmpRundownUnitOfWork.c)
 *     CmSnapshotRMTxArray @ 0x140963404 (CmSnapshotRMTxArray.c)
 *     CmpTransInitializeTransaction @ 0x140A00648 (CmpTransInitializeTransaction.c)
 *     CmpRunDownCmRM @ 0x140A00C70 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x140A00E10 (CmKtmNotification.c)
 *     CmpTransMgrPrepare @ 0x140A013B8 (CmpTransMgrPrepare.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x140A022E4 (CmpLogCheckpoint.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A028D0 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x140A02990 (CmpTransMgrRollback.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A02BD0 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A02D6C (CmpPrepareLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x140AA3958 (CmRmFinalizeRecovery.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
