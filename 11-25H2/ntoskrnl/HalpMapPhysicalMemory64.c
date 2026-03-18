/*
 * XREFs of HalpMapPhysicalMemory64 @ 0x14041270C
 * Callers:
 *     HalpCheckLowMemoryPreSleep @ 0x140B3E8F8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140B5B574 (HalpCheckLowMemoryPostSleep.c)
 *     HalpAllocateScratchMemory @ 0x140B654B0 (HalpAllocateScratchMemory.c)
 * Callees:
 *     HalpMap @ 0x140412738 (HalpMap.c)
 */

__int64 __fastcall HalpMapPhysicalMemory64(int a1, int a2, char a3, int a4)
{
  int v5; // [rsp+20h] [rbp-18h]

  v5 = a4;
  LOBYTE(a4) = a3;
  return HalpMap(a1, a2, 1, a4, v5, 0LL);
}
