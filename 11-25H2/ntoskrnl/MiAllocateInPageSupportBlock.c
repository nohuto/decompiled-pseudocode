/*
 * XREFs of MiAllocateInPageSupportBlock @ 0x140470F60
 * Callers:
 *     MiInitializePageFaultResources @ 0x14066CCBC (MiInitializePageFaultResources.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 */

__int64 __fastcall MiAllocateInPageSupportBlock(int a1, unsigned int a2)
{
  return MiAllocatePool(0x40uLL, a2 * ((-(__int64)(a1 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368), 1850305869);
}
