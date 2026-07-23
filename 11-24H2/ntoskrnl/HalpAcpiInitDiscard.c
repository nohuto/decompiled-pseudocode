/*
 * XREFs of HalpAcpiInitDiscard @ 0x140C11374
 * Callers:
 *     HalpAcpiInitSystem @ 0x140B4F150 (HalpAcpiInitSystem.c)
 * Callees:
 *     HalpSetupAcpiPhase0 @ 0x140C157FC (HalpSetupAcpiPhase0.c)
 */

__int64 HalpAcpiInitDiscard()
{
  off_140E00768 = (__int64 (__fastcall *)())HaliInitPowerManagement;
  off_140E00AE0[0] = HalAcpiGetRsdpDispatch;
  return HalpSetupAcpiPhase0();
}
