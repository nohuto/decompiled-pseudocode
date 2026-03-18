/*
 * XREFs of ArbLibraryInitialize @ 0x140705A80
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbRegReadMmConfigRanges @ 0x1407060AC (ArbRegReadMmConfigRanges.c)
 */

__int64 ArbLibraryInitialize()
{
  return ArbRegReadMmConfigRanges();
}
