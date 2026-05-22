/*
 * XREFs of __local_stdio_printf_options @ 0x180033E70
 * Callers:
 *     _vsnwprintf_l @ 0x180033CFC (_vsnwprintf_l.c)
 *     initialize_legacy_wide_specifiers @ 0x18009C4C0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18009C500 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18009C9B0 (__scrt_initialize_default_local_stdio_options.c)
 *     swprintf_s @ 0x18009DAF4 (swprintf_s.c)
 *     sprintf_s @ 0x18009DBA0 (sprintf_s.c)
 *     _scprintf @ 0x18009DBF8 (_scprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
