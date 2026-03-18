/*
 * XREFs of _vscprintf @ 0x18025D2AC
 * Callers:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x1802B8A3C (-Print@DwmDbg@@YAXQEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18025BEA4 (__local_stdio_printf_options.c)
 *     __stdio_common_vsprintf_0 @ 0x18025DE88 (__stdio_common_vsprintf_0.c)
 */

int __cdecl vscprintf(const char *const Format, va_list ArgList)
{
  unsigned __int64 *v4; // rax
  int result; // eax

  v4 = _local_stdio_printf_options();
  result = _stdio_common_vsprintf_0(*v4 | 2, 0LL, 0LL, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
