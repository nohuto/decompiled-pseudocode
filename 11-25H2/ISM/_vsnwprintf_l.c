/*
 * XREFs of _vsnwprintf_l @ 0x180033CFC
 * Callers:
 *     StringVPrintfWorkerW @ 0x180033BF0 (StringVPrintfWorkerW.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180033E70 (__local_stdio_printf_options.c)
 */

int __cdecl vsnwprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  unsigned __int64 v9; // rcx
  int result; // eax

  v9 = *_local_stdio_printf_options();
  result = __stdio_common_vswprintf(v9 | 1, Buffer, BufferCount, Format, Locale, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
