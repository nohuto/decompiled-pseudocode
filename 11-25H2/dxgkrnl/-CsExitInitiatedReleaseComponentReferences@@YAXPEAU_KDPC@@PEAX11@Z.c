/*
 * XREFs of ?CsExitInitiatedReleaseComponentReferences@@YAXPEAU_KDPC@@PEAX11@Z @ 0x140059CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CsExitInitiatedReleaseComponentReferences(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 2000), CriticalWorkQueue);
}
