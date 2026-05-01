/*
 * XREFs of _lambda_2320bd44a73cf61b834c52aa86463e4d_$_ResumeCoro$1::operator() @ 0x180349730
 * Callers:
 *     _lambda_2320bd44a73cf61b834c52aa86463e4d_$_InitCoro$2::operator() @ 0x180349618 (_lambda_2320bd44a73cf61b834c52aa86463e4d_$_InitCoro$2--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802CFC8C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@experimental@std@@@Z @ 0x18032A5B0 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@_ea_18032A5B0.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x18032D458 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x180335A08 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::_promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_ @ 0x180347D6C (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180347D6C.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend_awaiter::await_suspend @ 0x1803603C4 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1803603C4.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall lambda_2320bd44a73cf61b834c52aa86463e4d___ResumeCoro_1::operator()(__int64 a1)
{
  _WORD *v2; // rsi
  const struct winrt::impl::slim_source_location *v3; // rax
  const char *v4; // r9
  int v5; // [rsp+20h] [rbp-78h]
  _BYTE pExceptionObject[40]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  LOWORD(v5) = *(_WORD *)(a1 + 8);
  switch ( (__int16)v5 )
  {
    case -1:
    case 1:
    case 3:
      goto LABEL_11;
    case 2:
      if ( IsDebuggerPresent() )
      {
        *(_QWORD *)(a1 + 56) = a1 - 112;
        *v2 = 0;
        if ( !(unsigned __int8)winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend_awaiter::await_suspend() )
        {
LABEL_11:
          winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::_promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_((__int64 *)(a1 - 112));
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0xE0);
        }
      }
      else
      {
        *(_BYTE *)(a1 - 64) = 1;
        *(_QWORD *)(a1 + 16) = 0LL;
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 32) = 5000000LL;
        *(_QWORD *)(a1 + 40) = 0LL;
        *(_DWORD *)(a1 + 48) = 0;
        if ( *(_DWORD *)(a1 - 16) == 2 )
        {
          v3 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 64);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v3);
          throw (winrt::hresult_canceled *)pExceptionObject;
        }
        if ( *(__int64 *)(a1 + 32) <= 0 )
        {
LABEL_9:
          winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 16));
          winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 16));
          v4 = (const char *)(unsigned int)wil::verify_hresult<long>(0x800705B4);
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1024,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            v4,
            v5);
        }
        *v2 = 6;
        winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type>(
          (__int64 *)(a1 + 16),
          a1);
      }
      return;
    case 6:
      goto LABEL_9;
    case 7:
      winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 16));
      goto LABEL_11;
    default:
      __debugbreak();
      return;
  }
}
