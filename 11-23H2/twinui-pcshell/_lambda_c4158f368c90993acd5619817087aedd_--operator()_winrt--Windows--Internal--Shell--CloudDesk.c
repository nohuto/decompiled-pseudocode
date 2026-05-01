/*
 * XREFs of _lambda_c4158f368c90993acd5619817087aedd_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_ @ 0x18071E3D0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___::Invoke @ 0x180721C40 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180721C40.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BD9F8 (-unconditional_release_ref@-$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1807246EC (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 *     ?lock@?$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1807248A4 (-lock@-$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QE.c)
 *     ?TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXW4ScreenType@TransitionScreen@CloudDesktop@3456@@Z @ 0x180733E3C (-TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Window_ea_180733E3C.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_c4158f368c90993acd5619817087aedd_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_(
        __int64 a1,
        volatile signed __int64 *a2,
        volatile signed __int32 *a3)
{
  __int64 v3; // r10
  volatile signed __int64 *v4; // rbx
  __int64 v5; // rsi
  void (__fastcall *v6)(__int64, __int64 *, volatile signed __int32 **); // rdi
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]
  volatile signed __int64 *v9; // [rsp+48h] [rbp+10h] BYREF
  volatile signed __int32 *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>::lock(a1 + 8, &v7);
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(v3, &v9);
  v4 = v9;
  if ( v7 && v9 )
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(v7, 1LL);
    v5 = *((_QWORD *)v4 + 5);
    v6 = *(void (__fastcall **)(__int64, __int64 *, volatile signed __int32 **))(*(_QWORD *)v5 + 32LL);
    winrt::hstring::hstring((winrt::hstring *)&v10, &LocaleName);
    v6(v5, &v7, &v10);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  }
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::unconditional_release_ref(&v9);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
