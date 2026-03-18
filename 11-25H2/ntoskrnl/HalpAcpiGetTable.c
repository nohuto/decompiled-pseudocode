/*
 * XREFs of HalpAcpiGetTable @ 0x1404130F8
 * Callers:
 *     HalAcpiGetTableEx @ 0x1404130E0 (HalAcpiGetTableEx.c)
 *     HalAcpiGetTable @ 0x14053A5B0 (HalAcpiGetTable.c)
 *     HalMatchAcpiCreatorRevision @ 0x14053A5D0 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiFADTBootArch @ 0x14053A650 (HalMatchAcpiFADTBootArch.c)
 *     HalMatchAcpiOemRevision @ 0x14053A6B0 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiOemTableId @ 0x14053A730 (HalMatchAcpiOemTableId.c)
 *     HalMatchAcpiRevision @ 0x14053A810 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x14054A580 (HalpExtGetAcpiTable.c)
 *     HalpInterruptParseAcpiTables @ 0x140554094 (HalpInterruptParseAcpiTables.c)
 *     HalSocGetAcpiTable @ 0x14055D650 (HalSocGetAcpiTable.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140BFD554 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpGetHotPlugMemoryInfo @ 0x140BFD710 (HalpGetHotPlugMemoryInfo.c)
 *     HalpExtInitExtensions @ 0x140BFE11C (HalpExtInitExtensions.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140C005EC (HalpInitializeConfigurationFromMadt.c)
 *     HalpNumaInitializeHmaConfiguration @ 0x140C008E4 (HalpNumaInitializeHmaConfiguration.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140C00968 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140C02090 (HalpPciInitializeMmConfigAccess.c)
 *     HalpSetupAcpiPhase0 @ 0x140C0276C (HalpSetupAcpiPhase0.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140C0408C (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpIommuHsaDiscover @ 0x140C04478 (HalpIommuHsaDiscover.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140C1A8B0 (KsepMatchInitAcpiOemInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140C37E08 (CmpGetAcpiBiosVersion.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C38240 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x1404131DC (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140C55BD8 (HalpAcpiTableCacheInit.c)
 */

__int64 __fastcall HalpAcpiGetTable(__int64 a1, int a2, int a3, int a4)
{
  __int64 TableWork; // rdi

  if ( a1 )
  {
    if ( (int)HalpAcpiTableCacheInit() < 0 )
      return 0LL;
  }
  else
  {
    ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  }
  TableWork = HalpAcpiGetTableWork(a1, a2, a3, a4);
  if ( !a1 )
    KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return TableWork;
}
