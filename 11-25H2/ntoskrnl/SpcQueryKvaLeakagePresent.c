/*
 * XREFs of SpcQueryKvaLeakagePresent @ 0x140695780
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140730980 (KeQueryKvaShadowInformation.c)
 *     KiEnableKvaShadowing @ 0x140B4A90C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 SpcQueryKvaLeakagePresent()
{
  return (unsigned int)SpcKvaLeakage;
}
