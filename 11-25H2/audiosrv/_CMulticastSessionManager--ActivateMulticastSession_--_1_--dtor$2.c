/*
 * XREFs of _CMulticastSessionManager::ActivateMulticastSession_::_1_::dtor$2 @ 0x180166364
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMulticastSessionManager::ActivateMulticastSession_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
