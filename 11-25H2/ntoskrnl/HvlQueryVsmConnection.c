/*
 * XREFs of HvlQueryVsmConnection @ 0x140456060
 * Callers:
 *     VslConfigureDynamicMemory @ 0x140589594 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x140589BA0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x140589C40 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslGetSecurePciEnabled @ 0x140589D60 (VslGetSecurePciEnabled.c)
 *     VslGetSecureSpeculationControlInformation @ 0x140589DE0 (VslGetSecureSpeculationControlInformation.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058A534 (VslQuerySecureKernelProfileInformation.c)
 *     MmSnapTriageDumpInformation @ 0x14066C5B8 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140704114 (VslRelaxQuotas.c)
 *     KiInitializeXSaveConfiguration @ 0x140B46B00 (KiInitializeXSaveConfiguration.c)
 *     VslpIumPhase0Initialize @ 0x140C08DD8 (VslpIumPhase0Initialize.c)
 *     ExpLicenseWatchInitWorker @ 0x140C4B234 (ExpLicenseWatchInitWorker.c)
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
