/*
 * XREFs of KeInitializeSemaphore @ 0x1404514E0
 * Callers:
 *     PopFxInitializeWorkPool @ 0x14074C390 (PopFxInitializeWorkPool.c)
 *     NtCreateSemaphore @ 0x14083A3C0 (NtCreateSemaphore.c)
 *     AlpcpInitializePort @ 0x140867D10 (AlpcpInitializePort.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
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
