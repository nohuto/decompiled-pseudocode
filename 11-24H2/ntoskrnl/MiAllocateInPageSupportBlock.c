/*
 * XREFs of MiAllocateInPageSupportBlock @ 0x14046F504
 * Callers:
 *     MiInitializePageFaultResources @ 0x1406785C8 (MiInitializePageFaultResources.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 */

__int64 __fastcall MiAllocateInPageSupportBlock(int a1, unsigned int a2)
{
  return MiAllocatePool(0x40uLL, a2 * ((-(__int64)(a1 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368), 1850305869);
}
