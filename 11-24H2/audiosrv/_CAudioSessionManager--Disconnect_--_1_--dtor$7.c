/*
 * XREFs of _CAudioSessionManager::Disconnect_::_1_::dtor$7 @ 0x18016BDE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::Disconnect_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  std::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::~unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>((__int64 *)(a2 + 192));
}
