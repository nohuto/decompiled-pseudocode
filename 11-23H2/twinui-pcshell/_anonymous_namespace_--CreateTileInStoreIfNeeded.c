/*
 * XREFs of _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1806A0AB4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C520 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1801BC6D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     wil::scope_exit__lambda_f6e53e493654d1a4a6ac1f77113909cc___ @ 0x18024F46C (wil--scope_exit__lambda_f6e53e493654d1a4a6ac1f77113909cc___.c)
 *     _lambda_f6e53e493654d1a4a6ac1f77113909cc_::__lambda_f6e53e493654d1a4a6ac1f77113909cc_ @ 0x18024F680 (_lambda_f6e53e493654d1a4a6ac1f77113909cc_--__lambda_f6e53e493654d1a4a6ac1f77113909cc_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$as@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUISecondaryTilePrivate@StartScreen@UI@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18069BF74 (--$as@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@Utype@-$abi@UIUnknown@Founda.c)
 *     ?TileId@?$consume_Windows_UI_StartScreen_ISecondaryTile@UISecondaryTile@StartScreen@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806A725C (-TileId@-$consume_Windows_UI_StartScreen_ISecondaryTile@UISecondaryTile@StartScreen@UI@Windows@w.c)
 */

// Hidden C++ exception states: #wind=5
volatile signed __int32 *__fastcall anonymous_namespace_::CreateTileInStoreIfNeeded(
        volatile signed __int32 *a1,
        void **a2,
        volatile signed __int32 *a3)
{
  winrt::impl **v6; // rax
  winrt::impl *v7; // rbx
  volatile signed __int32 *v8; // rbx
  signed int v9; // eax
  signed int v10; // eax
  _QWORD *v11; // rax
  unsigned int v12; // r8d
  winrt::impl *v14; // [rsp+20h] [rbp-39h] BYREF
  volatile signed __int32 *v15[3]; // [rsp+28h] [rbp-31h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v18[9]; // [rsp+68h] [rbp+Fh] BYREF

  v15[0] = a1;
  v15[2] = a3;
  v14 = 0LL;
  if ( *(_QWORD *)a3 )
  {
    v6 = (winrt::impl **)winrt::impl::consume_Windows_UI_StartScreen_ISecondaryTile<winrt::Windows::UI::StartScreen::ISecondaryTile>::TileId(
                           a3,
                           v15);
    if ( &v14 != v6 )
    {
      v7 = *v6;
      *v6 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v14);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v14);
      v14 = v7;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(v15);
    winrt::impl::as<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      v15,
      *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))a3);
    v8 = v15[0];
    v9 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15[0] + 96LL))(v15[0]);
    if ( v9 < 0 )
      winrt::throw_hresult(v9);
    v10 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 104LL))(v8);
    if ( v10 < 0 )
      winrt::throw_hresult(v10);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v15);
  }
  v11 = std::wstring::wstring(v18, a2);
  v16[0] = *(_OWORD *)v11;
  v16[1] = *((_OWORD *)v11 + 1);
  v11[2] = 0LL;
  v11[3] = 7LL;
  *(_WORD *)v11 = 0;
  winrt::hstring::hstring((winrt::hstring *)v17, &v14, v12);
  wil::scope_exit__lambda_f6e53e493654d1a4a6ac1f77113909cc___((__int64)a1, (__int64)v16);
  lambda_f6e53e493654d1a4a6ac1f77113909cc_::__lambda_f6e53e493654d1a4a6ac1f77113909cc_((__int64)v16);
  std::wstring::_Tidy_deallocate((__int64)v18);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v14);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a3);
  return a1;
}
