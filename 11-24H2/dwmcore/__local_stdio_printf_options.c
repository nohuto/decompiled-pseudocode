/*
 * XREFs of __local_stdio_printf_options @ 0x180250874
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180250850 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1802508A0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180251968 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180251AF0 (_vsnwprintf.c)
 *     swprintf_s @ 0x180251B58 (swprintf_s.c)
 *     _vsnprintf @ 0x180251BB0 (_vsnprintf.c)
 *     vsprintf_s @ 0x180251C18 (vsprintf_s.c)
 *     _vscprintf @ 0x180251C7C (_vscprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
