/*
 * XREFs of _vsnprintf @ 0x18009C554
 * Callers:
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1800DB7B8 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18009B544 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_0 @ 0x18009C3AA (_o___stdio_common_vsprintf_0.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = o___stdio_common_vsprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
