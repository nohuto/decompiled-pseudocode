/*
 * XREFs of ArbLibraryInitialize @ 0x1400AB3E0
 * Callers:
 *     DriverEntry @ 0x1400C64B0 (DriverEntry.c)
 * Callees:
 *     ArbRegReadMmConfigRanges @ 0x1400ABA94 (ArbRegReadMmConfigRanges.c)
 */

__int64 ArbLibraryInitialize()
{
  return ArbRegReadMmConfigRanges();
}
