/*
 * XREFs of MiGetAvailablePagesExcludeSlists @ 0x1404772F4
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x1407D8A84 (MiAddPhysicalMemoryChunks.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesExcludeSlists(__int64 a1)
{
  return *(_QWORD *)(a1 + 18688);
}
