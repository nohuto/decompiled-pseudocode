/*
 * XREFs of GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync$_ResumeCoro$1 @ 0x18035DC20
 * Callers:
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync$_InitCoro$2 @ 0x18035DAE8 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync$_InitCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802229A8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUG.c)
 *     ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18023C80C (-Cancel@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@II@Foundation@Win.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@@experimental@std@@@Z @ 0x18032A448 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView@UMeetAndChat.c)
 *     ??$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA$$QEAUIAsyncAction@Foundation@Windows@2@$$QEAU3452@@Z @ 0x18032A5EC (--$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@-$promise_base@Upromise_type@-$corou.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032D080 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180335978 (-await_resume@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180335A4C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180335A4C.c)
 *     ??$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@@winrt@@YA?AUIAsyncAction@Foundation@Windows@0@AEBU1230@0@Z @ 0x180346534 (--$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@@winrt@@YA-AUIAsyncAction@Foundation@W.c)
 *     _lambda_ca9df4dcfe6d5cd8540c8434d0f06187_::operator() @ 0x180349308 (_lambda_ca9df4dcfe6d5cd8540c8434d0f06187_--operator().c)
 *     _lambda_6f0ec96f73276b26c622c449cb3cd9b5_::operator() @ 0x18034A2B8 (_lambda_6f0ec96f73276b26c622c449cb3cd9b5_--operator().c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
void __fastcall GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  const char *v7; // r9
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  int v10; // [rsp+20h] [rbp-98h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  LOWORD(v10) = *(_WORD *)(a1 + 8);
  switch ( (__int16)v10 )
  {
    case -1:
    case 1:
    case 3:
      goto LABEL_12;
    case 2:
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 16),
        (_QWORD *)(a1 + 153));
      lambda_ca9df4dcfe6d5cd8540c8434d0f06187_::operator()(v3, (__int64 *)(a1 + 32));
      if ( *(_QWORD *)(a1 + 24) )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)(a1 + 24));
      *(_QWORD *)(a1 + 40) = a1 + 32;
      *(_BYTE *)(a1 + 48) = 1;
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 56),
        (_QWORD *)(a1 + 153));
      lambda_6f0ec96f73276b26c622c449cb3cd9b5_::operator()(v4, (__int64 *)(a1 + 72));
      if ( *(_QWORD *)(a1 + 64) )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)(a1 + 64));
      *(_QWORD *)(a1 + 80) = a1 + 72;
      *(_BYTE *)(a1 + 88) = 1;
      v5 = winrt::when_any<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction>(
             (__int64 *)(a1 + 96),
             a1 + 32,
             a1 + 72);
      v6 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
             a1 - 112,
             (__int64)v5);
      *(_QWORD *)(a1 + 104) = 0LL;
      *(_QWORD *)(a1 + 112) = v6;
      *(_QWORD *)(a1 + 120) = 0LL;
      *(_BYTE *)(a1 + 128) = 1;
      *v2 = 4;
      if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type>(
                              (__int64 *)(a1 + 104),
                              a1) )
        return;
      goto LABEL_9;
    case 4:
LABEL_9:
      winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_resume(a1 + 104);
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 104));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
      v7 = (const char *)*(unsigned int *)(*(_QWORD *)(a1 + 153) + 36LL);
      if ( (int)v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1087,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          v7,
          v10);
      winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::Cancel((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 72));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
      winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::Cancel((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 32));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32));
      *(_QWORD *)(a1 + 136) = a1 - 112;
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 136),
              v8) )
        goto LABEL_12;
      return;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 104));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
      winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::Cancel((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 72));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
      winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::Cancel((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 32));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32));
LABEL_12:
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
      v9 = *(std::_Ref_count_base **)(a1 + 161);
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x120);
      break;
    default:
      __debugbreak();
      break;
  }
}
