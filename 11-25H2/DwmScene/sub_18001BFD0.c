/*
 * XREFs of sub_18001BFD0 @ 0x18001BFD0
 * Callers:
 *     sub_18001C40C @ 0x18001C40C (sub_18001C40C.c)
 *     sub_18001C674 @ 0x18001C674 (sub_18001C674.c)
 * Callees:
 *     sub_18001B5E4 @ 0x18001B5E4 (sub_18001B5E4.c)
 */

__int64 *__fastcall sub_18001BFD0(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18001B5E4();
  return a1;
}
