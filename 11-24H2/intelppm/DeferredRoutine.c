/*
 * XREFs of DeferredRoutine @ 0x1400063F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeferredRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  IoQueueWorkItem(*(PIO_WORKITEM *)(DeferredContext[31] + 1320LL), sub_1400285E0, CriticalWorkQueue, DeferredContext);
}
