/*
 * XREFs of ?VidMmDelayedEvictionDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x14004CC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmDelayedEvictionDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(*((_QWORD *)DeferredContext + 3) + 4992LL), CriticalWorkQueue);
  _InterlockedExchange((volatile __int32 *)DeferredContext + 11218, 0);
}
