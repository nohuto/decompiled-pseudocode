/*
 * XREFs of _CVisual::SendSetOpacity_::_1_::dtor$0 @ 0x180067092
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::SendSetOpacity_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(a2 + 96);
}
