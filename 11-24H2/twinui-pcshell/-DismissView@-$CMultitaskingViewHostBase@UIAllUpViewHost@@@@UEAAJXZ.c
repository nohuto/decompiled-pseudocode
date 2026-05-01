/*
 * XREFs of ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1804B10C0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___::_ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___ @ 0x18069E970 (wil--details--ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___--_ScopeExitFn__lambda_b59f.c)
 *     _lambda_6e770df948d8a5a9abf49638b3e35dc3_::operator() @ 0x18069EEFC (_lambda_6e770df948d8a5a9abf49638b3e35dc3_--operator().c)
 *     ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x18069F6B0 (-DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     ?DisplaySettingsChange@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18069F8B0 (-DisplaySettingsChange@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_D.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_::Invoke @ 0x18069FBF0 (Platform--Details--__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_--Invoke.c)
 *     ?OnMonitorFrameDismissAnimationCompleted@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A0210 (-OnMonitorFrameDismissAnimationCompleted@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1806A0C10 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x1800B3740 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ??$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA?AV01@AEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18011EFD8 (--$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA-AV.c)
 *     ??$As@UIMultitaskingViewDismissCallback@@@?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDismissCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x18011F960 (--$As@UIMultitaskingViewDismissCallback@@@-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QE.c)
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18011FD88 (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0 @ 0x1802A4034 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1802A4034.c)
 *     ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802CCBC4 (--1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_2982927e39568cdd3df99df702aa65a9_@@@ComTaskPool@Internal@Windows@@V_lambda_2982927e39568cdd3df99df702aa65a9_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_2982927e39568cdd3df99df702aa65a9_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_2982927e39568cdd3df99df702aa65a9_@@@Z @ 0x1804B0E58 (--$Make@V-$CTaskWrapper@V_lambda_2982927e39568cdd3df99df702aa65a9_@@@ComTaskPool@Internal@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(__int64 a1)
{
  int *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  volatile signed __int32 *v11; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A8h] BYREF
  int v16; // [rsp+68h] [rbp-A0h]
  volatile signed __int32 *v17[42]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v15 = (a1 + 24) & -(__int64)(a1 != 0);
  v16 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v15, 1);
  *(_BYTE *)(a1 + 112) = 0;
  v2 = (int *)(a1 + 72);
  MultitaskingViewTelemetry::DismissMultitaskingView::Start<enum MULTITASKING_VIEW_TYPES &>(
    (struct wil::details::IFailureCallback *)v17,
    (int *)(a1 + 72));
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0(a1 + 96);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  v10 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IMultitaskingViewManager>::As<IMultitaskingViewDismissCallback>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 80),
         &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v13 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v14 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
    v5 = Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2982927e39568cdd3df99df702aa65a9_>,_lambda_2982927e39568cdd3df99df702aa65a9_>(
           &v11,
           (volatile signed __int32 *)&v13);
    v6 = *v5;
    *v5 = 0LL;
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
    }
    CurrentThreadId = GetCurrentThreadId();
    SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
    if ( v6 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)&v13);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), (unsigned int)*v2);
    MultitaskingViewTelemetry::DismissMultitaskingView::Stop((__int64)v17, *v2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (int)"pcshell\\twinui\\MultitaskingView\\inc\\BaseViewHost.h",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  MultitaskingViewTelemetry::DismissMultitaskingView::~DismissMultitaskingView(v17);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v15);
  return v4;
}
