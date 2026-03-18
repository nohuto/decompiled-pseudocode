/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x14054A8AC
 * Callers:
 *     HalMakeBeep @ 0x140543EC0 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x140544B14 (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140B4C0AC (HalpRestoreDmaControllerState.c)
 * Callees:
 *     <none>
 */

bool HalpMiscIsLegacyPcType()
{
  return !HalFirmwareTypeEfi
      || (HalpPlatformFlags & 1) != 0
      && (HalpPlatformFlags & 4) != 0
      && HalpVideoBiosPresent
      && (HalpPlatformFlags & 8) == 0;
}
