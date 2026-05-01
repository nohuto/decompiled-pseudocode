/*
 * XREFs of ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x18002DAA0
 * Callers:
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180326FF0 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180327290 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002CCD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18002CD38 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18002D460 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHand.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenManager::IsViewFullScreen(CFullScreenManager *this, struct IApplicationView *a2, int *a3)
{
  int v3; // esi
  __int64 v5; // rax
  int (__fastcall *v8)(struct IApplicationView *, __int64 *); // rbx
  char v9; // dl
  IUnknown *v10; // rbx
  HRESULT v11; // eax
  void *v12; // rbx
  __int64 (__fastcall *v13)(void *, struct IApplicationView *, __int64 *); // rdi
  int v14; // eax
  _OWORD *v15; // rax
  _OWORD *v16; // rbx
  __int128 v17; // xmm0
  char *v18; // xmm1_8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-20h] BYREF
  __int128 v23; // [rsp+28h] [rbp-18h]
  char *v24; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  char v26; // [rsp+78h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+80h] [rbp+40h] BYREF
  __int64 v28; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  *a3 = 0;
  v5 = *(_QWORD *)a2;
  v22 = 0LL;
  v8 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(v5 + 264);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  if ( v8(a2, &v22) < 0 )
    goto LABEL_9;
  v26 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl,
    v9);
  v10 = (IUnknown *)*((_QWORD *)this - 9);
  v24 = &v26;
  *(_QWORD *)&v23 = a2;
  *((_QWORD *)&v23 + 1) = a3;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v11 = IUnknown_QueryService(
          v10,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          &ppvOut);
  if ( v11 >= 0 )
  {
    v12 = ppvOut;
    v28 = 0LL;
    v13 = *(__int64 (__fastcall **)(void *, struct IApplicationView *, __int64 *))(*(_QWORD *)ppvOut + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    v14 = v13(v12, a2, &v28);
    if ( v14 < 0 )
    {
      v20 = (unsigned int)v14;
      v21 = 83LL;
    }
    else
    {
      v15 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v15;
      if ( v15 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)v15);
        v17 = v23;
        v18 = v24;
        *(_QWORD *)v16 = off_18070B440;
        v16[3] = v17;
        *((_QWORD *)v16 + 1) = &ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        *((_QWORD *)v16 + 8) = v18;
        (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v28 + 24LL))(v28, v16);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v16);
LABEL_6:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
        goto LABEL_7;
      }
      v20 = 2147942414LL;
      v21 = 87LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
      (const char *)v20);
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50,
    (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
    (const char *)(unsigned int)v11);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  if ( !v26 )
  {
    LOBYTE(v3) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22) == 4;
    *a3 = v3;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  return 0LL;
}
