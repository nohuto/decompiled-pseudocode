/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x14054816C
 * Callers:
 *     HalMakeBeep @ 0x140541810 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x1405423D4 (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140B4E0F0 (HalpRestoreDmaControllerState.c)
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
