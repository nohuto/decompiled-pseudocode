/*
 * XREFs of HalpAllocPhysicalMemoryEx @ 0x140C69568
 * Callers:
 *     HalpIommuAllocateAndZeroPageTable @ 0x14039A69C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAcpiAllocateMemory @ 0x14053A9C0 (HalpAcpiAllocateMemory.c)
 *     HalpAllocateEarlyPages @ 0x140540400 (HalpAllocateEarlyPages.c)
 *     HalpMmAllocateAndInsertPageTablePage @ 0x140540574 (HalpMmAllocateAndInsertPageTablePage.c)
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D6D4 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSocApiAllocatePhysicalMemory @ 0x14055F2A0 (HalpSocApiAllocatePhysicalMemory.c)
 *     HalpAllocPhysicalMemory @ 0x140BE0BF0 (HalpAllocPhysicalMemory.c)
 *     HalpDmaInitMemory @ 0x140C128E8 (HalpDmaInitMemory.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140C14C34 (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140C14D30 (HalpBlkAllocatePageTablePage.c)
 *     HalpSetupAcpiPhase0 @ 0x140C157FC (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpMap @ 0x140460358 (HalpMap.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpAllocPhysicalMemoryInternal @ 0x140C69650 (HalpAllocPhysicalMemoryInternal.c)
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
      v10 = (void *)HalpMap(v9, 1LL, 1uLL, 0, 4u, a5);
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
