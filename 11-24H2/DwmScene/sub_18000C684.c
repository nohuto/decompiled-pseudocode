/*
 * XREFs of sub_18000C684 @ 0x18000C684
 * Callers:
 *     sub_180022E20 @ 0x180022E20 (sub_180022E20.c)
 * Callees:
 *     sub_18000B2A4 @ 0x18000B2A4 (sub_18000B2A4.c)
 *     _o___stdio_common_vsprintf_s @ 0x18000C342 (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_18000C684()
{
  __int64 result; // rax

  sub_18000B2A4();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
