/*
 * XREFs of _vsnwprintf_l @ 0x18004EF4C
 * Callers:
 *     StringVPrintfWorkerW @ 0x18004EE40 (StringVPrintfWorkerW.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18004F0C0 (__local_stdio_printf_options.c)
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
