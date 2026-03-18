/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks___0 @ 0x140004660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks___0()
{
  return wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>(&wil::details::g_threadFailureCallbacks);
}
