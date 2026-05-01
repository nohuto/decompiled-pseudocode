/*
 * XREFs of _VirtualDesktopController::IsRemoteDesktopDisconnecting_::_1_::dtor$4 @ 0x1806EDFD9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopController::IsRemoteDesktopDisconnecting_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>::~com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>(
           (_QWORD *)(a2 + 32),
           a2);
}
