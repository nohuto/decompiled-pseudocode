/*
 * XREFs of DpiPdoPollingDpc @ 0x14008D520
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
  if ( !_InterlockedExchange(&dword_140160F98, 1) )
    IoQueueWorkItem(qword_140160F90, DpiPdoPollingWorkItem, DelayedWorkQueue, 0LL);
}
