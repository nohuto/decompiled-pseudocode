/*
 * XREFs of ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802FDCD4
 * Callers:
 *     _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator() @ 0x1802F6260 (_lambda_73bca28b4d92a1291c49cf8f8a9be4e0_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a___1_long_::Invoke @ 0x1802F8730 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F8730.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180031F14 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180033F04 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180087AC8 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180087AC8.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1801C3D88 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D13C0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F32B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801F32B0.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long___lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___ @ 0x1802F4DDC (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802F4DDC.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802F58C0 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1802F58C0.c)
 *     wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___ @ 0x1802F5A44 (wil--details--lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___--lambda_call__lambda_9532c.c)
 *     _lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_ @ 0x1802F5B0C (_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_--__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_.c)
 *     wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::_lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___ @ 0x1802F5CA0 (wil--details--lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___--_lambda_call__lambda_9532.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F5F24 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x1802F98BC (-Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F9E4C (-StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1802FB900 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N@Z @ 0x1802FBCEC (-_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@V.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAppViewManager::_SwitchAsyncWorker(
        CAppViewManager *a1,
        HWND a2,
        HWND a3,
        unsigned int a4,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a5,
        struct IAsyncCallback *a6)
{
  __int64 v10; // rcx
  int v11; // ebx
  __int64 *v12; // rax
  volatile int *v13; // rdx
  struct IAsyncCallback *v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  CAppViewManagerTelemetry::SwitchAsyncWorker *v17; // rax
  bool v19; // [rsp+40h] [rbp-C0h] BYREF
  struct IAsyncCallback *v20; // [rsp+48h] [rbp-B8h] BYREF
  RTL_SRWLOCK *v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v23[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h]
  _QWORD v25[42]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v26[42]; // [rsp+1C0h] [rbp+C0h] BYREF
  char v27; // [rsp+310h] [rbp+210h]
  __int64 v28[3]; // [rsp+320h] [rbp+220h] BYREF
  int v29; // [rsp+338h] [rbp+238h]
  void **v30; // [rsp+340h] [rbp+240h] BYREF
  _BYTE v31[344]; // [rsp+490h] [rbp+390h] BYREF
  struct IAsyncCallback *v32; // [rsp+5E8h] [rbp+4E8h]
  _QWORD v33[42]; // [rsp+5F0h] [rbp+4F0h] BYREF
  _QWORD v34[42]; // [rsp+740h] [rbp+640h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v25,
    (__int64)"SwitchAsyncWorker");
  v25[0] = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  CAppViewManagerTelemetry::SwitchAsyncWorker::StartActivity((CAppViewManagerTelemetry::SwitchAsyncWorker *)v25);
  v19 = 0;
  CIAMGlobals::AcquireExclusive(v10, &v21);
  v11 = CAppViewManager::_EvaluateFrameworkViewTypeForSwitchHelper(a1, a2, a3, a5, &v19);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v21);
  if ( v11 >= 0 && v19 )
  {
    v21 = (RTL_SRWLOCK *)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    CAppViewManagerTelemetry::SwitchAsyncWorker::Split((__int64)v25, v34);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v33,
      (__int64)v34);
    v33[0] = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v26);
    v26[0] = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
    v27 = 1;
    v20 = a6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
    v28[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v28);
    v28[1] = (__int64)a2;
    v28[2] = (__int64)a3;
    v29 = a4 | 2;
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v30,
      (__int64)v34);
    v30 = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
    wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___(
      (__int64)v31,
      (__int64)v26);
    v32 = a6;
    v20 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::_lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___((CAppViewManagerTelemetry::SwitchAsyncWorker *)v26);
    v12 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long___lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___(
            (__int64 *)&v20,
            (__int64)v28);
    v14 = (struct IAsyncCallback *)*v12;
    v22 = *v12;
    *v12 = 0LL;
    v15 = (__int64)v20;
    if ( v20 )
    {
      v20 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
        v15,
        v13);
    }
    v23[0] = 0;
    v23[1] = 0;
    v24 = 0LL;
    v16 = CAppViewManager::_ShowViewAsyncWorker(
            a1,
            a3,
            a2,
            (const struct CAppViewManager::ShowViewAsyncOptions *)v23,
            0LL,
            v14,
            0LL);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v25, v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_(v28);
    CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)v33);
    CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  }
  else
  {
    v17 = (CAppViewManagerTelemetry::SwitchAsyncWorker *)CAppViewManagerTelemetry::SwitchAsyncWorker::Split(
                                                           (__int64)v25,
                                                           v26);
    v16 = CAppViewManager::_ContinueSwitchAsyncWorker((__int64)a1, (__int64)a2, (__int64)a3, a4, v17, a6);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v25, v16);
  }
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)v25);
  return v16;
}
