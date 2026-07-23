/*
 * XREFs of CmpDoQueueSystemHiveHysteresis @ 0x1407D275C
 * Callers:
 *     CmRegisterSystemHiveLimitCallback @ 0x1407D264C (CmRegisterSystemHiveLimitCallback.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x140A52C44 (CmpUpdateSystemHiveHysteresis.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char __fastcall CmpDoQueueSystemHiveHysteresis(int a1)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x20204D43u);
  if ( Pool2 )
  {
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpSystemHiveHysteresisWorker;
    CmpSystemHiveHysteresisHitRatio = a1;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
    LOBYTE(Pool2) = 1;
  }
  return (char)Pool2;
}
