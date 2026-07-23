/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x140990660
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140409280 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14042AA30 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14046A624 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x140477820 (ExpDeleteWorkerFactory.c)
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x140990680 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoFreeMiniCompletionPacket(ULONG_PTR a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  return IopFreeMiniCompletionPacket(a1);
}
