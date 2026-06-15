/*
 * XREFs of _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$8 @ 0x1801710C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CKsNotificationsMonitor::GetDeviceId_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 376));
}
