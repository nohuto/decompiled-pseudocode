/*
 * XREFs of HalpLegacyShutdown @ 0x140544AE0
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
