/*
 * XREFs of HalMapIoSpace @ 0x14055DAB0
 * Callers:
 *     HalpIommuAllocateAndZeroPageTable @ 0x14039A69C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpHvTimerInitialize @ 0x14055CDC0 (HalpHvTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D6D4 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpPmTimerInitialize @ 0x14055E1E0 (HalpPmTimerInitialize.c)
 *     HalpHpetDiscover @ 0x14055E498 (HalpHpetDiscover.c)
 *     HalpHpetInitialize @ 0x14055E910 (HalpHpetInitialize.c)
 *     HalpApicInitializeIoUnit @ 0x1405663E0 (HalpApicInitializeIoUnit.c)
 *     HalpApicInitializeLocalUnit @ 0x1405665C0 (HalpApicInitializeLocalUnit.c)
 *     WdHwCreateHardwareRegister @ 0x140569DC8 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x14056C3B8 (IvtInitializeIdentityMappings.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574DF8 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140575658 (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x140B54BB8 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x140B54D50 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140C155F8 (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x140460358 (HalpMap.c)
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
