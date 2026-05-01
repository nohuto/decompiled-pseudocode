/*
 * XREFs of ?GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z @ 0x18014BDCC
 * Callers:
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18014BBBC (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIIm.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x18014BD10 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SizeConversionViewInfo::GetAppDataForView(
        SizeConversionViewInfo *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  int (__fastcall *v16)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v17; // rax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 *v20; // rax
  int ScaleFactorForWindow; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h] BYREF
  __int64 v29; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v31; // [rsp+88h] [rbp+38h] BYREF
  int v32; // [rsp+90h] [rbp+40h] BYREF
  int v33; // [rsp+98h] [rbp+48h] BYREF

  v28 = 0LL;
  v4 = **a2;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v28);
  v6 = v4((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v6);
    v8 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return v7;
  }
  v27 = 0LL;
  v10 = v28;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  v12 = v11(v10, &v27);
  v7 = v12;
  if ( v12 < 0 )
  {
    v13 = 83LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v12);
LABEL_26:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
    return v7;
  }
  v31 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 368LL))(v27, &v31);
  v7 = v12;
  if ( v12 < 0 )
  {
    v13 = 87LL;
    goto LABEL_9;
  }
  v32 = 0;
  v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), int *))(*a2)[51])(
          a2,
          &v32);
  v7 = v12;
  if ( v12 < 0 )
  {
    v13 = 93LL;
    goto LABEL_9;
  }
  if ( v32 )
  {
    v14 = 0;
    v31 = 0;
  }
  else
  {
    v14 = v31;
  }
  if ( v14 )
    *((_DWORD *)this + 6) |= 2u;
  v29 = 0LL;
  v26 = 0LL;
  v15 = v27;
  v16 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v27 + 24LL);
  v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v26);
  if ( v16(v15, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v17) < 0
    || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 32LL))(v26, &v29) < 0 )
  {
    v18 = v27;
    v19 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v27 + 24LL);
    v20 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v26);
    ScaleFactorForWindow = v19(v18, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v20);
    v7 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow < 0 )
    {
      v22 = 113LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)ScaleFactorForWindow);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
      goto LABEL_26;
    }
    ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 32LL))(v26, &v29);
    v7 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow < 0 )
    {
      v22 = 114LL;
      goto LABEL_25;
    }
  }
  v33 = 0;
  ScaleFactorForWindow = GetScaleFactorForWindow(v29, &v33);
  v7 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow < 0 )
  {
    v22 = 120LL;
    goto LABEL_25;
  }
  *((_DWORD *)this + 10) = v33;
  v23 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return 0LL;
}
