/*
 * XREFs of _CWindowList::CaptureWindow_::_1_::dtor$1 @ 0x1800F6852
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWindowList::CaptureWindow_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)(a2 + 80));
}
