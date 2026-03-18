/*
 * XREFs of PoFxActivateDevice @ 0x14047D544
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x140717F64 (PiProcessResourceRequirementsChanged.c)
 *     PnpPoFxActivateDevice @ 0x140834FC8 (PnpPoFxActivateDevice.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A966B0 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x140AB3DFC (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14047D560 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
