/*
 * XREFs of _vsnwprintf @ 0x18025D120
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003313C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x1801E92D0 (StringVPrintfWorkerW.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18025BEA4 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_0 @ 0x18025DE70 (__stdio_common_vswprintf_0.c)
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
