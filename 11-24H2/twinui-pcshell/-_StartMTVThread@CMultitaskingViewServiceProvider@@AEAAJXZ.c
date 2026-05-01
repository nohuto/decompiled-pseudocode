/*
 * XREFs of ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802597CC
 * Callers:
 *     ?PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x180498E80 (-PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x18003ABCC (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010E690 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801797C8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCI_ea_1801797C8.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801B59F8 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x180207078 (--_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$CAutoMemPtr@UINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@@@QEAA@XZ @ 0x1802CBFE0 (--1-$CAutoMemPtr@UINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CMultitaskingViewServiceProvider::_StartMTVThread(CMultitaskingViewServiceProvider *this)
{
  __int64 *v2; // rsi
  unsigned int LastError; // ebx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  void (__fastcall ***v16)(_QWORD, GUID *, IUnknown **); // rdi
  void (__fastcall *v17)(_QWORD, GUID *, IUnknown **); // rbx
  int v18; // eax
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, IUnknown **); // rbx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  __int64 (__fastcall ***v25)(_QWORD, GUID *, IUnknown **); // rdi
  __int64 (__fastcall *v26)(_QWORD, GUID *, IUnknown **); // rbx
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  int v44; // eax
  wil::details::in1diag3 *v45; // rcx
  __int64 v46; // rdx
  HANDLE EventW; // rdi
  const char *v48; // r9
  __int64 v49; // rdx
  int v51[2]; // [rsp+20h] [rbp-89h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-81h] BYREF
  void *v53; // [rsp+30h] [rbp-79h] BYREF
  void *v54; // [rsp+38h] [rbp-71h] BYREF
  void *v55; // [rsp+40h] [rbp-69h] BYREF
  void *v56; // [rsp+48h] [rbp-61h] BYREF
  void *v57; // [rsp+50h] [rbp-59h] BYREF
  void *v58; // [rsp+58h] [rbp-51h] BYREF
  IUnknown *v59; // [rsp+60h] [rbp-49h] BYREF
  IUnknown *v60; // [rsp+68h] [rbp-41h] BYREF
  void *v61; // [rsp+70h] [rbp-39h] BYREF
  IUnknown *v62; // [rsp+78h] [rbp-31h] BYREF
  void *v63; // [rsp+80h] [rbp-29h] BYREF
  void *v64; // [rsp+88h] [rbp-21h] BYREF
  void *v65; // [rsp+90h] [rbp-19h] BYREF
  void *v66; // [rsp+98h] [rbp-11h] BYREF
  void *v67; // [rsp+A0h] [rbp-9h] BYREF
  void *v68; // [rsp+A8h] [rbp-1h] BYREF
  void *v69; // [rsp+B0h] [rbp+7h] BYREF
  void *v70; // [rsp+B8h] [rbp+Fh] BYREF
  void *v71; // [rsp+C0h] [rbp+17h] BYREF
  void *v72; // [rsp+C8h] [rbp+1Fh] BYREF
  __int64 *v73; // [rsp+D0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v2 = (__int64 *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v2[24] = 0LL;
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[4] = 0LL;
    v2[5] = 0LL;
    v2[6] = 0LL;
    v2[7] = 0LL;
    v2[8] = 0LL;
    v2[9] = 0LL;
    v2[10] = 0LL;
    v2[11] = 0LL;
    v2[12] = 0LL;
    v2[13] = 0LL;
    v2[14] = 0LL;
    v2[15] = 0LL;
    v2[16] = 0LL;
    v2[17] = 0LL;
    v2[18] = 0LL;
    v2[19] = 0LL;
    v2[20] = 0LL;
    v2[21] = 0LL;
    v2[22] = 0LL;
    v2[23] = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  v73 = v2;
  if ( v2 )
  {
    *(_QWORD *)v51 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v51);
    Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>>(
      (__int64)this,
      &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
      v51);
    v4 = CMarshaledInterface::Marshal(v2, &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215, *(IUnknown **)v51, 2);
    LastError = v4;
    if ( v4 < 0 )
    {
      v5 = 304LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v4);
LABEL_9:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v51);
      goto LABEL_121;
    }
    v4 = CMarshaledInterface::Marshal(v2 + 1, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, *((IUnknown **)this + 28), 2);
    LastError = v4;
    if ( v4 < 0 )
    {
      v5 = 306LL;
      goto LABEL_8;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v6 = IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
           &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
           &ppvOut);
    LastError = v6;
    if ( v6 < 0 )
    {
      v7 = 309LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v6);
LABEL_15:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_9;
    }
    v6 = CMarshaledInterface::Marshal(v2 + 3, &GUID_e0fe7384_5482_4659_ab2c_4ff038948779, (IUnknown *)ppvOut, 2);
    LastError = v6;
    if ( v6 < 0 )
    {
      v7 = 310LL;
      goto LABEL_14;
    }
    v53 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v53);
    v8 = IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
           &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
           &v53);
    LastError = v8;
    if ( v8 < 0 )
    {
      v9 = 313LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v8);
LABEL_21:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v53);
      goto LABEL_15;
    }
    v8 = CMarshaledInterface::Marshal(v2 + 2, &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3, (IUnknown *)v53, 2);
    LastError = v8;
    if ( v8 < 0 )
    {
      v9 = 314LL;
      goto LABEL_20;
    }
    v55 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v55);
    if ( IUnknown_QueryService(
           *((IUnknown **)this + 2),
           (const GUID *const)&SID_VirtualDesktopManager,
           &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
           &v55) >= 0 )
      CMarshaledInterface::Marshal(v2 + 4, &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c, (IUnknown *)v55, 2);
    v54 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v54);
    if ( IUnknown_QueryService(
           *((IUnknown **)this + 2),
           (const GUID *const)&SID_VirtualDesktopPinnedApps,
           &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
           &v54) >= 0 )
    {
      v10 = CMarshaledInterface::Marshal(v2 + 5, &GUID_4ce81583_1e4c_4632_a621_07a53543148f, (IUnknown *)v54, 2);
      LastError = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x145,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v10);
LABEL_29:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v54);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v55);
        goto LABEL_21;
      }
    }
    v56 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v56);
    v11 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &v56);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 329LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v11);
LABEL_33:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v56);
      goto LABEL_29;
    }
    v11 = CMarshaledInterface::Marshal(v2 + 6, &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a, (IUnknown *)v56, 2);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 330LL;
      goto LABEL_32;
    }
    v57 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v57);
    if ( IUnknown_QueryService(
           *((IUnknown **)this + 2),
           (const GUID *const)&SID_VirtualDesktopNotificationService,
           &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
           &v57) >= 0 )
    {
      v13 = CMarshaledInterface::Marshal(v2 + 7, &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf, (IUnknown *)v57, 2);
      LastError = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14F,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v13);
LABEL_39:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v57);
        goto LABEL_33;
      }
    }
    v58 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v58);
    v14 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &stru_1807AB568,
            &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
            &v58);
    LastError = v14;
    if ( v14 < 0 )
    {
      v15 = 339LL;
LABEL_42:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v14);
LABEL_43:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v58);
      goto LABEL_39;
    }
    v14 = CMarshaledInterface::Marshal(v2 + 8, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, (IUnknown *)v58, 2);
    LastError = v14;
    if ( v14 < 0 )
    {
      v15 = 340LL;
      goto LABEL_42;
    }
    v59 = 0LL;
    v16 = (void (__fastcall ***)(_QWORD, GUID *, IUnknown **))*((_QWORD *)this + 25);
    v17 = **v16;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v59);
    v17(v16, &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58, &v59);
    v18 = CMarshaledInterface::Marshal(v2 + 9, &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58, v59, 2);
    LastError = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x158,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v18);
LABEL_48:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v59);
      goto LABEL_43;
    }
    v60 = 0LL;
    v19 = *((_QWORD *)this + 22);
    v20 = *(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v19 + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v60);
    v21 = v20(v19, &v60);
    LastError = v21;
    if ( v21 < 0 )
    {
      v22 = 347LL;
LABEL_51:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v21);
LABEL_52:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v60);
      goto LABEL_48;
    }
    v21 = CMarshaledInterface::Marshal(v2 + 10, &GUID_4639c886_cffe_492c_915a_1e3f02d22434, v60, 2);
    LastError = v21;
    if ( v21 < 0 )
    {
      v22 = 348LL;
      goto LABEL_51;
    }
    v61 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v61);
    v23 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &stru_1807AB558,
            &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            &v61);
    LastError = v23;
    if ( v23 < 0 )
    {
      v24 = 351LL;
LABEL_57:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v23);
LABEL_58:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v61);
      goto LABEL_52;
    }
    v23 = CMarshaledInterface::Marshal(v2 + 11, &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7, (IUnknown *)v61, 2);
    LastError = v23;
    if ( v23 < 0 )
    {
      v24 = 352LL;
      goto LABEL_57;
    }
    v62 = 0LL;
    v25 = (__int64 (__fastcall ***)(_QWORD, GUID *, IUnknown **))*((_QWORD *)this + 26);
    v26 = **v25;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
    v27 = v26(v25, &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3, &v62);
    LastError = v27;
    if ( v27 < 0 )
    {
      v28 = 355LL;
LABEL_63:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v27);
LABEL_64:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
      goto LABEL_58;
    }
    v27 = CMarshaledInterface::Marshal(v2 + 12, &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3, v62, 2);
    LastError = v27;
    if ( v27 < 0 )
    {
      v28 = 356LL;
      goto LABEL_63;
    }
    v63 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v63);
    v29 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_ShellTargetingTracker,
            &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            &v63);
    LastError = v29;
    if ( v29 < 0 )
    {
      v30 = 359LL;
LABEL_69:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v29);
LABEL_70:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v63);
      goto LABEL_64;
    }
    v29 = CMarshaledInterface::Marshal(v2 + 13, &GUID_c59a546b_412b_40f3_b151_9b3202e2835f, (IUnknown *)v63, 2);
    LastError = v29;
    if ( v29 < 0 )
    {
      v30 = 360LL;
      goto LABEL_69;
    }
    v64 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v64);
    v31 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &v64);
    LastError = v31;
    if ( v31 < 0 )
    {
      v32 = 363LL;
LABEL_75:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v31);
LABEL_76:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v64);
      goto LABEL_70;
    }
    v31 = CMarshaledInterface::Marshal(v2 + 14, &GUID_fff59320_db70_4865_8fed_8b502d692f12, (IUnknown *)v64, 2);
    LastError = v31;
    if ( v31 < 0 )
    {
      v32 = 364LL;
      goto LABEL_75;
    }
    v65 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v65);
    v33 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_ApplicationViewIconLoaderService,
            &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            &v65);
    LastError = v33;
    if ( v33 < 0 )
    {
      v34 = 376LL;
LABEL_81:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v33);
LABEL_82:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v65);
      goto LABEL_76;
    }
    v33 = CMarshaledInterface::Marshal(v2 + 16, &GUID_f622d8ac_35d3_4374_9148_66f1f7894191, (IUnknown *)v65, 2);
    LastError = v33;
    if ( v33 < 0 )
    {
      v34 = 377LL;
      goto LABEL_81;
    }
    v66 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v66);
    v35 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v66);
    LastError = v35;
    if ( v35 < 0 )
    {
      v36 = 380LL;
LABEL_87:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v36,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v35);
LABEL_88:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v66);
      goto LABEL_82;
    }
    v35 = CMarshaledInterface::Marshal(v2 + 19, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, (IUnknown *)v66, 2);
    LastError = v35;
    if ( v35 < 0 )
    {
      v36 = 381LL;
      goto LABEL_87;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
      1u,
      v37,
      v38);
    v71 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v71);
    IUnknown_QueryService(
      *((IUnknown **)this + 2),
      (const GUID *const)&SID_VirtualDesktopDataSource,
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      &v71);
    if ( v71 )
      CMarshaledInterface::Marshal(v2 + 17, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, (IUnknown *)v71, 2);
    v70 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v70);
    IUnknown_QueryService(
      *((IUnknown **)this + 2),
      (const GUID *const)&SID_VirtualDesktopController,
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      &v70);
    if ( v70 )
    {
      v39 = CMarshaledInterface::Marshal(v2 + 18, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, (IUnknown *)v70, 2);
      LastError = v39;
      if ( v39 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18D,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v39);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v70);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v71);
        goto LABEL_88;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v70);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v71);
    v67 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v67);
    if ( IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &stru_1807AB588,
           &GUID_8bc0416b_e6fa_4b43_9553_9386b4584de0,
           &v67) >= 0 )
    {
      v40 = CMarshaledInterface::Marshal(v2 + 20, &GUID_8bc0416b_e6fa_4b43_9553_9386b4584de0, (IUnknown *)v67, 2);
      LastError = v40;
      if ( v40 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x194,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v40);
LABEL_99:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v67);
        goto LABEL_88;
      }
    }
    v68 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v68);
    v41 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_ImmersiveShellHookService,
            &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
            &v68);
    LastError = v41;
    if ( v41 < 0 )
    {
      v42 = 408LL;
LABEL_102:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v42,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v41);
LABEL_103:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v68);
      goto LABEL_99;
    }
    v41 = CMarshaledInterface::Marshal(v2 + 21, &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4, (IUnknown *)v68, 2);
    LastError = v41;
    if ( v41 < 0 )
    {
      v42 = 409LL;
      goto LABEL_102;
    }
    v69 = 0LL;
    if ( IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &winrt::impl::guid_v<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>,
           &GUID_0e84cceb_709b_52d2_a663_ec5130862a9b,
           &v69) >= 0 )
    {
      v43 = CMarshaledInterface::Marshal(v2 + 22, &GUID_0e84cceb_709b_52d2_a663_ec5130862a9b, (IUnknown *)v69, 2);
      LastError = v43;
      if ( v43 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x19F,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v43);
LABEL_109:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v69);
        goto LABEL_103;
      }
    }
    v72 = 0LL;
    v44 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
            &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
            &v72);
    v45 = retaddr;
    if ( v44 >= 0 )
    {
      v44 = CMarshaledInterface::Marshal(v2 + 23, &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386, (IUnknown *)v72, 2);
      v45 = retaddr;
      if ( v44 >= 0 )
      {
LABEL_115:
        EventW = CreateEventW(0LL, 1, 0, 0LL);
        CAutoHandle<void *>::~CAutoHandle<void *>((void **)this + 30);
        *((_QWORD *)this + 30) = EventW;
        if ( EventW )
        {
          v2[24] = (__int64)EventW;
          v73 = 0LL;
          if ( SHCreateThread(
                 (LPTHREAD_START_ROUTINE)CMultitaskingViewServiceProvider::s_RunMTVThread,
                 v2,
                 8u,
                 CMultitaskingViewServiceProvider::s_InitMTVThread) )
          {
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v72);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v69);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v68);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v67);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v66);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v65);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v64);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v63);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v62);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v61);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v60);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v59);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v58);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v57);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v56);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v54);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v55);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v53);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v51);
            LastError = 0;
            goto LABEL_121;
          }
          CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'((CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)v2);
          v49 = 436LL;
        }
        else
        {
          v49 = 427LL;
        }
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)v49,
                      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                      v48);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v72);
        goto LABEL_109;
      }
      v46 = 421LL;
    }
    else
    {
      v46 = 419LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v45,
      (void *)v46,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v44);
    goto LABEL_115;
  }
  LastError = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12B,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)0x8007000ELL);
LABEL_121:
  CAutoMemPtr<CMultitaskingViewServiceProvider::INIT_THREAD_DATA>::~CAutoMemPtr<CMultitaskingViewServiceProvider::INIT_THREAD_DATA>(&v73);
  return LastError;
}
