/*
 * XREFs of KeInitializeSemaphore @ 0x14045C140
 * Callers:
 *     PopFxInitializeWorkPool @ 0x14074E060 (PopFxInitializeWorkPool.c)
 *     NtCreateSemaphore @ 0x14083DDC0 (NtCreateSemaphore.c)
 *     AlpcpInitializePort @ 0x140863700 (AlpcpInitializePort.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
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
