/*
 * XREFs of __local_stdio_printf_options @ 0x1800A76D4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800A76B0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800A7700 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800A87B8 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1800A8BD0 (_vsnwprintf.c)
 *     vswprintf_s @ 0x1800A8C38 (vswprintf_s.c)
 *     _vscwprintf @ 0x1800A8C9C (_vscwprintf.c)
 *     swprintf_s @ 0x1800A8CEC (swprintf_s.c)
 *     _vsnprintf @ 0x1800A8D44 (_vsnprintf.c)
 *     _snprintf_s @ 0x1800A8DAC (_snprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
