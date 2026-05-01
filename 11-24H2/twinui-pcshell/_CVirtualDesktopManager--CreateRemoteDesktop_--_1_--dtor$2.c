/*
 * XREFs of _CVirtualDesktopManager::CreateRemoteDesktop_::_1_::dtor$2 @ 0x1806F28C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CVirtualDesktopManager::CreateRemoteDesktop_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>>::~ComPtr<Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>>((_QWORD *)(a2 + 184));
}
