/*
 * XREFs of ExTryQueueWorkItem @ 0x140282120
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x140356360 (PopFxHandleReportDevicePoweredOn.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x140358230 (PopHandleDevicePowerIrpCompletion.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x14028214C (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}
