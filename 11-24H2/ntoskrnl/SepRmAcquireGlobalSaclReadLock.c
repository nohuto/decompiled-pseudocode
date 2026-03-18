/*
 * XREFs of SepRmAcquireGlobalSaclReadLock @ 0x140462E24
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x140462D6C (SepExamineGlobalSaclEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeExamineGlobalSacl @ 0x140889DD8 (SeExamineGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140889F14 (SepRmGlobalSaclFind.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x14088A310 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN SepRmAcquireGlobalSaclReadLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
}
