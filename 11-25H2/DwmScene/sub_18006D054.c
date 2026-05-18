/*
 * XREFs of sub_18006D054 @ 0x18006D054
 * Callers:
 *     sub_18006CFF4 @ 0x18006CFF4 (sub_18006CFF4.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 */

__int64 __fastcall sub_18006D054(__int64 a1, void *a2)
{
  memset(a2, 0, 0x98uLL);
  return sub_180029A60((__int64)a2);
}
