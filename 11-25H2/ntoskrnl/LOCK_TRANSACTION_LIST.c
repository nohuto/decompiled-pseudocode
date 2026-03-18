/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x140885DE8
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14047F774 (CmpTransEnlistUowInCmTrans.c)
 *     CmObliterateRMTxArray @ 0x1407CE88C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1407CE980 (CmpLazyCommitWorker.c)
 *     CmSnapshotRMTxArray @ 0x140863EA8 (CmSnapshotRMTxArray.c)
 *     CmpRunDownCmRM @ 0x140865B50 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 *     CmpTransMgrPrepare @ 0x14086632C (CmpTransMgrPrepare.c)
 *     CmpCleanupTransactionState @ 0x1408666A8 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x140866C54 (CmpLogCheckpoint.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408671C0 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x140867280 (CmpTransMgrRollback.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408705D4 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x140885A48 (CmpTransSearchAddTrans.c)
 *     CmpRundownUnitOfWork @ 0x140885C90 (CmpRundownUnitOfWork.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1409D9388 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1409D9524 (CmpPrepareLightWeightTransaction.c)
 *     CmpTransInitializeTransaction @ 0x140A8174C (CmpTransInitializeTransaction.c)
 *     CmRmFinalizeRecovery @ 0x140AA384C (CmRmFinalizeRecovery.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
