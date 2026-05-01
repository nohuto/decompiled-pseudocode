/*
 * XREFs of _scwprintf @ 0x1802D27AC
 * Callers:
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@N@Z @ 0x180479D44 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@N@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1802D12C4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x1802D2432 (_o___stdio_common_vswprintf_0.c)
 */

int scwprintf(const wchar_t *const Format, ...)
{
  unsigned __int64 *v2; // rax
  int result; // eax
  va_list va; // [rsp+68h] [rbp+10h] BYREF

  va_start(va, Format);
  v2 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v2 | 2, 0LL, 0LL, Format, 0LL, va);
  if ( result < 0 )
    return -1;
  return result;
}
