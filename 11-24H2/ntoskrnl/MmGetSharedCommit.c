/*
 * XREFs of MmGetSharedCommit @ 0x14046FD14
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE0850 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetSharedCommit()
{
  return qword_140E3D8B8;
}
