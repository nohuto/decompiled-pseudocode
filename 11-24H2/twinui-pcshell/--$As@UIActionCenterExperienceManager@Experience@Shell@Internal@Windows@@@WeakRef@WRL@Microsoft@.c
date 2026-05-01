/*
 * XREFs of ??$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18029663C
 * Callers:
 *     _lambda_7814559f2e5978e3931afcf6062d6abe_::operator() @ 0x180296598 (_lambda_7814559f2e5978e3931afcf6062d6abe_--operator().c)
 *     wistd::__function::__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl(void)_::operator() @ 0x18036C670 (wistd--__function--__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl(void)_--operato.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_ea60bc499ddb5270bf04f29d15e6f41a___::Invoke @ 0x18036E510 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18036E510.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_8691707815964bc370635762076588a8___::Invoke @ 0x18036E590 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18036E590.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::WeakRef::As<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 result; // rax

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  result = 0LL;
  *a2 = 0LL;
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*a1 + 24LL))(
             *a1,
             &GUID_df65db57_d504_456e_8bd7_004ce308d8d9,
             a2);
  return result;
}
