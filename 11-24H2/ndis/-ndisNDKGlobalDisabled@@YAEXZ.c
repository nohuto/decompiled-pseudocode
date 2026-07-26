/*
 * XREFs of ?ndisNDKGlobalDisabled@@YAEXZ @ 0x1401403E0
 * Callers:
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 * Callees:
 *     ??$ReadNoFence@EX@mem@@YAEPEDE@Z @ 0x14008DAE0 (--$ReadNoFence@EX@mem@@YAEPEDE@Z.c)
 */

__int64 ndisNDKGlobalDisabled(void)
{
  return mem::ReadNoFence<unsigned char,void>(byte_14011D03C);
}
