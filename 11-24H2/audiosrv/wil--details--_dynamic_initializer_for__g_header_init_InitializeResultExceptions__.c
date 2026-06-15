/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeResultExceptions__ @ 0x180008360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *wil::details::_dynamic_initializer_for__g_header_init_InitializeResultExceptions__()
{
  void *result; // rax

  wil::details::g_pfnRethrow = (void (*)(void))wil::details::Rethrow;
  wil::details::g_pfnThrowResultException = (void (*)(const struct wil::FailureInfo *))wil::details::ThrowResultExceptionInternal;
  result = &wil::details::ResultFromCaughtExceptionInternal;
  g_pfnResultFromCaughtExceptionInternal = (__int64)&wil::details::ResultFromCaughtExceptionInternal;
  return result;
}
