/*
 * XREFs of SpcQueryKvaLeakagePresent @ 0x1406A1C28
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x14073A8D0 (KeQueryKvaShadowInformation.c)
 *     KiEnableKvaShadowing @ 0x140B5C8EC (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 SpcQueryKvaLeakagePresent()
{
  return (unsigned int)SpcKvaLeakage;
}
