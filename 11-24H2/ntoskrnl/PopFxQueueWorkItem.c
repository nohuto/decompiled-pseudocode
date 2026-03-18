/*
 * XREFs of PopFxQueueWorkItem @ 0x14029F7F4
 * Callers:
 *     PopFxQueueWorkOrder @ 0x14029F720 (PopFxQueueWorkOrder.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x140376270 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x14049CF90 (PopFxHandleReportDevicePoweredOn.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1402A0DCC (ExpTryQueueWorkItem.c)
 *     KeReleaseSemaphore @ 0x1403D91C0 (KeReleaseSemaphore.c)
 *     ExInterlockedInsertTailList @ 0x14042EC00 (ExInterlockedInsertTailList.c)
 */

LONG __fastcall PopFxQueueWorkItem(__int64 a1, struct _LIST_ENTRY *a2, char a3)
{
  LONG result; // eax

  if ( a3 || (result = ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a2, 48LL, 0LL), !(_BYTE)result) )
  {
    ExInterlockedInsertTailList((PLIST_ENTRY)(a1 + 16), a2, (PKSPIN_LOCK)(a1 + 8));
    return KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 32), 0, 1, 0);
  }
  return result;
}
