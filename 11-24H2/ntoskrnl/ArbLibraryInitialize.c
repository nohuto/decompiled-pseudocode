/*
 * XREFs of ArbLibraryInitialize @ 0x140703640
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbRegReadMmConfigRanges @ 0x140703C6C (ArbRegReadMmConfigRanges.c)
 */

__int64 ArbLibraryInitialize()
{
  return ArbRegReadMmConfigRanges();
}
