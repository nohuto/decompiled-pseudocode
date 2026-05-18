/*
 * XREFs of sub_18006D1B4 @ 0x18006D1B4
 * Callers:
 *     sub_18006D154 @ 0x18006D154 (sub_18006D154.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 */

__int64 __fastcall sub_18006D1B4(__int64 a1, void *a2)
{
  memset(a2, 0, 0x98uLL);
  return sub_180029BC0((__int64)a2);
}
