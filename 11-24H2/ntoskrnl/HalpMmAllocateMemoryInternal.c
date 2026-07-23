/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x140540620
 * Callers:
 *     HalSocRequestApi @ 0x1404A8A70 (HalSocRequestApi.c)
 *     HalpIommuAddDebuggerException @ 0x1404C9E90 (HalpIommuAddDebuggerException.c)
 *     HalpInitializeTimers @ 0x140537E50 (HalpInitializeTimers.c)
 *     HalpMmAllocateMemory @ 0x140540604 (HalpMmAllocateMemory.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x140540738 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpInterruptInitializeIpis @ 0x140541F3C (HalpInterruptInitializeIpis.c)
 *     HalpExtRegisterResourceDescriptor @ 0x14054A7D0 (HalpExtRegisterResourceDescriptor.c)
 *     HalpRegisterDmaController @ 0x140550B38 (HalpRegisterDmaController.c)
 *     HalpIommuProcessReservationsInternal @ 0x140551E00 (HalpIommuProcessReservationsInternal.c)
 *     HalpInterruptParseMadt @ 0x140554374 (HalpInterruptParseMadt.c)
 *     EmonAllocateCounters @ 0x1405588DC (EmonAllocateCounters.c)
 *     ExtEnvAllocateMemory @ 0x14055D660 (ExtEnvAllocateMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x14055DB00 (HalRegisterPermanentAddressUsage.c)
 *     HalpTimerRegister @ 0x14055DCBC (HalpTimerRegister.c)
 *     HalpInterruptRegisterController @ 0x1405606F0 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x140560BB0 (HalpInterruptRegisterLine.c)
 *     HalpIommuCreateDmarPageTable @ 0x14056537C (HalpIommuCreateDmarPageTable.c)
 *     HalpInitializeInterrupts @ 0x140C0FE18 (HalpInitializeInterrupts.c)
 *     HalpExtInitExtensions @ 0x140C1111C (HalpExtInitExtensions.c)
 *     ExtEnvRegisterIommu @ 0x140C12D0C (ExtEnvRegisterIommu.c)
 *     HalpAllocateNumaConfigData @ 0x140C1322C (HalpAllocateNumaConfigData.c)
 *     HalpNumaInitializeHmaConfiguration @ 0x140C13974 (HalpNumaInitializeHmaConfiguration.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140C139F8 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpBlkAllocateShadowData @ 0x140C14E98 (HalpBlkAllocateShadowData.c)
 *     HalpPowerInitNvsRegionData @ 0x140C15300 (HalpPowerInitNvsRegionData.c)
 *     HalpSetupAcpiPhase0 @ 0x140C157FC (HalpSetupAcpiPhase0.c)
 *     HalpCopyDebugDescriptor @ 0x140C165E0 (HalpCopyDebugDescriptor.c)
 * Callees:
 *     HalpMap @ 0x140460358 (HalpMap.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140C69568 (HalpAllocPhysicalMemoryEx.c)
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
