/*
 * XREFs of sub_18000C1B4 @ 0x18000C1B4
 * Callers:
 *     sub_18001C7D8 @ 0x18001C7D8 (sub_18001C7D8.c)
 *     sub_1800CCEBC @ 0x1800CCEBC (sub_1800CCEBC.c)
 * Callees:
 *     sub_18000AED4 @ 0x18000AED4 (sub_18000AED4.c)
 *     _o___stdio_common_vsnprintf_s @ 0x18000BED6 (_o___stdio_common_vsnprintf_s.c)
 */

__int64 sub_18000C1B4()
{
  __int64 result; // rax

  sub_18000AED4();
  result = o___stdio_common_vsnprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
