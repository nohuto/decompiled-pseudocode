/*
 * XREFs of RaidUnitPauseTimerDpcRoutine @ 0x140001010
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeUnitQueue @ 0x140001948 (RaidResumeUnitQueue.c)
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 */

void __fastcall RaidUnitPauseTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( (unsigned int)RaidResumeUnitQueue(v4, DeferredContext, SystemArgument1, SystemArgument2) )
    RaidUnitRestartQueue(v4, 0LL);
}
