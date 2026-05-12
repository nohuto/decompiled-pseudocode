/*
 * XREFs of RaidQueueWaitCheckDpcRoutine @ 0x140066440
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterCheckWaitTimeout @ 0x140058F80 (RaidAdapterCheckWaitTimeout.c)
 */

void __fastcall RaidQueueWaitCheckDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rcx

  v4 = DeferredContext[8];
  if ( v4 && *(_DWORD *)v4 == 1094997074 && *(_DWORD *)(v4 + 88) != 5 )
    RaidAdapterCheckWaitTimeout((KSPIN_LOCK *)v4);
}
