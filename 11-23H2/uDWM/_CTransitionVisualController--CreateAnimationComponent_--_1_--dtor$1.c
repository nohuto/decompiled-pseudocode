/*
 * XREFs of _CTransitionVisualController::CreateAnimationComponent_::_1_::dtor$1 @ 0x18006859F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransitionVisualController::CreateAnimationComponent_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(a2 + 176);
}
