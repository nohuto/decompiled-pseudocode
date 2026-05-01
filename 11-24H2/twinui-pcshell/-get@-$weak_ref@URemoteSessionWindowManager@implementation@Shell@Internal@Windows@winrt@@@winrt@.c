/*
 * XREFs of ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18065D734
 * Callers:
 *     _lambda_2f7fc8b500d57ad36b179527aa3b33ab_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_const__winrt::Windows::Foundation::IInspectable_const__ @ 0x180655DB8 (_lambda_2f7fc8b500d57ad36b179527aa3b33ab_--operator()_winrt--Windows--Internal--Shell--CloudDesk.c)
 *     _lambda_f7708ede42cbb90dfb878b61b26817f2_::operator()_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs_ @ 0x180655E54 (_lambda_f7708ede42cbb90dfb878b61b26817f2_--operator()_winrt--Windows--Internal--Shell--ProcessIn.c)
 *     _lambda_77e78c927b00fdc94620a558442d73ef_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x180655EFC (_lambda_77e78c927b00fdc94620a558442d73ef_--operator()_winrt--Windows--Internal--Shell--RemoteSys.c)
 *     _lambda_c4158f368c90993acd5619817087aedd_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_ @ 0x180656144 (_lambda_c4158f368c90993acd5619817087aedd_--operator()_winrt--Windows--Internal--Shell--CloudDesk.c)
 *     _lambda_1cf95a55fff0866401cd411783285d2a_::operator() @ 0x180658F4C (_lambda_1cf95a55fff0866401cd411783285d2a_--operator().c)
 *     _lambda_3e3d6084102ea12775201c324e2ccf34_::operator() @ 0x1806591AC (_lambda_3e3d6084102ea12775201c324e2ccf34_--operator().c)
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180659730 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 *     ?Invoke@?$delegate@U?$EventHandler@I@Foundation@Windows@winrt@@V_lambda_9c0fcb81df45f06ec1f31351c33e1df8_@@@impl@winrt@@UEAAHPEAXI@Z @ 0x18065A930 (-Invoke@-$delegate@U-$EventHandler@I@Foundation@Windows@winrt@@V_lambda_9c0fcb81df45f06ec1f31351.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs___lambda_d2929146ab183b5cd17811f33a4bdab8___::Invoke @ 0x18065A9D0 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Inte_ea_18065A9D0.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::WindowId___lambda_e22f66c9943d4383c52f9a8ad3733f3b___::Invoke @ 0x18065AB10 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--WindowId___la.c)
 *     std::_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt::guid_const_&_::_Do_call @ 0x18065CA70 (std--_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt--guid_ea_18065CA70.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v2; // rsi
  void (__fastcall *v4)(__int64, __int128 *, void **); // rbx
  void **v5; // rax
  __int64 v6; // rax
  struct IUnknownVtbl *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v9 = 0LL;
    v4 = *(void (__fastcall **)(__int64, __int128 *, void **))(*(_QWORD *)v2 + 24LL);
    v5 = winrt::put_abi((winrt *)&v9, a2);
    v4(
      v2,
      &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSessionWindowManager>>::value,
      v5);
    v6 = v9;
    v7 = 0LL;
    if ( v9 )
    {
      v9 = 0LL;
      v7 = (struct IUnknownVtbl *)(v6 - 16);
    }
    a2->lpVtbl = v7;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  return a2;
}
