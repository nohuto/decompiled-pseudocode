/*
 * XREFs of __local_stdio_printf_options @ 0x1802D12C4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1802D12A0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1802D12F0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1802D1BDC (__scrt_initialize_default_local_stdio_options.c)
 *     wprintf @ 0x1802D25E4 (wprintf.c)
 *     _vsnwprintf @ 0x1802D2638 (_vsnwprintf.c)
 *     vswprintf_s @ 0x1802D26A0 (vswprintf_s.c)
 *     _vscwprintf @ 0x1802D2704 (_vscwprintf.c)
 *     swprintf_s @ 0x1802D2754 (swprintf_s.c)
 *     _scwprintf @ 0x1802D27AC (_scwprintf.c)
 *     fprintf @ 0x1802D285C (fprintf.c)
 *     printf @ 0x1802D28A8 (printf.c)
 *     _vsnprintf @ 0x1802D28FC (_vsnprintf.c)
 *     _vsnprintf_s @ 0x1802D2964 (_vsnprintf_s.c)
 *     sprintf_s @ 0x1802D29D4 (sprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
