/*
 * XREFs of initialize_legacy_wide_specifiers @ 0x18009C4C0
 * Callers:
 *     <none>
 * Callees:
 *     __local_stdio_printf_options @ 0x180033E70 (__local_stdio_printf_options.c)
 *     __local_stdio_scanf_options @ 0x18009C4E4 (__local_stdio_scanf_options.c)
 */

__int64 initialize_legacy_wide_specifiers()
{
  unsigned __int64 *v0; // rax
  unsigned __int64 *v1; // rax

  v0 = _local_stdio_printf_options();
  *v0 |= 4uLL;
  v1 = _local_stdio_scanf_options();
  *v1 |= 2uLL;
  return 0LL;
}
