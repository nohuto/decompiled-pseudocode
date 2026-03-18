/*
 * XREFs of HalpAllocPhysicalMemoryEx @ 0x140C55764
 * Callers:
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404D2F18 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAcpiAllocateMemory @ 0x14053A890 (HalpAcpiAllocateMemory.c)
 *     HalpAllocateEarlyPages @ 0x140540280 (HalpAllocateEarlyPages.c)
 *     HalpMmAllocateAndInsertPageTablePage @ 0x1405403F4 (HalpMmAllocateAndInsertPageTablePage.c)
 *     HalpMmAllocateMemoryInternal @ 0x1405404A0 (HalpMmAllocateMemoryInternal.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D1A4 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSocApiAllocatePhysicalMemory @ 0x14055ED70 (HalpSocApiAllocatePhysicalMemory.c)
 *     HalpAllocPhysicalMemory @ 0x140BCDBF0 (HalpAllocPhysicalMemory.c)
 *     HalpDmaInitMemory @ 0x140BFF824 (HalpDmaInitMemory.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140C01BA4 (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140C01CA0 (HalpBlkAllocatePageTablePage.c)
 *     HalpSetupAcpiPhase0 @ 0x140C0276C (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpMap @ 0x140412738 (HalpMap.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HalpAllocPhysicalMemoryInternal @ 0x140C5584C (HalpAllocPhysicalMemoryInternal.c)
 */

__int64 __fastcall HalpAllocPhysicalMemoryEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __int64 v9; // rax
  void *v10; // rax
  void *v11; // rbx

  if ( (unsigned int)(HalpAllocationDescriptorArraySize - HalpUsedAllocDescriptors) <= 4 && !HalpDescriptorPoolLow )
  {
    HalpDescriptorPoolLow = 1;
    v9 = HalpAllocPhysicalMemoryInternal(a1, 0LL, 1LL, 0LL);
    if ( v9 )
    {
      v10 = (void *)HalpMap(v9, 1u, 1u, 0, 4u, a5);
      v11 = v10;
      if ( v10 )
      {
        memset_0(v10, 0, 0x1000uLL);
        HalpUsedAllocDescriptors = 0;
        HalpAllocationDescriptorArray = v11;
        HalpAllocationDescriptorArraySize = 85;
        HalpDescriptorPoolLow = 0;
      }
    }
  }
  return HalpAllocPhysicalMemoryInternal(a1, a2, a3, a4);
}
