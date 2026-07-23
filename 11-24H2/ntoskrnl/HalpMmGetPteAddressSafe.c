/*
 * XREFs of HalpMmGetPteAddressSafe @ 0x140540784
 * Callers:
 *     HalpMap @ 0x140460358 (HalpMap.c)
 *     HalpMmReservePageTablePages @ 0x1405408AC (HalpMmReservePageTablePages.c)
 *     HalpReserveHalPtes @ 0x140C10408 (HalpReserveHalPtes.c)
 * Callees:
 *     HalpMmAllocateAndInsertPageTablePage @ 0x140540574 (HalpMmAllocateAndInsertPageTablePage.c)
 */

__int64 __fastcall HalpMmGetPteAddressSafe(unsigned __int64 a1)
{
  __int64 v1; // rdi
  _BYTE *v3; // rcx
  _BYTE *v4; // rcx
  _BYTE *v5; // rcx

  v1 = a1 + 4096;
  if ( (unsigned int)(HalpAllocationDescriptorArraySize - HalpUsedAllocDescriptors) > 4 )
    v1 = 0LL;
  v3 = (_BYTE *)(8 * ((a1 >> 39) & 0x1FF) - 0x90482413000LL);
  if ( ((*v3 & 1) != 0 || HalpMmAllocateAndInsertPageTablePage(v3, v1))
    && ((v4 = (_BYTE *)(8 * ((a1 >> 30) & 0x3FFFF) - 0x90482600000LL), (*v4 & 1) != 0)
     || HalpMmAllocateAndInsertPageTablePage(v4, v1))
    && ((v5 = (_BYTE *)(8 * ((a1 >> 21) & 0x7FFFFFF) - 0x904C0000000LL), (*v5 & 1) != 0)
     || HalpMmAllocateAndInsertPageTablePage(v5, v1)) )
  {
    return 8 * ((a1 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  }
  else
  {
    return 0LL;
  }
}
