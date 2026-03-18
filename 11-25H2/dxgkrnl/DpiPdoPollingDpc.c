/*
 * XREFs of DpiPdoPollingDpc @ 0x14008C560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoPollingDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange(&dword_14015DFD8, 1) )
    IoQueueWorkItem(qword_14015DFD0, DpiPdoPollingWorkItem, DelayedWorkQueue, 0LL);
}
