/*
 * XREFs of _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x180133BE8
 * Callers:
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180133B1C (_anonymous_namespace_--GetScreenClippingAUMID.c)
 * Callees:
 *     ?ApplicationUserModelId@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800918B8 (-ApplicationUserModelId@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppE.c)
 *     ?Find@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180091FDC (-Find@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionSta.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$get_runtime_activation_factory_impl@$00@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B3F98 (--$get_runtime_activation_factory_impl@$00@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUgu.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1802CEB40 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x18039160C (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ??$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@Z @ 0x180455888 (--$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 */

// Hidden C++ exception states: #wind=4
volatile signed __int32 **__fastcall anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rbx
  __int64 v5; // rcx
  bool v6; // di
  _DWORD *v7; // rcx
  __int64 v8; // rbx
  volatile signed __int32 **v9; // rax
  volatile signed __int32 *v10; // rdi
  __int64 v12; // [rsp+38h] [rbp-81h] BYREF
  volatile signed __int32 *v13; // [rsp+40h] [rbp-79h] BYREF
  void (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // [rsp+48h] [rbp-71h] BYREF
  void (__fastcall ***v15)(_QWORD, __int64 *, __int64 *); // [rsp+50h] [rbp-69h] BYREF
  _QWORD *v16; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v17[16]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v18[4]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v19[4]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v20[4]; // [rsp+B0h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+D0h] [rbp+17h] BYREF

  v18[1] = (__int64)a1;
  v18[2] = (__int64)a2;
  *a1 = 0LL;
  v13 = 0LL;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v20,
    L"WindowsUdk.ApplicationModel.AppExtensions.AppExtension",
    54);
  v14 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<1>(&v12, v20, (__int64)L"5", (__int64 *)&v14);
  if ( (int)v12 < 0 )
  {
    winrt::hresult_error::hresult_error(v17);
    if ( v18[0] )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v18);
    winrt::handle_type<winrt::impl::bstr_traits>::close(v17);
  }
  v4 = v14;
  v15 = v14;
  v6 = winrt::Windows::Foundation::operator==(&v15, &v13) == 0;
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  if ( v6 )
  {
    v7 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                     v5,
                     (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
    if ( *v7 > 5u )
      tlgWriteTransfer_EventWriteTransfer((__int64)v7, (unsigned __int8 *)dword_180851AC1, 0LL, 0LL, 2u, &v21);
    v19[0] = *a2;
    v16 = v19;
    v18[3] = (__int64)&qword_18098E268;
    _InterlockedIncrement64(&qword_18098E268);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
    {
      winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::Find(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
        &v12,
        v19);
      _InterlockedDecrement64(&qword_18098E268);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E268);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_e84bcefeb7ed3703767eef0b25e91c21_ &>(
        v7,
        &v12,
        &v16);
    }
    v8 = v12;
    if ( v12 )
    {
      v9 = (volatile signed __int32 **)winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ApplicationUserModelId(
                                         &v12,
                                         &v13);
      if ( a1 != v9 )
      {
        v10 = *v9;
        *v9 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
        winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
        *a1 = v10;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
    }
    if ( v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  return a1;
}
