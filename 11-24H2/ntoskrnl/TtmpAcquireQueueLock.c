/*
 * XREFs of TtmpAcquireQueueLock @ 0x140770CE8
 * Callers:
 *     TtmiWriteEventToAllQueues @ 0x14076A34C (TtmiWriteEventToAllQueues.c)
 *     TtmiRetrieveEventFromQueue @ 0x140770A58 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140770BA4 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall TtmpAcquireQueueLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
}
