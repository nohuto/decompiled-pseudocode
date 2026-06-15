/*
 * XREFs of _vsnwprintf @ 0x1800A8BD0
 * Callers:
 *     StringVPrintfWorkerW @ 0x18004F850 (StringVPrintfWorkerW.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18004FB30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180057AB0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW_0 @ 0x18012F850 (StringVPrintfWorkerW_0.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800A76D4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x1800A8A9E (_o___stdio_common_vswprintf_0.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, Args);
  if ( result < 0 )
    return -1;
  return result;
}
