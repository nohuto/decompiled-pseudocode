/*
 * XREFs of ndisCmCleanupDpcRoutine @ 0x1400C8210
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
  if ( !_InterlockedCompareExchange(&dword_14011D0E8, 1, 0) )
    ExQueueWorkItem(&stru_14011C9F8, CustomPriorityWorkQueue|BackgroundWorkQueue|0x8);
}
