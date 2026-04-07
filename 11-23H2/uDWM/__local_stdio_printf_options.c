/*
 * XREFs of __local_stdio_printf_options @ 0x18005C5E4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18005C5C0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18005C610 (initialize_msvcrt_compatibility.c)
 *     _vsnwprintf @ 0x18005D52C (_vsnwprintf.c)
 *     _vsnprintf @ 0x18005D594 (_vsnprintf.c)
 *     _vsnprintf_s @ 0x18005D5FC (_vsnprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18005E704 (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
