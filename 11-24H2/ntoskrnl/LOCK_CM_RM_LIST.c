/*
 * XREFs of LOCK_CM_RM_LIST @ 0x140A05144
 * Callers:
 *     CmpRunDownCmRM @ 0x140A04740 (CmpRunDownCmRM.c)
 *     CmpIsCmRm @ 0x140A04E08 (CmpIsCmRm.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_CM_RM_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
}
