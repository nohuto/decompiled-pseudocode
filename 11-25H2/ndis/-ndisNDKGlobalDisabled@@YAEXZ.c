/*
 * XREFs of ?ndisNDKGlobalDisabled@@YAEXZ @ 0x14014B2A0
 * Callers:
 *     NdisReadConfiguration @ 0x140050D30 (NdisReadConfiguration.c)
 * Callees:
 *     ??$ReadNoFence@EX@mem@@YAEPEDE@Z @ 0x1400993B0 (--$ReadNoFence@EX@mem@@YAEPEDE@Z.c)
 */

__int64 ndisNDKGlobalDisabled(void)
{
  return mem::ReadNoFence<unsigned char,void>(byte_1401270EC);
}
