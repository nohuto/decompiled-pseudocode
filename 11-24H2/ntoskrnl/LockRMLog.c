/*
 * XREFs of LockRMLog @ 0x140A05A38
 * Callers:
 *     CmpStopRMLog @ 0x140A0452C (CmpStopRMLog.c)
 *     CmpAccountForLogReservation @ 0x140A05174 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x140A05204 (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x140A0592C (CmpTransWriteLog.c)
 *     CmpStartRMLog @ 0x140AE5884 (CmpStartRMLog.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall LockRMLog(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
}
