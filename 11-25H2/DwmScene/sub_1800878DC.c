/*
 * XREFs of sub_1800878DC @ 0x1800878DC
 * Callers:
 *     sub_1800877A8 @ 0x1800877A8 (sub_1800877A8.c)
 *     sub_180088EB0 @ 0x180088EB0 (sub_180088EB0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800877F4 @ 0x1800877F4 (sub_1800877F4.c)
 */

__int64 *__fastcall sub_1800878DC(__int64 *lpMem, __int64 a2)
{
  sub_1800877F4(lpMem, a2);
  sub_18000B77C(lpMem);
  return lpMem;
}
