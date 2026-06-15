/*
 * XREFs of _dynamic_atexit_destructor_for__s_MulticastSessionManager__ @ 0x180169DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__s_MulticastSessionManager__()
{
  return wil::com_ptr_t<CMulticastSessionManager,wil::err_returncode_policy>::~com_ptr_t<CMulticastSessionManager,wil::err_returncode_policy>((__int64 *)&s_MulticastSessionManager);
}
