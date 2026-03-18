/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x1405404A0
 * Callers:
 *     HalSocRequestApi @ 0x1404AD34C (HalSocRequestApi.c)
 *     HalpIommuAddDebuggerException @ 0x1404D0D80 (HalpIommuAddDebuggerException.c)
 *     HalpInitializeTimers @ 0x140537E60 (HalpInitializeTimers.c)
 *     HalpMmAllocateMemory @ 0x140540484 (HalpMmAllocateMemory.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1405405B8 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpInterruptInitializeIpis @ 0x140541DC0 (HalpInterruptInitializeIpis.c)
 *     HalpExtRegisterResourceDescriptor @ 0x14054A620 (HalpExtRegisterResourceDescriptor.c)
 *     HalpRegisterDmaController @ 0x1405508F8 (HalpRegisterDmaController.c)
 *     HalpIommuProcessReservationsInternal @ 0x140551BC0 (HalpIommuProcessReservationsInternal.c)
 *     HalpInterruptParseMadt @ 0x140554134 (HalpInterruptParseMadt.c)
 *     EmonAllocateCounters @ 0x1405583AC (EmonAllocateCounters.c)
 *     ExtEnvAllocateMemory @ 0x14055D130 (ExtEnvAllocateMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x14055D5D0 (HalRegisterPermanentAddressUsage.c)
 *     HalpTimerRegister @ 0x14055D78C (HalpTimerRegister.c)
 *     HalpInterruptRegisterController @ 0x1405601C0 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x140560680 (HalpInterruptRegisterLine.c)
 *     HalpIommuCreateDmarPageTable @ 0x140564CBC (HalpIommuCreateDmarPageTable.c)
 *     HalpInitializeInterrupts @ 0x140BFCE18 (HalpInitializeInterrupts.c)
 *     HalpExtInitExtensions @ 0x140BFE11C (HalpExtInitExtensions.c)
 *     ExtEnvRegisterIommu @ 0x140BFFC84 (ExtEnvRegisterIommu.c)
 *     HalpAllocateNumaConfigData @ 0x140C001A4 (HalpAllocateNumaConfigData.c)
 *     HalpNumaInitializeHmaConfiguration @ 0x140C008E4 (HalpNumaInitializeHmaConfiguration.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140C00968 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpBlkAllocateShadowData @ 0x140C01E08 (HalpBlkAllocateShadowData.c)
 *     HalpPowerInitNvsRegionData @ 0x140C02270 (HalpPowerInitNvsRegionData.c)
 *     HalpSetupAcpiPhase0 @ 0x140C0276C (HalpSetupAcpiPhase0.c)
 *     HalpCopyDebugDescriptor @ 0x140C03550 (HalpCopyDebugDescriptor.c)
 * Callees:
 *     HalpMap @ 0x140412738 (HalpMap.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140C55764 (HalpAllocPhysicalMemoryEx.c)
 */

__int64 __fastcall HalpMmAllocateMemoryInternal(int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  if ( !HalpMmLoaderBlock || KeGetPcr()->Prcb.Number )
    KeBugCheckEx(0x5Cu, 0x8000uLL, 0x8675309uLL, 0LL, 0LL);
  if ( a2 > 1 )
    return 0LL;
  v3 = (a1 + 7) & 0xFFFFFFF8;
  if ( HalpMmLeftoverMemorySize >= v3 )
  {
    result = HalpMmLeftoverMemory;
    HalpMmLeftoverMemory += v3;
    HalpMmLeftoverMemorySize -= v3;
    return result;
  }
  v5 = (v3 + 4095) >> 12;
  v6 = HalpAllocPhysicalMemoryEx(HalpMmLoaderBlock, 0, v5, 0, 0LL);
  if ( !v6 )
    return 0LL;
  v7 = HalpMap(v6, v5, a2 == 1, 0, 4u, 0LL);
  if ( v7 )
  {
    HalpMmLeftoverMemory = v7 + v3;
    HalpMmLeftoverMemorySize = (v5 << 12) - v3;
  }
  return v7;
}
