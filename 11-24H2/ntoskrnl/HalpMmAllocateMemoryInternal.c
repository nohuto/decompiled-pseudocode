/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x140542CD0
 * Callers:
 *     HalSocRequestApi @ 0x1404AE160 (HalSocRequestApi.c)
 *     HalpIommuAddDebuggerException @ 0x1404D0E50 (HalpIommuAddDebuggerException.c)
 *     HalpInitializeTimers @ 0x14053A610 (HalpInitializeTimers.c)
 *     HalpMmAllocateMemory @ 0x140542CB4 (HalpMmAllocateMemory.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x140542DE8 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpInterruptInitializeIpis @ 0x1405445EC (HalpInterruptInitializeIpis.c)
 *     HalpExtRegisterResourceDescriptor @ 0x14054CF10 (HalpExtRegisterResourceDescriptor.c)
 *     HalpRegisterDmaController @ 0x1405531F8 (HalpRegisterDmaController.c)
 *     HalpIommuProcessReservationsInternal @ 0x1405544C0 (HalpIommuProcessReservationsInternal.c)
 *     HalpInterruptParseMadt @ 0x140556A34 (HalpInterruptParseMadt.c)
 *     EmonAllocateCounters @ 0x14055ACAC (EmonAllocateCounters.c)
 *     ExtEnvAllocateMemory @ 0x14055FA30 (ExtEnvAllocateMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x14055FED0 (HalRegisterPermanentAddressUsage.c)
 *     HalpTimerRegister @ 0x14056008C (HalpTimerRegister.c)
 *     HalpInterruptRegisterController @ 0x140562AC0 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x140562F80 (HalpInterruptRegisterLine.c)
 *     HalpIommuCreateDmarPageTable @ 0x14056788C (HalpIommuCreateDmarPageTable.c)
 *     HalpInitializeInterrupts @ 0x140C0DE18 (HalpInitializeInterrupts.c)
 *     HalpExtInitExtensions @ 0x140C0F11C (HalpExtInitExtensions.c)
 *     ExtEnvRegisterIommu @ 0x140C10D18 (ExtEnvRegisterIommu.c)
 *     HalpAllocateNumaConfigData @ 0x140C11238 (HalpAllocateNumaConfigData.c)
 *     HalpNumaInitializeHmaConfiguration @ 0x140C11974 (HalpNumaInitializeHmaConfiguration.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140C119F8 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpBlkAllocateShadowData @ 0x140C12E98 (HalpBlkAllocateShadowData.c)
 *     HalpPowerInitNvsRegionData @ 0x140C13300 (HalpPowerInitNvsRegionData.c)
 *     HalpSetupAcpiPhase0 @ 0x140C137FC (HalpSetupAcpiPhase0.c)
 *     HalpCopyDebugDescriptor @ 0x140C145E0 (HalpCopyDebugDescriptor.c)
 * Callees:
 *     HalpMap @ 0x140478C5C (HalpMap.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140C673EC (HalpAllocPhysicalMemoryEx.c)
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
