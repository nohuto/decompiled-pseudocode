/*
 * XREFs of sub_18000C224 @ 0x18000C224
 * Callers:
 *     sub_180022CC0 @ 0x180022CC0 (sub_180022CC0.c)
 * Callees:
 *     sub_18000AED4 @ 0x18000AED4 (sub_18000AED4.c)
 *     _o___stdio_common_vsprintf_s @ 0x18000BEE2 (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_18000C224()
{
  __int64 result; // rax

  sub_18000AED4();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
