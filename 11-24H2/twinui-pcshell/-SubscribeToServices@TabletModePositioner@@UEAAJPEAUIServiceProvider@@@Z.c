/*
 * XREFs of ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180072710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TabletModePositioner::SubscribeToServices(TabletModePositioner *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  _QWORD *v5; // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v11; // eax
  __int64 v12; // rdx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  _QWORD *v14; // r12
  int v15; // eax
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rsi
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rsi
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rsi
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rsi
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v23)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v24)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v25)(IServiceProvider *, const GUID *const, const IID *const, void **); // rsi
  HRESULT (__stdcall *v26)(IServiceProvider *, const GUID *const, const IID *const, void **); // rsi
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  HRESULT (__stdcall *v30)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  HRESULT (__stdcall *v34)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v35; // r12
  __int64 v36; // rdi
  __int64 (__fastcall *v37)(__int64, __int64, __int64 *); // rbx
  int v38; // eax
  HRESULT (__stdcall *QueryInterface)(IServiceProvider *, const IID *const, void **); // rbx
  int v40; // eax
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // [rsp+30h] [rbp-59h] BYREF
  __int64 v52; // [rsp+38h] [rbp-51h] BYREF
  __int64 v53; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v54; // [rsp+48h] [rbp-41h] BYREF
  int v55; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v56[3]; // [rsp+58h] [rbp-31h] BYREF
  char *v57; // [rsp+70h] [rbp-19h]
  __int128 v58; // [rsp+80h] [rbp-9h] BYREF
  __int128 v59; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v52 = 0LL;
  v51 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  v5 = (_QWORD *)((char *)this + 312);
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 39);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 40);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
          a2,
          &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
          &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
          (char *)this + 320);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 346LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v11);
LABEL_76:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v51);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
    return v8;
  }
  v13 = a2->lpVtbl->QueryService;
  v14 = (_QWORD *)((char *)this + 328);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 41);
  v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
          a2,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          (char *)this + 328);
  v8 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15B,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v15);
    return v8;
  }
  v16 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 42);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
          a2,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          (char *)this + 336);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 348LL;
    goto LABEL_10;
  }
  v17 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 43);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v17)(
          a2,
          &GUID_05ac56a6_baf7_414f_b92c_7156052701de,
          &GUID_2010122c_468a_480f_8cd1_b85e76f5882e,
          (char *)this + 344);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 349LL;
    goto LABEL_10;
  }
  v18 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 44);
  ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v18)(
    a2,
    &SID_VirtualDesktopManager,
    &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
    (char *)this + 352);
  v19 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 45);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v19)(
          a2,
          &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
          &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
          (char *)this + 360);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 353LL;
    goto LABEL_10;
  }
  v20 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 46);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))v20)(
          a2,
          &unk_18077BD30,
          &GUID_bed1afcc_2de8_451c_9d0f_b5e62404b714,
          (char *)this + 368);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 354LL;
    goto LABEL_10;
  }
  v21 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v21)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
          &v52);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 355LL;
    goto LABEL_10;
  }
  v22 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 47);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v22)(
          a2,
          &SID_ImmersiveShellHookService,
          &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
          (char *)this + 376);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 356LL;
    goto LABEL_10;
  }
  v23 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 48);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v23)(
          a2,
          &SID_MultitaskingViewVisibilityService,
          &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
          (char *)this + 384);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 357LL;
    goto LABEL_10;
  }
  v24 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v51);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v24)(
          a2,
          &SID_ShellTargetingTracker,
          &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
          &v51);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 358LL;
    goto LABEL_10;
  }
  v25 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 49);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v25)(
          a2,
          &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
          &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
          (char *)this + 392);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 359LL;
    goto LABEL_10;
  }
  v26 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 52);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v26)(
          a2,
          &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
          &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
          (char *)this + 416);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 360LL;
    goto LABEL_10;
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 40) + 24LL))(
          *((_QWORD *)this + 40),
          ((unsigned __int64)this + 112) & -(__int64)(this != (TabletModePositioner *)24),
          (char *)this + 468);
  v8 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16A,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v27);
    v28 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    return v8;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(*(_QWORD *)*v14 + 72LL))(
          *v14,
          ((unsigned __int64)this + 120) & -(__int64)(this != (TabletModePositioner *)24),
          (char *)this + 472);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 364LL;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v14 + 24LL))(*v14, (char *)this + 212);
  v30 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 51);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v30)(
          a2,
          &SID_TransitionCoordinator,
          &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
          (char *)this + 408);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 367LL;
    goto LABEL_10;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 51) + 24LL))(
          *((_QWORD *)this + 51),
          ((unsigned __int64)this + 176) & -(__int64)(this != (TabletModePositioner *)24),
          (char *)this + 492);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 368LL;
    goto LABEL_10;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned __int64, char *))(**((_QWORD **)this + 47) + 24LL))(
          *((_QWORD *)this + 47),
          &unk_18077BD80,
          1LL,
          ((unsigned __int64)this + 144) & -(__int64)(this != (TabletModePositioner *)24),
          (char *)this + 480);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 374LL;
    goto LABEL_10;
  }
  v31 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 48) + 32LL))(
          *((_QWORD *)this + 48),
          ((unsigned __int64)this + 152) & -(__int64)(this != (TabletModePositioner *)24),
          (char *)this + 484);
  v8 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x177,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v31);
    v32 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v33 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    return v8;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v51 + 24LL))(
          v51,
          ((unsigned __int64)this + 160) & -(__int64)(this != (TabletModePositioner *)24),
          (char *)this + 488);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 376LL;
    goto LABEL_10;
  }
  v56[0] = *v5;
  v56[1] = *v14;
  v56[2] = *((_QWORD *)this + 43);
  if ( this == (TabletModePositioner *)24 )
    v57 = 0LL;
  else
    v57 = (char *)this + 64;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 35) + 24LL))(*((_QWORD *)this + 35), v56);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 385LL;
    goto LABEL_10;
  }
  v34 = a2->lpVtbl->QueryService;
  v35 = (char *)this + 424;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 53);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v34)(
          a2,
          &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
          &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
          (char *)this + 424);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 388LL;
    goto LABEL_10;
  }
  v54 = 0LL;
  v36 = *(_QWORD *)v35;
  v37 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(**(_QWORD **)v35 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v54);
  v38 = v37(v36, 2LL, (__int64 *)&v54);
  v8 = v38;
  if ( v38 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x187,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v38);
LABEL_75:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v54);
    goto LABEL_76;
  }
  v53 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v53);
  if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &v53) >= 0 )
  {
    v55 = 0;
    v40 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v53 + 48LL))(v53, &v55);
    if ( v40 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18F,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v40);
    if ( v55 )
    {
      v59 = 0LL;
      v41 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v53 + 88LL))(v53, &v59);
      if ( v41 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x194,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v41);
      v42 = *v54;
      v58 = v59;
      v43 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v42 + 56))(v54, v53, &v58, 1LL);
      if ( v43 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x195,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v43);
    }
  }
  v44 = 3LL;
  if ( *((_DWORD *)this + 53) != 1 )
    v44 = 0LL;
  v45 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v54 + 40))(v54, v44);
  v8 = v45;
  if ( v45 < 0 )
  {
    v46 = 414LL;
LABEL_74:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v46,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v45);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v53);
    goto LABEL_75;
  }
  v45 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v52 + 24LL))(
          v52,
          ((unsigned __int64)this + 128) & -(__int64)(this != (TabletModePositioner *)24),
          (char *)this + 476);
  v8 = v45;
  if ( v45 < 0 )
  {
    v46 = 417LL;
    goto LABEL_74;
  }
  v47 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  }
  v48 = (__int64)v54;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  }
  v49 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
  v50 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  }
  return 0LL;
}
