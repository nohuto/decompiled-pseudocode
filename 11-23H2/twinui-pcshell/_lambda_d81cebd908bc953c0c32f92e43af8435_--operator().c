/*
 * XREFs of _lambda_d81cebd908bc953c0c32f92e43af8435_::operator() @ 0x1806AB768
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_d81cebd908bc953c0c32f92e43af8435___::Invoke @ 0x1806ADC60 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifica.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$as@UToastActivatedEventArgs@Notifications@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUToastActivatedEventArgs@Notifications@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1806AABF4 (--$as@UToastActivatedEventArgs@Notifications@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@.c)
 *     ?Arguments@?$consume_Windows_UI_Notifications_IToastActivatedEventArgs@UIToastActivatedEventArgs@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806ABA48 (-Arguments@-$consume_Windows_UI_Notifications_IToastActivatedEventArgs@UIToastActivatedEventArgs.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_d81cebd908bc953c0c32f92e43af8435_::operator()(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  bool v8; // bl
  void *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  bool v12; // bl
  wil::details *v13; // rcx
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF
  winrt::Windows::Foundation::IUnknown *v15; // [rsp+58h] [rbp+38h]
  winrt::Windows::Foundation::IUnknown *v16; // [rsp+60h] [rbp+40h]
  volatile signed __int32 *v17; // [rsp+68h] [rbp+48h] BYREF

  v16 = a3;
  v15 = a2;
  winrt::impl::as<winrt::Windows::UI::Notifications::ToastActivatedEventArgs,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v14,
    *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))a3);
  v6 = winrt::impl::consume_Windows_UI_Notifications_IToastActivatedEventArgs<winrt::Windows::UI::Notifications::IToastActivatedEventArgs>::Arguments(
         &v14,
         &v17);
  v8 = winrt::operator==(v6, (__int64)L"allow", v7);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
  if ( v8 )
  {
    LOWORD(v16) = 257;
  }
  else
  {
    v10 = winrt::impl::consume_Windows_UI_Notifications_IToastActivatedEventArgs<winrt::Windows::UI::Notifications::IToastActivatedEventArgs>::Arguments(
            &v14,
            &v17);
    v12 = winrt::operator==(v10, (__int64)L"deny", v11);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
    if ( !v12 )
      goto LABEL_6;
    LOWORD(v16) = 256;
  }
  **(_WORD **)a1 = (_WORD)v16;
LABEL_6:
  v13 = *(wil::details **)(a1 + 16);
  if ( v13 )
    v13 = *(wil::details **)v13;
  wil::details::SetEvent(v13, v9);
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
}
