/*
 * XREFs of __local_stdio_printf_options @ 0x18001FCF4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18001FD10 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18001FD50 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180020C58 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180021204 (_vsnwprintf.c)
 *     vswprintf_s @ 0x18002126C (vswprintf_s.c)
 *     _vscwprintf @ 0x1800212D0 (_vscwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
