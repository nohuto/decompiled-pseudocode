/*
 * XREFs of fprintf @ 0x1802D285C
 * Callers:
 *     EnumerateAndIssueToXInputDevice @ 0x1806C9D98 (EnumerateAndIssueToXInputDevice.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1802D12C4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vfprintf_0 @ 0x1802D23F6 (_o___stdio_common_vfprintf_0.c)
 */

int fprintf(FILE *const Stream, const char *const Format, ...)
{
  unsigned __int64 *v4; // rax
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, Format);
  v4 = _local_stdio_printf_options();
  return o___stdio_common_vfprintf_0(*v4, Stream, Format, 0LL, va);
}
