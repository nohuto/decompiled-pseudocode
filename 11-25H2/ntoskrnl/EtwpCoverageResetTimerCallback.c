/*
 * XREFs of EtwpCoverageResetTimerCallback @ 0x1406438F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void __fastcall EtwpCoverageResetTimerCallback(__int64 a1, __int64 a2)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 8), 1, 0) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 408), NormalWorkQueue);
}
