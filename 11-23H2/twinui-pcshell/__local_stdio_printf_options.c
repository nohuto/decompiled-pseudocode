/*
 * XREFs of __local_stdio_printf_options @ 0x1801C6334
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1801C6310 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1801C6360 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1801C6E28 (__scrt_initialize_default_local_stdio_options.c)
 *     wprintf @ 0x1801C7524 (wprintf.c)
 *     _vsnwprintf @ 0x1801C7578 (_vsnwprintf.c)
 *     vswprintf_s @ 0x1801C75E0 (vswprintf_s.c)
 *     _vscwprintf @ 0x1801C7644 (_vscwprintf.c)
 *     swprintf_s @ 0x1801C7694 (swprintf_s.c)
 *     _scwprintf @ 0x1801C76EC (_scwprintf.c)
 *     _vsnprintf @ 0x1801C779C (_vsnprintf.c)
 *     _vsnprintf_s @ 0x1801C7804 (_vsnprintf_s.c)
 *     sprintf_s @ 0x1801C7874 (sprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
