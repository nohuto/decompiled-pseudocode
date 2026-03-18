/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x1409A7190
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1403BC880 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1403BC9C0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1404701FC (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x14047C610 (ExpDeleteWorkerFactory.c)
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x1409A71B0 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoFreeMiniCompletionPacket(ULONG_PTR a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  return IopFreeMiniCompletionPacket(a1);
}
