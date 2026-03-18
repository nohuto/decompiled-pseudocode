/*
 * XREFs of __local_stdio_printf_options @ 0x18025BEA4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18025BE80 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18025BED0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18025CF98 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x18025D120 (_vsnwprintf.c)
 *     swprintf_s @ 0x18025D188 (swprintf_s.c)
 *     _vsnprintf @ 0x18025D1E0 (_vsnprintf.c)
 *     vsprintf_s @ 0x18025D248 (vsprintf_s.c)
 *     _vscprintf @ 0x18025D2AC (_vscprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
