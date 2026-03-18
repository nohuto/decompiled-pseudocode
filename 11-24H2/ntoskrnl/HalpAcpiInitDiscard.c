/*
 * XREFs of HalpAcpiInitDiscard @ 0x140C0F374
 * Callers:
 *     HalpAcpiInitSystem @ 0x140B4D110 (HalpAcpiInitSystem.c)
 * Callees:
 *     HalpSetupAcpiPhase0 @ 0x140C137FC (HalpSetupAcpiPhase0.c)
 */

__int64 HalpAcpiInitDiscard()
{
  off_140E00698 = (__int64 (__fastcall *)())HaliInitPowerManagement;
  off_140E00AE0[0] = HalAcpiGetRsdpDispatch;
  return HalpSetupAcpiPhase0();
}
