/*
 * XREFs of sub_18000C0FC @ 0x18000C0FC
 * Callers:
 *     sub_18001C7D8 @ 0x18001C7D8 (sub_18001C7D8.c)
 * Callees:
 *     sub_18000AED4 @ 0x18000AED4 (sub_18000AED4.c)
 *     _o___acrt_iob_func @ 0x18000BEA6 (_o___acrt_iob_func.c)
 *     _o___stdio_common_vfprintf @ 0x18000BECA (_o___stdio_common_vfprintf.c)
 */

__int64 sub_18000C0FC()
{
  o___acrt_iob_func();
  sub_18000AED4();
  return o___stdio_common_vfprintf();
}
