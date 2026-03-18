/*
 * XREFs of SshpAlpcOpenGracePeriodTimerCallback @ 0x1405E47A0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall SshpAlpcOpenGracePeriodTimerCallback(__int64 a1, int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&unk_140F05C48 + 6 * a2, DelayedWorkQueue);
}
