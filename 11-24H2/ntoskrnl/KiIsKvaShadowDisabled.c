/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1405BDF24
 * Callers:
 *     KiEnableKvaShadowing @ 0x140B5A87C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
