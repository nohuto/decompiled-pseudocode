/*
 * XREFs of HalMapIoSpace @ 0x14055FE80
 * Callers:
 *     HalpIommuAllocateAndZeroPageTable @ 0x1403ABF8C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpHvTimerInitialize @ 0x14055F190 (HalpHvTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055FAA4 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpPmTimerInitialize @ 0x1405605B0 (HalpPmTimerInitialize.c)
 *     HalpHpetDiscover @ 0x140560868 (HalpHpetDiscover.c)
 *     HalpHpetInitialize @ 0x140560CE0 (HalpHpetInitialize.c)
 *     HalpApicInitializeIoUnit @ 0x1405688F0 (HalpApicInitializeIoUnit.c)
 *     HalpApicInitializeLocalUnit @ 0x140568AD0 (HalpApicInitializeLocalUnit.c)
 *     WdHwCreateHardwareRegister @ 0x14056C938 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x14056EF28 (IvtInitializeIdentityMappings.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140577968 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405781C8 (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x140B51B90 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x140B52B68 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x140B52D00 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140C135F8 (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x140478C5C (HalpMap.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  SIZE_T v4; // rdx

  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  v4 = (NumberOfBytes + 4095) >> 12;
  if ( CacheType != MmCached )
    *(_QWORD *)&CacheType = 0LL;
  return (PVOID)HalpMap(PhysicalAddress.QuadPart, v4, *(unsigned __int64 *)&CacheType, 0, 4u, 0LL);
}
