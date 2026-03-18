/*
 * XREFs of SpcQueryKvaLeakagePresent @ 0x1406A0B20
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x14073C9A0 (KeQueryKvaShadowInformation.c)
 *     KiEnableKvaShadowing @ 0x140B5A87C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 SpcQueryKvaLeakagePresent()
{
  return (unsigned int)SpcKvaLeakage;
}
