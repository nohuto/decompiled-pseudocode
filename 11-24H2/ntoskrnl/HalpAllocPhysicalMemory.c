/*
 * XREFs of HalpAllocPhysicalMemory @ 0x140BE0BF0
 * Callers:
 *     HalpAllocateScratchMemory @ 0x140B774B0 (HalpAllocateScratchMemory.c)
 * Callees:
 *     HalpAllocPhysicalMemoryEx @ 0x140C69568 (HalpAllocPhysicalMemoryEx.c)
 */

__int64 __fastcall HalpAllocPhysicalMemory(int a1, int a2, int a3, int a4)
{
  return HalpAllocPhysicalMemoryEx(a1, a2, a3, a4, 0LL);
}
