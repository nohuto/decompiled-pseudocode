/*
 * XREFs of HalpLegacyShutdown @ 0x1405423A0
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x1405421E0 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
