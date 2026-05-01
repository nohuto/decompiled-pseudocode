/*
 * XREFs of ??$MakeAndInitialize@VGammaFlashAsyncOperation@@UIAsyncAction@Foundation@Windows@@AEAMAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAsyncAction@Foundation@Windows@@AEAMAEAI2@Z @ 0x1803426D4
 * Callers:
 *     ?GammaFlash@GamingOverlayExperienceManager@@UEAAJMIIPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18034D860 (-GammaFlash@GamingOverlayExperienceManager@@UEAAJMIIPEAPEAUIAsyncAction@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802277E4 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@QEAA@XZ @ 0x180346A9C (--0-$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1-c_.c)
 *     ?RuntimeClassInitialize@GammaFlashAsyncOperation@@QEAAJMII@Z @ 0x180359C20 (-RuntimeClassInitialize@GammaFlashAsyncOperation@@QEAAJMII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GammaFlashAsyncOperation,Windows::Foundation::IAsyncAction,float &,unsigned int &,unsigned int &>(
        _QWORD *a1,
        float *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  int v10; // edi
  void *v12[2]; // [rsp+28h] [rbp-30h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v12[0] = v8;
  if ( v8 )
  {
    AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>(v8);
    *v9 = &GammaFlashAsyncOperation::`vftable'{for `Windows::Foundation::IAsyncAction'};
    v9[1] = &GammaFlashAsyncOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>'};
    v9[2] = &GammaFlashAsyncOperation::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>,Microsoft::WRL::FtmBase>>'};
    v9[12] = &GammaFlashAsyncOperation::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>,Microsoft::WRL::FtmBase>>'};
    *((_BYTE *)v9 + 260) = 0;
    v12[1] = v9;
    v12[0] = 0LL;
    v10 = GammaFlashAsyncOperation::RuntimeClassInitialize((GammaFlashAsyncOperation *)v9, *a2, *a3, *a4);
    if ( v10 >= 0 )
      v10 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v9)(
              v9,
              &GUID_5a648006_843a_4da9_865b_9d26e5dfad7b,
              a1);
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(v12);
  return (unsigned int)v10;
}
