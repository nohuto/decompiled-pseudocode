/*
 * XREFs of _vsnwprintf @ 0x180002E2C
 * Callers:
 *     ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x18000560C (-LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x180006620 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x18000908C (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180001E34 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x180002D5A (_o___stdio_common_vswprintf_0.c)
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
