/*
 * XREFs of _CAudioSessionManager::DisconnectSessionsForTsSession_::_1_::dtor$1 @ 0x18016DDCB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::DisconnectSessionsForTsSession_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::~unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>((__int64 *)(a2 + 48));
}
