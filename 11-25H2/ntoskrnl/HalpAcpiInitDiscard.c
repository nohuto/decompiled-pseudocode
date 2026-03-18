/*
 * XREFs of HalpAcpiInitDiscard @ 0x140BFE374
 * Callers:
 *     HalpAcpiInitSystem @ 0x140B3D110 (HalpAcpiInitSystem.c)
 * Callees:
 *     HalpSetupAcpiPhase0 @ 0x140C0276C (HalpSetupAcpiPhase0.c)
 */

__int64 HalpAcpiInitDiscard()
{
  off_140E00768 = (__int64 (__fastcall *)())HaliInitPowerManagement;
  off_140E00AE0[0] = HalAcpiGetRsdpDispatch;
  return HalpSetupAcpiPhase0();
}
