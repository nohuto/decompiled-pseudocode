/*
 * XREFs of HalpAcpiGetTable @ 0x14045F918
 * Callers:
 *     HalAcpiGetTableEx @ 0x14045F900 (HalAcpiGetTableEx.c)
 *     HalAcpiGetTable @ 0x14053A6E0 (HalAcpiGetTable.c)
 *     HalMatchAcpiCreatorRevision @ 0x14053A700 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiFADTBootArch @ 0x14053A780 (HalMatchAcpiFADTBootArch.c)
 *     HalMatchAcpiOemRevision @ 0x14053A7E0 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiOemTableId @ 0x14053A860 (HalMatchAcpiOemTableId.c)
 *     HalMatchAcpiRevision @ 0x14053A940 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x14054A730 (HalpExtGetAcpiTable.c)
 *     HalpInterruptParseAcpiTables @ 0x1405542D4 (HalpInterruptParseAcpiTables.c)
 *     HalSocGetAcpiTable @ 0x14055DB80 (HalSocGetAcpiTable.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140C10554 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpGetHotPlugMemoryInfo @ 0x140C10710 (HalpGetHotPlugMemoryInfo.c)
 *     HalpExtInitExtensions @ 0x140C1111C (HalpExtInitExtensions.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140C13674 (HalpInitializeConfigurationFromMadt.c)
 *     HalpNumaInitializeHmaConfiguration @ 0x140C13974 (HalpNumaInitializeHmaConfiguration.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140C139F8 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140C15120 (HalpPciInitializeMmConfigAccess.c)
 *     HalpSetupAcpiPhase0 @ 0x140C157FC (HalpSetupAcpiPhase0.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140C1711C (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpIommuHsaDiscover @ 0x140C17508 (HalpIommuHsaDiscover.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140C2DAD0 (KsepMatchInitAcpiOemInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140C4B228 (CmpGetAcpiBiosVersion.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4B660 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x14045F9FC (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140C699DC (HalpAcpiTableCacheInit.c)
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
