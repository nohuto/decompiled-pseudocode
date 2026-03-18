/*
 * XREFs of _vsnwprintf @ 0x180251AF0
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800F3E30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x1801DF884 (StringVPrintfWorkerW.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180250874 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_0 @ 0x180252840 (__stdio_common_vswprintf_0.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, Args);
  if ( result < 0 )
    return -1;
  return result;
}
