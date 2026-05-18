/*
 * XREFs of vsnprintf @ 0x18000C094
 * Callers:
 *     sub_18000F730 @ 0x18000F730 (sub_18000F730.c)
 * Callees:
 *     sub_18000AED4 @ 0x18000AED4 (sub_18000AED4.c)
 *     _o___stdio_common_vswprintf @ 0x18000BEEE (_o___stdio_common_vswprintf.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  int result; // eax

  sub_18000AED4();
  result = o___stdio_common_vswprintf();
  if ( result < 0 )
    return -1;
  return result;
}
