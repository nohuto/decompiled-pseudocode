/*
 * XREFs of sub_18001C130 @ 0x18001C130
 * Callers:
 *     sub_18001C56C @ 0x18001C56C (sub_18001C56C.c)
 *     sub_18001C7D4 @ 0x18001C7D4 (sub_18001C7D4.c)
 * Callees:
 *     sub_18001B744 @ 0x18001B744 (sub_18001B744.c)
 */

__int64 *__fastcall sub_18001C130(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18001B744();
  return a1;
}
