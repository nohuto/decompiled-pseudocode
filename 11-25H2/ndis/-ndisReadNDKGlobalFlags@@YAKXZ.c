/*
 * XREFs of ?ndisReadNDKGlobalFlags@@YAKXZ @ 0x14014B678
 * Callers:
 *     NdisReadConfiguration @ 0x140050D30 (NdisReadConfiguration.c)
 * Callees:
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x1400688E0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 */

__int64 ndisReadNDKGlobalFlags(void)
{
  return mem::ReadNoFence<unsigned long,void>(&dword_1401270E8);
}
