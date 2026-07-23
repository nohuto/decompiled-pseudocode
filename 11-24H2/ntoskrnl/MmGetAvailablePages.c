/*
 * XREFs of MmGetAvailablePages @ 0x140457738
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x1407B5590 (ExpQueryNumaAvailableMemory.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE2138 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E300C8 + a1) + 18688LL);
}
