/*
 * XREFs of PoFxActivateDevice @ 0x1404909F4
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x140721BF4 (PiProcessResourceRequirementsChanged.c)
 *     PnpPoFxActivateDevice @ 0x1408B9170 (PnpPoFxActivateDevice.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A97B30 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x140AB2688 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140490A10 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
