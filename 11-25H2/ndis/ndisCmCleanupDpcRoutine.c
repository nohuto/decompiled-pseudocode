/*
 * XREFs of ndisCmCleanupDpcRoutine @ 0x1400CF320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisCmCleanupDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedCompareExchange(&dword_140127194, 1, 0) )
    ExQueueWorkItem(&stru_140126A38, CustomPriorityWorkQueue|BackgroundWorkQueue|0x8);
}
