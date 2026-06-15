/*
 * XREFs of _PopulateAudioHistoryForStreamInternal_::_1_::dtor$3 @ 0x1400949C1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall PopulateAudioHistoryForStreamInternal_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wil::com_ptr_t<ICPAudioHistoryReader,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<ICPAudioHistoryReader,wil::err_returncode_policy>>((__int64 **)(a2 + 144));
}
