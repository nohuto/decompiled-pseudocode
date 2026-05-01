/*
 * XREFs of _lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_::operator()_winrt::Windows::Foundation::IInspectable_const_&_ @ 0x180657638
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4___::Invoke @ 0x18065B6C0 (winrt--impl--delegate_winrt--Windows--UI--Xaml--Input--PointerEventHandler__lambda_4df4384ae3b5e.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?PointerId@?$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180650DBC (-PointerId@-$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl.c)
 *     ?Position@?$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180651560 (-Position@-$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@.c)
 *     ?GetCurrentPoint@?$consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs@UIPointerRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUUIElement@Xaml@UI@Windows@3@@Z @ 0x18065B2C8 (-GetCurrentPoint@-$consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs@UIPointerRoutedEventArg.c)
 *     ?Pointer@?$consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs@UIPointerRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18065B9E0 (-Pointer@-$consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs@UIPointerRoutedEventArgs@Input@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_::operator()_winrt::Windows::Foundation::IInspectable_const___(
        __int64 *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  signed int v5; // eax
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  __int64 v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+30h] BYREF
  winrt::Windows::Foundation::IUnknown *v14; // [rsp+70h] [rbp+38h]
  __int64 v15; // [rsp+78h] [rbp+40h] BYREF

  v14 = a3;
  v13 = a2;
  if ( !*(_BYTE *)(*a1 + 160) )
  {
    winrt::impl::consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs<winrt::Windows::UI::Xaml::Input::IPointerRoutedEventArgs>::Pointer(
      a3,
      v11);
    LODWORD(v13) = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v11[0] + 56LL))(v11[0], &v13);
    if ( v5 < 0 )
      winrt::throw_hresult(v5);
    if ( (_DWORD)v13 == 2 )
    {
      v6 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(*a1 + 120);
      if ( v6 )
      {
        v15 = 0LL;
        (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>, &v15);
        v7 = v15;
        v13 = v15;
      }
      else
      {
        v13 = 0LL;
        v7 = 0LL;
      }
      winrt::impl::consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs<winrt::Windows::UI::Xaml::Input::IPointerRoutedEventArgs>::GetCurrentPoint(
        a3,
        &v12,
        &v13);
      if ( v7 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
      v8 = *a1;
      v9 = winrt::impl::consume_Windows_UI_Input_IPointerPoint<winrt::Windows::UI::Input::IPointerPoint>::Position(
             &v12,
             &v15);
      LODWORD(v13) = winrt::impl::consume_Windows_UI_Input_IPointerPoint<winrt::Windows::UI::Input::IPointerPoint>::PointerId(&v12);
      v10 = *(_QWORD *)(v8 + 80);
      if ( !v10 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)v10 + 16LL))(v10, &v13, v9);
      if ( v12 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
    }
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v11);
  }
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
}
