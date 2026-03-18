/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x140547FBC
 * Callers:
 *     HalMakeBeep @ 0x140541690 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x140542254 (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140B3C0AC (HalpRestoreDmaControllerState.c)
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
