/*
 * XREFs of HalpAllocPhysicalMemory @ 0x140BDEBF0
 * Callers:
 *     HalpAllocateScratchMemory @ 0x140B754B0 (HalpAllocateScratchMemory.c)
 * Callees:
 *     HalpAllocPhysicalMemoryEx @ 0x140C673EC (HalpAllocPhysicalMemoryEx.c)
 */

__int64 __fastcall HalpAllocPhysicalMemory(int a1, int a2, int a3, int a4)
{
  return HalpAllocPhysicalMemoryEx(a1, a2, a3, a4, 0LL);
}
