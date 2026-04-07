/*
 * XREFs of _CCompositor::CreateProxyFromSharedHandle_CAnimationTriggerProxy__::_1_::dtor$0 @ 0x1800ADEB7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateProxyFromSharedHandle_CAnimationTriggerProxy__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)(a2 + 80));
}
