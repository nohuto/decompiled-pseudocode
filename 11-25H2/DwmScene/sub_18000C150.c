/*
 * XREFs of sub_18000C150 @ 0x18000C150
 * Callers:
 *     sub_18001BDB0 @ 0x18001BDB0 (sub_18001BDB0.c)
 *     sub_18001BDE0 @ 0x18001BDE0 (sub_18001BDE0.c)
 * Callees:
 *     sub_18000AED4 @ 0x18000AED4 (sub_18000AED4.c)
 *     _o___stdio_common_vsprintf_s @ 0x18000BEE2 (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_18000C150()
{
  __int64 result; // rax

  sub_18000AED4();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
