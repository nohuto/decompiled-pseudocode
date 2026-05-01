/*
 * XREFs of _anonymous_namespace_::TryLoadLogoImageStream @ 0x1806A8938
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1806A776C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$ActivateInstance@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@3@XZ @ 0x180699C4C (--$ActivateInstance@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivatio.c)
 *     ??$call@P6A?AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@AEBUIActivationFactory@Foundation@Windows@6@@Z@?$factory_cache_entry@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?A_P$$QEAP6A?AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x18069C4BC (--$call@P6A-AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@AEBUIActivationFac.c)
 *     ??$wait_get@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@1@@Z @ 0x18069DA14 (--$wait_get@U-$IAsyncOperation@U-$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsI.c)
 *     ?GetStreamAsync@?$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoLoader@UILogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@AEBUTileImageResource@UnifiedTile@Shell@WindowsInternal@3@AEBULogoOptions@LogoLoading@5673@@Z @ 0x1806A24DC (-GetStreamAsync@-$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoLoader@UILogoLoader.c)
 *     ?Value@?$consume_Windows_Foundation_Collections_IKeyValuePair@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@5@UIRandomAccessStream@Streams@Storage@45@@impl@winrt@@QEBA@XZ @ 0x1806A8BD8 (-Value@-$consume_Windows_Foundation_Collections_IKeyValuePair@U-$IKeyValuePair@ULogoInfo@LogoLoa.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall anonymous_namespace_::TryLoadLogoImageStream(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  _QWORD *StreamAsync; // rdx
  const char *v7; // r9
  _QWORD *result; // rax
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h] BYREF
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp-50h]
  void (__fastcall *v13[2])(__int64, __int64 *); // [rsp+48h] [rbp-40h] BYREF
  winrt::Windows::Foundation::IUnknown *v14; // [rsp+58h] [rbp-30h]
  winrt::Windows::Foundation::IUnknown *v15; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v12 = (_QWORD *)a1;
    v14 = a2;
    v15 = a3;
    v13[1] = (void (__fastcall *)(__int64, __int64 *))&qword_180992028;
    _InterlockedIncrement64(&qword_180992028);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader,winrt::Windows::Foundation::IActivationFactory> )
    {
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader>(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader,winrt::Windows::Foundation::IActivationFactory>,
        &v9);
      _InterlockedDecrement64(&qword_180992028);
    }
    else
    {
      _InterlockedDecrement64(&qword_180992028);
      v13[0] = (void (__fastcall *)(__int64, __int64 *))_lambda_cb9c074cd4f47cf0d3e01dbc2dd3609e_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        a1,
        (__int64)&v9,
        v13);
    }
    StreamAsync = winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoLoader<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::ILogoLoader>::GetStreamAsync(
                    &v9,
                    &v11,
                    a2,
                    a3);
    winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>>>(
      (__int64)&v10,
      StreamAsync);
    winrt::impl::consume_Windows_Foundation_Collections_IKeyValuePair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>,winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>::Value(
      &v10,
      a1);
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    if ( v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    if ( *(_QWORD *)a2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
    if ( *(_QWORD *)a3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
    result = (_QWORD *)a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xDF,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      v7);
    *v12 = 0LL;
    if ( *(_QWORD *)v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v14);
    if ( *(_QWORD *)v15 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v15);
    return v12;
  }
  return result;
}
