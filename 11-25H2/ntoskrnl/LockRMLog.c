/*
 * XREFs of LockRMLog @ 0x1408668D8
 * Callers:
 *     CmpAccountForLogReservation @ 0x140866618 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x1408666A8 (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x1408667CC (CmpTransWriteLog.c)
 *     CmpStopRMLog @ 0x140A843A4 (CmpStopRMLog.c)
 *     CmpStartRMLog @ 0x140AD49C8 (CmpStartRMLog.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall LockRMLog(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
}
