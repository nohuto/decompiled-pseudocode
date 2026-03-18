/*
 * XREFs of HalpAcpiAoacCapable @ 0x1406F6680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpAcpiAoacCapable()
{
  return (HalpPlatformFlags & 8) != 0;
}
