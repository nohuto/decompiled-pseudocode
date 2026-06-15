/*
 * XREFs of __local_stdio_printf_options @ 0x1400589F4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1400589D0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x140058A20 (initialize_msvcrt_compatibility.c)
 *     sprintf_s @ 0x140059450 (sprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1400595BC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x14005A0FC (_vsnwprintf.c)
 *     _vsnprintf @ 0x14005A164 (_vsnprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
