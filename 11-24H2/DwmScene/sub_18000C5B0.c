/*
 * XREFs of sub_18000C5B0 @ 0x18000C5B0
 * Callers:
 *     sub_18001BF10 @ 0x18001BF10 (sub_18001BF10.c)
 *     sub_18001BF40 @ 0x18001BF40 (sub_18001BF40.c)
 * Callees:
 *     sub_18000B2A4 @ 0x18000B2A4 (sub_18000B2A4.c)
 *     _o___stdio_common_vsprintf_s @ 0x18000C342 (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_18000C5B0()
{
  __int64 result; // rax

  sub_18000B2A4();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
