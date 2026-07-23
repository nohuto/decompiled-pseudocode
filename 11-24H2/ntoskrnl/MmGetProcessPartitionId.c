/*
 * XREFs of MmGetProcessPartitionId @ 0x14046A3A0
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x1407B5590 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryChannelInformation @ 0x140A518D8 (ExpQueryChannelInformation.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE2138 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1198);
}
