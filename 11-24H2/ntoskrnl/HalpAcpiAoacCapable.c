/*
 * XREFs of HalpAcpiAoacCapable @ 0x1407000B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpAcpiAoacCapable()
{
  return (HalpPlatformFlags & 8) != 0;
}
