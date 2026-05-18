/*
 * XREFs of sub_18000C614 @ 0x18000C614
 * Callers:
 *     sub_18001C938 @ 0x18001C938 (sub_18001C938.c)
 *     sub_1800CD01C @ 0x1800CD01C (sub_1800CD01C.c)
 * Callees:
 *     sub_18000B2A4 @ 0x18000B2A4 (sub_18000B2A4.c)
 *     _o___stdio_common_vsnprintf_s @ 0x18000C336 (_o___stdio_common_vsnprintf_s.c)
 */

__int64 sub_18000C614()
{
  __int64 result; // rax

  sub_18000B2A4();
  result = o___stdio_common_vsnprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
