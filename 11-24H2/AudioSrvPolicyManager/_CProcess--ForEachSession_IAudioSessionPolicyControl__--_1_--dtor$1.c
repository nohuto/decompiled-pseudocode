/*
 * XREFs of _CProcess::ForEachSession_IAudioSessionPolicyControl__::_1_::dtor$1 @ 0x18004AA17
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::ForEachSession_IAudioSessionPolicyControl__::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)(a2 + 128));
}
