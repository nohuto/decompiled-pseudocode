/*
 * XREFs of PoFxActivateDevice @ 0x140496064
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x140724064 (PiProcessResourceRequirementsChanged.c)
 *     PnpPoFxActivateDevice @ 0x1408BB7C0 (PnpPoFxActivateDevice.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A9C5C0 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x140AB81C4 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140496080 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
