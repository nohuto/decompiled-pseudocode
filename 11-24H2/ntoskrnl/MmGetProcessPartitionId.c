/*
 * XREFs of MmGetProcessPartitionId @ 0x14046FF78
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x1407B5140 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryChannelInformation @ 0x140A5A018 (ExpQueryChannelInformation.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE0850 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1198);
}
