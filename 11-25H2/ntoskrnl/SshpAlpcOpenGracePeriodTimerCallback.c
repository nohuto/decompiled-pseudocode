/*
 * XREFs of SshpAlpcOpenGracePeriodTimerCallback @ 0x1405D8850
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void __fastcall SshpAlpcOpenGracePeriodTimerCallback(__int64 a1, int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&unk_140F05828 + 6 * a2, DelayedWorkQueue);
}
