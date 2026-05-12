/*
 * XREFs of RaidAdapterRestartDpcRoutine @ 0x14005E280
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterRestartQueues @ 0x14000FD00 (RaidAdapterRestartQueues.c)
 */

void __fastcall RaidAdapterRestartDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  RaidAdapterRestartQueues(DeferredContext[8], 0);
}
