/*
 * XREFs of HalpAcpiAoacCapable @ 0x140702470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpAcpiAoacCapable()
{
  return (HalpPlatformFlags & 8) != 0;
}
