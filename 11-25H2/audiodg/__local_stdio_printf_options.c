/*
 * XREFs of __local_stdio_printf_options @ 0x140058AE4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x140058AC0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x140058B10 (initialize_msvcrt_compatibility.c)
 *     sprintf_s @ 0x140059540 (sprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1400596AC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x14005A1EC (_vsnwprintf.c)
 *     _vsnprintf @ 0x14005A254 (_vsnprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
