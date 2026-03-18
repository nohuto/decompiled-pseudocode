/*
 * XREFs of MiGetAvailablePagesExcludeSlists @ 0x140477508
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x1407E8944 (MiAddPhysicalMemoryChunks.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesExcludeSlists(__int64 a1)
{
  return *(_QWORD *)(a1 + 18688);
}
