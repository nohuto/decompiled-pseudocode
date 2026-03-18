/*
 * XREFs of MmGetAvailablePages @ 0x140462A9C
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x1407A5D70 (ExpQueryNumaAvailableMemory.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AD1640 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + a1) + 18688LL);
}
