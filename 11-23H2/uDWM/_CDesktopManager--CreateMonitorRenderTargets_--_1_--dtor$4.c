/*
 * XREFs of _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$4 @ 0x1800678CF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(a2 + 160);
}
