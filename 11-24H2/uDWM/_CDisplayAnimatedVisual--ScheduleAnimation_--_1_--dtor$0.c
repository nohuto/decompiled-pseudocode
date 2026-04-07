/*
 * XREFs of _CDisplayAnimatedVisual::ScheduleAnimation_::_1_::dtor$0 @ 0x1800F8591
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayAnimatedVisual::ScheduleAnimation_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>((CAnimationEngine **)(a2 + 136));
}
