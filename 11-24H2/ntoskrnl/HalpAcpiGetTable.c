/*
 * XREFs of HalpAcpiGetTable @ 0x140478488
 * Callers:
 *     HalAcpiGetTableEx @ 0x140478470 (HalAcpiGetTableEx.c)
 *     HalAcpiGetTable @ 0x14053CDE0 (HalAcpiGetTable.c)
 *     HalMatchAcpiCreatorRevision @ 0x14053CE00 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiFADTBootArch @ 0x14053CE80 (HalMatchAcpiFADTBootArch.c)
 *     HalMatchAcpiOemRevision @ 0x14053CEE0 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiOemTableId @ 0x14053CF60 (HalMatchAcpiOemTableId.c)
 *     HalMatchAcpiRevision @ 0x14053D040 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x14054CE70 (HalpExtGetAcpiTable.c)
 *     HalpInterruptParseAcpiTables @ 0x140556994 (HalpInterruptParseAcpiTables.c)
 *     HalSocGetAcpiTable @ 0x14055FF50 (HalSocGetAcpiTable.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140C0E554 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpGetHotPlugMemoryInfo @ 0x140C0E710 (HalpGetHotPlugMemoryInfo.c)
 *     HalpExtInitExtensions @ 0x140C0F11C (HalpExtInitExtensions.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140C11680 (HalpInitializeConfigurationFromMadt.c)
 *     HalpNumaInitializeHmaConfiguration @ 0x140C11974 (HalpNumaInitializeHmaConfiguration.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140C119F8 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140C13120 (HalpPciInitializeMmConfigAccess.c)
 *     HalpSetupAcpiPhase0 @ 0x140C137FC (HalpSetupAcpiPhase0.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140C1511C (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpIommuHsaDiscover @ 0x140C15508 (HalpIommuHsaDiscover.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140C2B9B0 (KsepMatchInitAcpiOemInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140C49104 (CmpGetAcpiBiosVersion.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4953C (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x14047856C (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140C67860 (HalpAcpiTableCacheInit.c)
 */

__int64 __fastcall HalpAcpiGetTable(__int64 a1, int a2, char *a3, char *a4)
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
