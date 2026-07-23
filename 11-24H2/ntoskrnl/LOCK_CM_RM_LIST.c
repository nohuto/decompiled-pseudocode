/*
 * XREFs of LOCK_CM_RM_LIST @ 0x140A01674
 * Callers:
 *     CmpRunDownCmRM @ 0x140A00C70 (CmpRunDownCmRM.c)
 *     CmpIsCmRm @ 0x140A01338 (CmpIsCmRm.c)
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_CM_RM_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
}
