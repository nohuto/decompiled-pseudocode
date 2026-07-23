/*
 * XREFs of LockRMLog @ 0x140A01F68
 * Callers:
 *     CmpStopRMLog @ 0x140A00A5C (CmpStopRMLog.c)
 *     CmpAccountForLogReservation @ 0x140A016A4 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x140A01E5C (CmpTransWriteLog.c)
 *     CmpStartRMLog @ 0x140AE7164 (CmpStartRMLog.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall LockRMLog(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
}
