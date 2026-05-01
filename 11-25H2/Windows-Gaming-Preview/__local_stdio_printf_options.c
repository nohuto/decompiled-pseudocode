/*
 * XREFs of __local_stdio_printf_options @ 0x180001924
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180001900 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180001950 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18000267C (__scrt_initialize_default_local_stdio_options.c)
 *     wprintf @ 0x180002E2C (wprintf.c)
 *     _vsnwprintf @ 0x180002E80 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x180002EE8 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
