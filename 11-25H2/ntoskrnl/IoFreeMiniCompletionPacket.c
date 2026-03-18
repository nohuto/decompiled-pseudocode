/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x1409A6C50
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140304090 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140419F10 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x140472B58 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x14047B6F0 (ExpDeleteWorkerFactory.c)
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x1409A6C70 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoFreeMiniCompletionPacket(ULONG_PTR a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  return IopFreeMiniCompletionPacket(a1);
}
