/*
 * XREFs of HalpLegacyShutdown @ 0x140542220
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x140542060 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
