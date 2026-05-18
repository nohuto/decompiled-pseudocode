/*
 * XREFs of sub_18000C55C @ 0x18000C55C
 * Callers:
 *     sub_18001C938 @ 0x18001C938 (sub_18001C938.c)
 * Callees:
 *     sub_18000B2A4 @ 0x18000B2A4 (sub_18000B2A4.c)
 *     _o___acrt_iob_func @ 0x18000C306 (_o___acrt_iob_func.c)
 *     _o___stdio_common_vfprintf @ 0x18000C32A (_o___stdio_common_vfprintf.c)
 */

__int64 sub_18000C55C()
{
  o___acrt_iob_func();
  sub_18000B2A4();
  return o___stdio_common_vfprintf();
}
