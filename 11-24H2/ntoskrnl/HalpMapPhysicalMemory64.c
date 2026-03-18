/*
 * XREFs of HalpMapPhysicalMemory64 @ 0x140478C30
 * Callers:
 *     HalpCheckLowMemoryPreSleep @ 0x140B4E8F8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140B6B074 (HalpCheckLowMemoryPostSleep.c)
 *     HalpAllocateScratchMemory @ 0x140B754B0 (HalpAllocateScratchMemory.c)
 * Callees:
 *     HalpMap @ 0x140478C5C (HalpMap.c)
 */

__int64 __fastcall HalpMapPhysicalMemory64(int a1, int a2, char a3, int a4)
{
  int v5; // [rsp+20h] [rbp-18h]

  v5 = a4;
  LOBYTE(a4) = a3;
  return HalpMap(a1, a2, 1, a4, v5, 0LL);
}
