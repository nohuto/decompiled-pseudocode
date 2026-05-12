/*
 * XREFs of RaidUnitRestartQueueDpcRoutine @ 0x1400A05A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 */

void __fastcall RaidUnitRestartQueueDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  RaidUnitRestartQueue(DeferredContext[8], 0);
}
