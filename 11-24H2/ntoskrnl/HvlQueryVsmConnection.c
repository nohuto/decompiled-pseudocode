/*
 * XREFs of HvlQueryVsmConnection @ 0x14044B190
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x140584F94 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1405853A8 (HvlResumeFromRootCrashdump.c)
 *     VslConfigureDynamicMemory @ 0x140589FA4 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14058A5B0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x14058A650 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslGetSecurePciEnabled @ 0x14058A770 (VslGetSecurePciEnabled.c)
 *     VslGetSecureSpeculationControlInformation @ 0x14058A7F0 (VslGetSecureSpeculationControlInformation.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058AFAC (VslQuerySecureKernelProfileInformation.c)
 *     MmSnapTriageDumpInformation @ 0x1406790E8 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x14070DDA4 (VslRelaxQuotas.c)
 *     KiInitializeXSaveConfiguration @ 0x140B58B20 (KiInitializeXSaveConfiguration.c)
 *     VslpIumPhase0Initialize @ 0x140C1BEB0 (VslpIumPhase0Initialize.c)
 *     ExpLicenseWatchInitWorker @ 0x140C5E744 (ExpLicenseWatchInitWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlQueryVsmConnection(_QWORD *a1)
{
  char result; // al

  result = HvlpVsmVtlCallVa;
  if ( *(_QWORD *)&HvlpVsmVtlCallVa )
  {
    if ( a1 )
      *a1 = *(_QWORD *)&HvlpVsmVtlCallVa;
    return 1;
  }
  return result;
}
