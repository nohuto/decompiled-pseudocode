/*
 * XREFs of HalMapIoSpace @ 0x14055D580
 * Callers:
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404D2F18 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpHvTimerInitialize @ 0x14055C890 (HalpHvTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D1A4 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpPmTimerInitialize @ 0x14055DCB0 (HalpPmTimerInitialize.c)
 *     HalpHpetDiscover @ 0x14055DF68 (HalpHpetDiscover.c)
 *     HalpHpetInitialize @ 0x14055E3E0 (HalpHpetInitialize.c)
 *     HalpApicInitializeIoUnit @ 0x140565D20 (HalpApicInitializeIoUnit.c)
 *     HalpApicInitializeLocalUnit @ 0x140565F00 (HalpApicInitializeLocalUnit.c)
 *     WdHwCreateHardwareRegister @ 0x140569638 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x14056BC28 (IvtInitializeIdentityMappings.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574668 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140574EC8 (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x140B41B90 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x140B42B68 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x140B42D00 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140C02568 (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x140412738 (HalpMap.c)
 */

PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  SIZE_T v4; // rdx

  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  v4 = (NumberOfBytes + 4095) >> 12;
  if ( CacheType != MmCached )
    CacheType = MmNonCached;
  return (PVOID)HalpMap(PhysicalAddress.QuadPart, v4, CacheType, 0, 4u, 0LL);
}
