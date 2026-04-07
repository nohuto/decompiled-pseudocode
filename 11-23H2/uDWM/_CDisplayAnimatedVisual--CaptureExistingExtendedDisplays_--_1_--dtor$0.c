/*
 * XREFs of _CDisplayAnimatedVisual::CaptureExistingExtendedDisplays_::_1_::dtor$0 @ 0x1800B75CA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayAnimatedVisual::CaptureExistingExtendedDisplays_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
