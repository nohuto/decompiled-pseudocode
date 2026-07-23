/*
 * XREFs of TtmpScheduledEvaluationDpc @ 0x1405E1CF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall TtmpScheduledEvaluationDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedExchange((volatile __int32 *)DeferredContext + 62, 1) )
    ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 216), DelayedWorkQueue);
}
