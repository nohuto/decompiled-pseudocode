/*
 * XREFs of SepRmAcquireGlobalSaclReadLock @ 0x140458434
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14045837C (SepExamineGlobalSaclEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeExamineGlobalSacl @ 0x14088DC88 (SeExamineGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x14088DDC4 (SepRmGlobalSaclFind.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x14088E1C0 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN SepRmAcquireGlobalSaclReadLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
}
