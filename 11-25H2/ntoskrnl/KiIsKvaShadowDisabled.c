/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1405BA0D8
 * Callers:
 *     KiEnableKvaShadowing @ 0x140B4A90C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
