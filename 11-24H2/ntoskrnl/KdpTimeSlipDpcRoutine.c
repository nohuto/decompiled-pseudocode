/*
 * XREFs of KdpTimeSlipDpcRoutine @ 0x140B7A610
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall KdpTimeSlipDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedExchangeAdd(&KdpTimeSlipPending, 0xFFFFFFFF) > 1 )
    ExQueueWorkItem(&KdpTimeSlipWorkItem, DelayedWorkQueue);
}
