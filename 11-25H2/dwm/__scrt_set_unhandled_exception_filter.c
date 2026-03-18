/*
 * XREFs of __scrt_set_unhandled_exception_filter @ 0x1400056BC
 * Callers:
 *     pre_cpp_initialization @ 0x140004D10 (pre_cpp_initialization.c)
 * Callees:
 *     <none>
 */

LPTOP_LEVEL_EXCEPTION_FILTER _scrt_set_unhandled_exception_filter()
{
  return SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)_scrt_unhandled_exception_filter);
}
