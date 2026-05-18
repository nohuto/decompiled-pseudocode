/*
 * XREFs of vsnprintf @ 0x18000C4F4
 * Callers:
 *     sub_18000F830 @ 0x18000F830 (sub_18000F830.c)
 * Callees:
 *     sub_18000B2A4 @ 0x18000B2A4 (sub_18000B2A4.c)
 *     _o___stdio_common_vswprintf @ 0x18000C34E (_o___stdio_common_vswprintf.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  int result; // eax

  sub_18000B2A4();
  result = o___stdio_common_vswprintf();
  if ( result < 0 )
    return -1;
  return result;
}
