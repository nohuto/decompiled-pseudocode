/*
 * XREFs of _vsnwprintf @ 0x14005A0FC
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140023638 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x14003B584 (StringVPrintfWorkerW.c)
 *     ?ApoLog@CAPOServiceProvider@@UEAAXW4APO_LOG_LEVEL@@PEBGZZ @ 0x14003D990 (-ApoLog@CAPOServiceProvider@@UEAAXW4APO_LOG_LEVEL@@PEBGZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1400589F4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x140059F76 (_o___stdio_common_vswprintf_0.c)
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
