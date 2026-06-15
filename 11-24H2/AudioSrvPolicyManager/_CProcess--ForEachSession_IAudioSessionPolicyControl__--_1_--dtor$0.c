/*
 * XREFs of _CProcess::ForEachSession_IAudioSessionPolicyControl__::_1_::dtor$0 @ 0x18004AA05
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::ForEachSession_IAudioSessionPolicyControl__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>>(a2 + 40);
}
