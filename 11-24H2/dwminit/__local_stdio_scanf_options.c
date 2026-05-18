/*
 * XREFs of __local_stdio_scanf_options @ 0x180002164
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180002130 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180002180 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180003B84 (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
