/*
 * XREFs of MmGetProcessPartitionId @ 0x140471A98
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x1407A5D70 (ExpQueryNumaAvailableMemory.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     ExpQueryChannelInformation @ 0x140A56784 (ExpQueryChannelInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AD1640 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1198);
}
