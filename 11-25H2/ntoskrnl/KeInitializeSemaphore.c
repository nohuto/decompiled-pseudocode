/*
 * XREFs of KeInitializeSemaphore @ 0x14045D6B0
 * Callers:
 *     PopFxInitializeWorkPool @ 0x140741F90 (PopFxInitializeWorkPool.c)
 *     NtCreateSemaphore @ 0x14089F4E0 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     AlpcpInitializePort @ 0x1409E024C (AlpcpInitializePort.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit)
{
  Semaphore->Header.Type = 5;
  Semaphore->Header.Size = 8;
  Semaphore->Header.SignalState = Count;
  Semaphore->Header.WaitListHead.Blink = &Semaphore->Header.WaitListHead;
  Semaphore->Header.WaitListHead.Flink = &Semaphore->Header.WaitListHead;
  Semaphore->Limit = Limit;
}
