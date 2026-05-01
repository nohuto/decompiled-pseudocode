/*
 * XREFs of ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x1804E8460
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1800744F0 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x18022136C (-_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?PerformDelayedActivation@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x1804E8220 (-PerformDelayedActivation@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActi.c)
 *     ?RelaunchApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUISplashScreen@@@Z @ 0x1804E8260 (-RelaunchApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     _lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_ @ 0x1802CAC14 (_lambda_5c8667dff346ed4d003bfb934b61e856_--__lambda_5c8667dff346ed4d003bfb934b61e856_.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856_____lambda_5c8667dff346ed4d003bfb934b61e856___ @ 0x1804E7F24 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8667dff346e.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::_PerformDelayedActivationInternal(
        CSwitchController *this,
        struct IImmersiveApplication *a2,
        struct IDelayedAppActivation *a3,
        struct ISplashScreen *a4)
{
  __int64 (__fastcall *v7)(struct IImmersiveApplication *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rbx
  volatile signed __int32 **v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rcx
  DWORD CurrentThreadId; // eax
  int v15; // edi
  CSwitchController **v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  struct IDelayedAppActivation *v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  CSwitchController *v22; // [rsp+80h] [rbp+20h] BYREF
  __int64 v23; // [rsp+88h] [rbp+28h] BYREF

  v22 = this;
  v23 = 0LL;
  if ( a2
    && (v7 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64 *))(*(_QWORD *)a2 + 232LL),
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23),
        v8 = v7(a2, &v23),
        v9 = v8,
        v8 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F0,
      (int)"pcshell\\twinui\\apppositioner\\lib\\switchcontroller.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    v22 = 0LL;
    if ( a4 )
    {
      v17 = &v22;
      v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
      RoGetAgileReference(0LL, &GUID_0e0da070_2224_4934_8090_041f7ff223eb, a4, v10);
    }
    if ( a3 )
      (*(void (__fastcall **)(struct IDelayedAppActivation *))(*(_QWORD *)a3 + 8LL))(a3);
    v19 = a3;
    v18 = 0LL;
    v20[0] = v23;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
    v20[1] = (__int64)v22;
    if ( v22 )
      (*(void (__fastcall **)(CSwitchController *))(*(_QWORD *)v22 + 8LL))(v22);
    v11 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856_____lambda_5c8667dff346ed4d003bfb934b61e856___(
            (volatile signed __int32 **)&v17,
            (volatile signed __int32 *)&v19);
    v12 = *v11;
    *v11 = 0LL;
    v13 = (volatile signed __int32 *)v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v13);
    }
    CurrentThreadId = GetCurrentThreadId();
    v15 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
    if ( v12 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
    lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_((__int64 *)&v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    if ( v15 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x218,
        (int)"pcshell\\twinui\\apppositioner\\lib\\switchcontroller.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      v9 = v15;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  return v9;
}
