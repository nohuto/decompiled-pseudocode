/*
 * XREFs of SshpAlpcOpenGracePeriodTimerCallback @ 0x1405E1CC0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall SshpAlpcOpenGracePeriodTimerCallback(__int64 a1, int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&unk_140F05F28 + 6 * a2, DelayedWorkQueue);
}
