/*
 * XREFs of ?ndisReadNDKGlobalFlags@@YAKXZ @ 0x1401407B8
 * Callers:
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 * Callees:
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 */

__int64 ndisReadNDKGlobalFlags(void)
{
  return mem::ReadNoFence<unsigned long,void>(&dword_14011D038);
}
