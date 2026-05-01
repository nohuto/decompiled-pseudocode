/*
 * XREFs of ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18002FE90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18002FB38 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800305D0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18008FA98 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Attach@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z @ 0x1801B1FC4 (-Attach@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x1802C55F8 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CImmersiveApp::GetWindowsInternal(_QWORD *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int v5; // r13d
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  int Instance; // esi
  bool v11; // r15
  __int64 v12; // rsi
  Microsoft::WRL::FtmBase *v13; // rax
  Microsoft::WRL::FtmBase *v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // r13d
  __int64 v17; // rcx
  char v18; // al
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  struct ITaskWindow *v21; // rdi
  char v22; // r15
  __int64 v23; // r8
  __int64 v24; // rax
  _QWORD *v25; // rsi
  Microsoft::WRL::FtmBase *v26; // rax
  Microsoft::WRL::FtmBase *v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  struct ITaskWindow *v33; // r8
  __int64 v34; // rax
  struct ITaskWindow *v35; // rcx
  void *v36; // rcx
  const struct _GUID *v38; // rdx
  int v39; // ecx
  HWND v40; // r13
  __int64 v41; // rax
  void **v42; // rax
  const struct _GUID *v43; // rdx
  unsigned __int64 v44; // rdx
  struct ITaskWindow *v45; // [rsp+28h] [rbp-59h] BYREF
  __int64 v46; // [rsp+30h] [rbp-51h] BYREF
  void *v47; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-41h] BYREF
  __int64 v49; // [rsp+48h] [rbp-39h] BYREF
  __int64 v50; // [rsp+50h] [rbp-31h] BYREF
  __int64 v51; // [rsp+58h] [rbp-29h] BYREF
  __int64 v52; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v53; // [rsp+68h] [rbp-19h]
  __int64 v54; // [rsp+78h] [rbp-9h]
  unsigned __int64 v55; // [rsp+80h] [rbp-1h]
  HWND v56; // [rsp+88h] [rbp+7h] BYREF
  __int64 v57; // [rsp+90h] [rbp+Fh] BYREF
  char v58; // [rsp+98h] [rbp+17h]
  unsigned int v59; // [rsp+F0h] [rbp+6Fh]

  v59 = a2;
  v5 = a2;
  *a4 = 0LL;
  v47 = 0LL;
  v7 = 0LL;
  v51 = 0LL;
  v45 = 0LL;
  v8 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
    v8 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
  if ( v8 )
  {
    v9 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
    if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
      v9 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
    if ( v9 )
    {
      v34 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
      if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
        v34 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
      if ( v34 )
      {
        Instance = -2147467262;
        goto LABEL_77;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) )
        goto LABEL_76;
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) && v5 != 5 )
    {
      goto LABEL_76;
    }
    Instance = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
    Instance = CEnumerableObjectCollection::CreateInstance(v39, v38, &v47);
    if ( Instance < 0 )
      goto LABEL_77;
  }
  v11 = v5 != 3;
  if ( (unsigned int)(v5 - 2) <= 1 )
  {
    v40 = (HWND)a1[38];
    if ( v40 )
    {
      v41 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
      if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
        v41 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
      if ( !v41 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
        v56 = v40;
        v57 = 0LL;
        v58 = 0;
        v48 = 0LL;
        CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
          (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 22),
          (const struct CTaskWindowFinder *)&v56,
          &v45,
          &v48);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
        goto LABEL_105;
      }
      v48 = 0LL;
      v42 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v48);
      Instance = CImmersiveApplicationWindow_CreateInstance(v40, v43, v42);
      if ( Instance >= 0 )
      {
        v44 = v48;
        v48 = 0LL;
        Microsoft::WRL::ComPtr<PositionerPriority>::Attach(&v51, v44);
        v11 = 0;
        v7 = v51;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
    }
    goto LABEL_95;
  }
  if ( v5 != 4 && v5 != 5 )
  {
LABEL_95:
    v16 = v59;
    goto LABEL_28;
  }
  v11 = 0;
  v50 = 0LL;
  Instance = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 496LL))(a1, &v50);
  if ( Instance >= 0 )
  {
    v52 = 0LL;
    Instance = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v50 + 24LL))(v50, &v52);
    if ( Instance >= 0 )
    {
      v12 = v52;
      v49 = 0LL;
      v13 = (Microsoft::WRL::FtmBase *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v14 = v13;
      if ( v13 )
      {
        Microsoft::WRL::FtmBase::FtmBase(v13);
        *((_DWORD *)v14 + 11) = 1;
        *(_QWORD *)v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        *((_QWORD *)v14 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *(_QWORD *)v14 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        *((_QWORD *)v14 + 4) = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        *((_QWORD *)v14 + 6) = v12;
        Instance = (**(__int64 (__fastcall ***)(Microsoft::WRL::FtmBase *, GUID *, __int64 *))v14)(
                     v14,
                     &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                     &v49);
      }
      else
      {
        v14 = 0LL;
        Instance = -2147024882;
      }
      if ( v14 )
        (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v14 + 16LL))(v14);
      if ( Instance < 0 )
      {
        v15 = v49;
      }
      else
      {
        v7 = v49;
        v15 = 0LL;
        v49 = 0LL;
        v51 = v7;
      }
      if ( v15 )
      {
        v49 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  if ( v5 == 4 && (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) && Instance < 0 )
  {
    Instance = 0;
    v16 = 0;
    v11 = 1;
  }
  else
  {
    v16 = v59;
  }
  v17 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_28:
  if ( v11 )
  {
    v18 = 1;
    v55 = a1[43];
    v19 = 0LL;
    v53 = 0LL;
    if ( v55 )
    {
      a2 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
      v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
      while ( 1 )
      {
        if ( !v18 )
          goto LABEL_53;
        v21 = *(struct ITaskWindow **)(a1[42] + 8 * v19);
        v22 = 1;
        v23 = v16;
        if ( v16 && (v23 = v16 - 1, (unsigned int)v23 >= 2) )
        {
          Instance = -2147418113;
        }
        else
        {
          v24 = *a3 - v20;
          if ( *a3 == v20 )
            v24 = a3[1] - a2;
          if ( v24 )
          {
            v46 = 0LL;
            v25 = (_QWORD *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v46);
            v54 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v21 + 32LL))(v21);
            *v25 = 0LL;
            v26 = (Microsoft::WRL::FtmBase *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
            v27 = v26;
            if ( v26 )
            {
              Microsoft::WRL::FtmBase::FtmBase(v26);
              *((_DWORD *)v27 + 11) = 1;
              *(_QWORD *)v27 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
              *((_QWORD *)v27 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
              *(_QWORD *)v27 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
              *((_QWORD *)v27 + 4) = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
              *((_QWORD *)v27 + 6) = v54;
              Instance = (**(__int64 (__fastcall ***)(Microsoft::WRL::FtmBase *, GUID *, _QWORD *))v27)(
                           v27,
                           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                           v25);
            }
            else
            {
              v27 = 0LL;
              Instance = -2147024882;
            }
            if ( v27 )
              (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v27 + 16LL))(v27);
            if ( Instance >= 0 )
            {
              if ( v47 )
              {
                Instance = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v47 + 40LL))(v47, v46);
              }
              else
              {
                v28 = v46;
                v46 = 0LL;
                if ( v7 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
                v7 = v28;
                v51 = v28;
                v22 = 0;
              }
            }
            v29 = v46;
            if ( v46 )
            {
              v46 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
            }
            if ( v22 && Instance >= 0 )
            {
              v18 = 1;
              a2 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
              v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
              goto LABEL_52;
            }
            a2 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
            v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
          }
          else if ( v45 != v21 )
          {
            if ( v21 )
            {
              (*(void (__fastcall **)(struct ITaskWindow *, __int64, __int64))(*(_QWORD *)v21 + 8LL))(v21, a2, v23);
              a2 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
              v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
            }
            v33 = v45;
            v45 = v21;
            if ( v33 )
            {
              (*(void (__fastcall **)(struct ITaskWindow *, __int64))(*(_QWORD *)v33 + 16LL))(v33, a2);
              a2 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
              v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
            }
          }
        }
        v18 = 0;
LABEL_52:
        v19 = v53 + 1;
        v53 = v19;
        if ( v19 >= v55 )
          goto LABEL_53;
      }
    }
  }
LABEL_105:
  v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
  a2 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
LABEL_53:
  if ( Instance < 0 )
    goto LABEL_77;
  v30 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
    v30 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
  if ( !v30 )
  {
    Instance = (**(__int64 (__fastcall ***)(void *, _QWORD *, _QWORD *))v47)(v47, a3, a4);
    goto LABEL_77;
  }
  v31 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
  if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
    v31 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
  if ( !v31 )
  {
    if ( v7 )
    {
      Instance = (**(__int64 (__fastcall ***)(__int64, _QWORD *, _QWORD *))v7)(v7, a3, a4);
      goto LABEL_77;
    }
LABEL_76:
    Instance = -2147019873;
    goto LABEL_77;
  }
  v32 = *a3 - v20;
  if ( *a3 == v20 )
    v32 = a3[1] - a2;
  if ( !v32 )
  {
    if ( v45 )
    {
      Instance = (**(__int64 (__fastcall ***)(struct ITaskWindow *, _QWORD *, _QWORD *))v45)(v45, a3, a4);
      goto LABEL_77;
    }
    goto LABEL_76;
  }
LABEL_77:
  v35 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *, __int64))(*(_QWORD *)v35 + 16LL))(v35, a2);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, a2);
  v36 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v36 + 16LL))(v36, a2);
  }
  return (unsigned int)Instance;
}
