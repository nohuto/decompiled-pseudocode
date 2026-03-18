/*
 * XREFs of HvlQueryVsmConnection @ 0x140456290
 * Callers:
 *     VslConfigureDynamicMemory @ 0x14058CCAC (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14058D2C0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x14058D360 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslGetSecurePciEnabled @ 0x14058D480 (VslGetSecurePciEnabled.c)
 *     VslGetSecureSpeculationControlInformation @ 0x14058D500 (VslGetSecureSpeculationControlInformation.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058DC54 (VslQuerySecureKernelProfileInformation.c)
 *     MmSnapTriageDumpInformation @ 0x140677F08 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140710214 (VslRelaxQuotas.c)
 *     KiInitializeXSaveConfiguration @ 0x140B56AA0 (KiInitializeXSaveConfiguration.c)
 *     VslpIumPhase0Initialize @ 0x140C19E78 (VslpIumPhase0Initialize.c)
 *     ExpLicenseWatchInitWorker @ 0x140C5C5B4 (ExpLicenseWatchInitWorker.c)
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
