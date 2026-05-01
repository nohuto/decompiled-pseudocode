/*
 * XREFs of _lambda_d5554fb7d1d16b7c69ea1af45fa7d089_::_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_ @ 0x180282374
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1801BC6D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0?$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEBV01@@Z @ 0x1807200B0 (--0-$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_d5554fb7d1d16b7c69ea1af45fa7d089_::_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        winrt::impl **a5,
        winrt::impl **a6,
        _DWORD *a7,
        _BYTE *a8)
{
  __int64 *v10; // rcx
  __int64 *v11; // r8
  unsigned int v12; // r8d
  unsigned int v13; // r8d

  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>::weak_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>(
    a1,
    a2,
    a3,
    a4);
  v10 += 2;
  *v10 = *v11;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
  *(_QWORD *)(a1 + 24) = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  winrt::hstring::hstring((winrt::hstring *)(a1 + 32), a5, v12);
  winrt::hstring::hstring((winrt::hstring *)(a1 + 40), a6, v13);
  *(_DWORD *)(a1 + 48) = *a7;
  *(_BYTE *)(a1 + 52) = *a8;
  return a1;
}
