/*
 * XREFs of _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$5 @ 0x18016D89E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CKsNotificationsMonitor::GetDeviceId_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 392));
}
