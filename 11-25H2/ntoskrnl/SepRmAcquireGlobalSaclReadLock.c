/*
 * XREFs of SepRmAcquireGlobalSaclReadLock @ 0x1402053DC
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14020540C (SepExamineGlobalSaclEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeExamineGlobalSacl @ 0x14092EC88 (SeExamineGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140A08700 (SepRmGlobalSaclFind.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140A6A02C (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN SepRmAcquireGlobalSaclReadLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
}
