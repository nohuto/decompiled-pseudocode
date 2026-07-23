/*
 * XREFs of PopFxQueueWorkItem @ 0x1403AA2B4
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403A65A0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxQueueWorkOrder @ 0x1403AA1E0 (PopFxQueueWorkOrder.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x140497CE0 (PopFxHandleReportDevicePoweredOn.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     ExpTryQueueWorkItem @ 0x1403AB6FC (ExpTryQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x140420930 (ExInterlockedInsertTailList.c)
 */

LONG __fastcall PopFxQueueWorkItem(__int64 a1, _LIST_ENTRY *a2, char a3)
{
  LONG result; // eax

  if ( a3 || (result = ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a2, 48LL), !(_BYTE)result) )
  {
    ExInterlockedInsertTailList((PLIST_ENTRY)(a1 + 16), a2, (PKSPIN_LOCK)(a1 + 8));
    return KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 32), 0, 1, 0);
  }
  return result;
}
