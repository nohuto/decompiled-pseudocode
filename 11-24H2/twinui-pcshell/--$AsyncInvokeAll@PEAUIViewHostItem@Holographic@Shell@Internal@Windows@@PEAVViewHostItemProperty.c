/*
 * XREFs of ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemPropertyChangedArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemPropertyChangedArgs@@@Z @ 0x180405F1C
 * Callers:
 *     ?_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18040DCC8 (-_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1800AB40C (-InternalAddRef@-$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800BC4BC (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x1800C7654 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0?$__func@V_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@QEAA@$$QEAV_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@@Z @ 0x180407974 (--0-$__func@V_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@$$A6AJPEAU-$ITypedEventHandler@PEAUIView.c)
 *     ??1_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@QEAA@XZ @ 0x180407B3C (--1_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@QEAA@XZ.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@wistd@@@Z @ 0x180408E84 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18040A47C (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::IViewHostItem *,ViewHostItemPropertyChangedArgs *>(
        PVOID Parameter,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+28h] [rbp-49h] BYREF
  __int64 v10; // [rsp+30h] [rbp-41h] BYREF
  __int64 v11; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v13[104]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+3Fh]

  v14 = 0LL;
  v9 = *a3;
  v5 = v9;
  Microsoft::WRL::ComPtr<CStartExperienceManager>::InternalAddRef(&v9);
  v11 = v5;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease(&v9);
  v6 = *a2;
  v9 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v9 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v10 = v5;
  Microsoft::WRL::ComPtr<CStartExperienceManager>::InternalAddRef(&v10);
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=((__int64)v12);
  v14 = wistd::__function::__func<_lambda_2532e8ff3850da9d761cbeb5a695a89f_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *> *)>::__func<_lambda_2532e8ff3850da9d761cbeb5a695a89f_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *> *)>(
          v13,
          &v9);
  _lambda_2532e8ff3850da9d761cbeb5a695a89f_::~_lambda_2532e8ff3850da9d761cbeb5a695a89f_((_lambda_2532e8ff3850da9d761cbeb5a695a89f_ *)&v9);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease(&v11);
  v7 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DoAsyncInvoke(Parameter);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v12);
  return v7;
}
