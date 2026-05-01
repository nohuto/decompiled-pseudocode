/*
 * XREFs of _lambda_40fb1581da804d2ea8e9861d525112d3_$_ResumeCoro$1::operator() @ 0x180349C00
 * Callers:
 *     _lambda_40fb1581da804d2ea8e9861d525112d3_$_InitCoro$2::operator() @ 0x180349AE4 (_lambda_40fb1581da804d2ea8e9861d525112d3_$_InitCoro$2--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802CFC8C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@experimental@std@@@Z @ 0x18032A480 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032D430 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x180335898 (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x1803359BC (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::_promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_ @ 0x180347D6C (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180347D6C.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend_awaiter::await_suspend @ 0x1803603C4 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1803603C4.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall lambda_40fb1581da804d2ea8e9861d525112d3___ResumeCoro_1::operator()(__int64 a1)
{
  _WORD *v2; // rsi
  __int64 v3; // rcx
  const struct winrt::impl::slim_source_location *v4; // rax
  const char *v5; // r9
  int v6; // [rsp+20h] [rbp-48h]
  _BYTE pExceptionObject[32]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  LOWORD(v6) = *(_WORD *)(a1 + 8);
  switch ( (__int16)v6 )
  {
    case -1:
    case 1:
    case 3:
      goto LABEL_8;
    case 2:
      *(_BYTE *)(a1 - 64) = 1;
      v3 = *(_QWORD *)(**(_QWORD **)(a1 + 113) + 16LL);
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_QWORD *)(a1 + 40) = v3;
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_DWORD *)(a1 + 64) = 0;
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v4 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 80);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v4);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      if ( winrt::impl::signal_awaiter::await_ready((HANDLE *)(a1 + 16)) )
        goto LABEL_7;
      *v2 = 6;
      winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>(
        (__int64 *)(a1 + 16),
        a1);
      break;
    case 6:
LABEL_7:
      winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 16));
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 16));
      v5 = (const char *)(unsigned int)wil::verify_hresult<long>(0x800704C7);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x101A,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        v5,
        v6);
    case 7:
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 16));
LABEL_8:
      winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::_promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_((__int64 *)(a1 - 112));
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0xF0);
      break;
    default:
      __debugbreak();
      break;
  }
}
