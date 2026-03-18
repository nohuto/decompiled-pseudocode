/*
 * XREFs of ArbLibraryInitialize @ 0x1406F9BA0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbRegReadMmConfigRanges @ 0x1406FA1CC (ArbRegReadMmConfigRanges.c)
 */

__int64 ArbLibraryInitialize()
{
  return ArbRegReadMmConfigRanges();
}
