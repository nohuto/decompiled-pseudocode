/*
 * XREFs of ??1?$ComPtr@U?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801DD0B4
 * Callers:
 *     _wil::MakeAgileCallback_Windows::Foundation::IEventHandler_Windows::Internal::Shell::RemoteDesktopConnectedEventArgs____CVirtualDesktopManager___long_(__cdecl_CVirtualDesktopManager::_)(IInspectable___Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs__)__::_1_::dtor$0 @ 0x1806F2876 (_wil--MakeAgileCallback_Windows--Foundation--IEventHandler_Windows--Internal--Shell--RemoteDeskt.c)
 *     _CVirtualDesktopManager::CreateRemoteDesktop_::_1_::dtor$2 @ 0x1806F28C7 (_CVirtualDesktopManager--CreateRemoteDesktop_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>>::~ComPtr<Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
