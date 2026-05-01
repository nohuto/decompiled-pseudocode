/*
 * XREFs of ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1805FB960
 * Callers:
 *     ApplicationFlyoutView::Show$_InitCoro$2 @ 0x1805FB804 (ApplicationFlyoutView--Show$_InitCoro$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1801786A0 (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802229A8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUG.c)
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x1802CE874 (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180335A4C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180335A4C.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805F83B4 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1805FAAD8 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1805FC028 (-TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall ApplicationFlyoutView::Show__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r12
  __int64 v3; // r14
  _DWORD *v4; // rsi
  _OWORD *v5; // rbx
  __int64 v6; // rcx
  void *v7; // r8
  const struct winrt::impl::slim_source_location *v8; // rax
  TraceLoggingCorrelationVector **v9; // r8
  HWND v10; // rbx
  __int64 v11; // rdx
  _BYTE pExceptionObject[80]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_9;
    case 2:
      CorrelationVector::Extend(*(TraceLoggingCorrelationVector ***)(a1 + 129), (void **)(a1 + 16));
      v3 = *(_QWORD *)(a1 + 97);
      v4 = *(_DWORD **)(a1 + 113);
      v5 = *(_OWORD **)(a1 + 105);
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 40), (RTL_SRWLOCK *)(v3 + 64));
      *(_OWORD *)(v3 + 72) = *v5;
      *(_DWORD *)(v3 + 88) = *v4;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 40));
      *(_QWORD *)(a1 + 80) = a1 - 112;
      *(_BYTE *)(a1 + 24) = 0;
      if ( *(_DWORD *)(a1 - 112 + 96) == 2 )
      {
        v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 48);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v8);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *v2 = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(v6, (void (*)(void *, void *))a1, v7);
      return;
    case 4:
      v9 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)(a1 + 16));
      v10 = (HWND)ApplicationFlyoutView::EnsureWindow(*(ApplicationFlyoutView **)(a1 + 97), *(_QWORD *)(a1 + 121), v9);
      ApplicationFlyoutView::TryShowHideWindow(*(ApplicationFlyoutView **)(a1 + 97), v10, 1);
      if ( !SetForegroundWindow(v10) )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x84,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)0x80070005LL);
      std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>((void **)(a1 + 16));
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 80);
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 32),
              v11) )
        goto LABEL_9;
      return;
    case 5:
      std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>((void **)(a1 + 16));
LABEL_9:
      *(_QWORD *)(a1 + 80) = a1 - 112;
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x100);
      break;
    default:
      __debugbreak();
      break;
  }
}
