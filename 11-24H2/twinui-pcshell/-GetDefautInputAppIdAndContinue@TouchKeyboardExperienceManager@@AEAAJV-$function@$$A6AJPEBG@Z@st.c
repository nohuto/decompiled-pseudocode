/*
 * XREFs of ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x1800E1D0C
 * Callers:
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180251890 (-ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804740E0 (-RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x18001A78C (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180055520 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800858F0 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800E2810 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgR_ea_1800E2810.c)
 *     ??1?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E2868 (--1-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsP_ea_1800E2868.c)
 *     ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800E289C (--1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E28F4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?StartActivity@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXH@Z @ 0x1802A9A58 (-StartActivity@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_75452c5cb5e77a67412b4cfed81632b0___ @ 0x180469438 (Windows--Internal--ComTaskPool--QueueTask__lambda_75452c5cb5e77a67412b4cfed81632b0___.c)
 *     _lambda_75452c5cb5e77a67412b4cfed81632b0_::_lambda_75452c5cb5e77a67412b4cfed81632b0_ @ 0x18046BB04 (_lambda_75452c5cb5e77a67412b4cfed81632b0_--_lambda_75452c5cb5e77a67412b4cfed81632b0_.c)
 *     _lambda_75452c5cb5e77a67412b4cfed81632b0_::__lambda_75452c5cb5e77a67412b4cfed81632b0_ @ 0x18046C51C (_lambda_75452c5cb5e77a67412b4cfed81632b0_--__lambda_75452c5cb5e77a67412b4cfed81632b0_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TouchKeyboardExperienceManager::GetDefautInputAppIdAndContinue(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  int v5; // eax
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  void **v16; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[272]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v18[8]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v19[48]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v20[416]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+378h] [rbp+278h]

  v15[1] = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v16,
    (__int64)"GetDefautInputAppIdAndContinue");
  v16 = &TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::`vftable';
  TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *)&v16,
    *(_DWORD *)(a1 + 928));
  v13 = 0LL;
  v14 = &v13;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v14);
  v5 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>(a1, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v15[0] = a1;
    v9 = lambda_75452c5cb5e77a67412b4cfed81632b0_::_lambda_75452c5cb5e77a67412b4cfed81632b0_(
           (unsigned int)v20,
           (unsigned int)&v13,
           (unsigned int)v15,
           (unsigned int)&v16,
           a2);
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_75452c5cb5e77a67412b4cfed81632b0___(
           v11,
           v10,
           *(unsigned int *)(a1 + 972),
           v9);
    lambda_75452c5cb5e77a67412b4cfed81632b0_::__lambda_75452c5cb5e77a67412b4cfed81632b0_(v20);
    if ( v6 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::~GetDefautInputAppIdAndContinue((TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *)&v16);
      v6 = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 1012) = 0;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7C4,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::~GetDefautInputAppIdAndContinue((TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *)&v16);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 1012) = 0;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x772,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v16 = &TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::`vftable';
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v16);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v19);
    wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v18);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>(v17);
  }
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    a2,
    v8);
  return (unsigned int)v6;
}
