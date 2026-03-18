/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x14005806C
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x14003C120 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIInitResetDeviceExtension @ 0x14003DA70 (ACPIInitResetDeviceExtension.c)
 *     ACPIBuildPdo @ 0x140046840 (ACPIBuildPdo.c)
 *     AcpiArblibInitializeArbiter @ 0x140055D9C (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1400AB224 (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *P)
{
  if ( P[128] )
    ArbDeleteArbiterInstance(P + 136);
  ExFreePoolWithTag(P, 0);
}
