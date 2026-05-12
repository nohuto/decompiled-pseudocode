/*
 * XREFs of RaidPauseTimerDpcRoutine @ 0x140065B60
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeAdapterQueue @ 0x14000FA30 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x14000FD00 (RaidAdapterRestartQueues.c)
 */

void __fastcall RaidPauseTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( !(unsigned int)RaidResumeAdapterQueue(v4, 0, 0) )
    RaidAdapterRestartQueues(v4, 0);
}
