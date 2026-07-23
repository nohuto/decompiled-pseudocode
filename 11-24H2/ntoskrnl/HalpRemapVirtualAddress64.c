/*
 * XREFs of HalpRemapVirtualAddress64 @ 0x14047C7B8
 * Callers:
 *     HalpReadWriteWheaPhysicalMemory @ 0x140560EB0 (HalpReadWriteWheaPhysicalMemory.c)
 *     HalpBlkAddVirtualMapping @ 0x140C14AF0 (HalpBlkAddVirtualMapping.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpRemapVirtualAddress64(unsigned __int64 a1, __int64 a2, char a3)
{
  *(_QWORD *)(8 * ((a1 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = 0LL;
  __invlpg((void *)a1);
  *(_QWORD *)(8 * ((a1 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = a2 & 0xFFFFFFFFFF000LL | (a3 != 0
                                                                                            ? 0x800000000000001BuLL
                                                                                            : 0x8000000000000003uLL);
  return a1;
}
