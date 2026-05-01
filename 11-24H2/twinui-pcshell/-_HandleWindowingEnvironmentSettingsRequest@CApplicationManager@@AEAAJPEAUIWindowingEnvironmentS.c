/*
 * XREFs of ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801FA2B8
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180014150 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180164368 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180191370 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ??$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802B39DC (--$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIViewWrapp.c)
 *     ?end@?$vector_range@U?$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVvector_iterator@12@XZ @ 0x1802B93C8 (-end@-$vector_range@U-$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@.c)
 *     ??$make_agile_vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@cshell@@YA?A_PXZ @ 0x1802BB0A4 (--$make_agile_vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@cshell@@YA-A_P.c)
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@@Z @ 0x1802E23C4 (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@.c)
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@AEAI@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@AEAI@Z @ 0x1802E246C (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewMa_ea_1802E246C.c)
 *     ??$query@UIImmersiveApplication@@@?$com_ptr_t@UIImmersiveApplicationInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIImmersiveApplication@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802E2D0C (--$query@UIImmersiveApplication@@@-$com_ptr_t@UIImmersiveApplicationInternal@@Uerr_exception_pol.c)
 *     ??$query@UIInspectable@@@?$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802E2D60 (--$query@UIInspectable@@@-$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@wi.c)
 *     ??Dvector_iterator@?$vector_range@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBV?$ComPtr@UISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1802E3854 (--Dvector_iterator@-$vector_range@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationMo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802EA2E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=37
__int64 __fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *v2; // r12
  CApplicationManager *v3; // r13
  int v4; // r15d
  __int64 v5; // rax
  int v6; // eax
  __int64 **v7; // rax
  __int64 *v8; // rdi
  int i; // eax
  __int64 *v10; // rsi
  __int64 (__fastcall *v11)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, __int64, __int64 *); // rbx
  int v12; // eax
  _QWORD *v13; // rax
  unsigned int v14; // ebx
  const char *v15; // r9
  __int64 v16; // rcx
  int First; // ebx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  PVOID Ptr; // rsi
  __int64 (__fastcall *v25)(PVOID, __int64, __int64 *); // rbx
  int v26; // eax
  IUnknown **v27; // rax
  HRESULT v28; // eax
  __int64 v29; // rbx
  int (__fastcall *v30)(__int64, __int64 *); // rsi
  _QWORD *v31; // rax
  int v32; // ebx
  int v33; // ebx
  PVOID v34; // rsi
  __int64 (__fastcall *v35)(PVOID, __int64, __int64 *); // rbx
  int v36; // eax
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // eax
  __int64 (__fastcall ***v42)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v43)(_QWORD, GUID *, __int64 *); // rax
  int v44; // eax
  int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  int v48; // eax
  __int64 v49; // rdx
  int v50; // eax
  const char *v51; // r9
  __int64 result; // rax
  int v53[2]; // [rsp+20h] [rbp-158h] BYREF
  __int64 v54; // [rsp+28h] [rbp-150h] BYREF
  __int64 v55; // [rsp+30h] [rbp-148h] BYREF
  int v56; // [rsp+38h] [rbp-140h] BYREF
  __int64 *v57; // [rsp+40h] [rbp-138h] BYREF
  int v58; // [rsp+48h] [rbp-130h] BYREF
  unsigned int v59; // [rsp+4Ch] [rbp-12Ch] BYREF
  __int64 v60; // [rsp+50h] [rbp-128h] BYREF
  __int64 v61; // [rsp+58h] [rbp-120h] BYREF
  __int64 v62; // [rsp+60h] [rbp-118h] BYREF
  __int64 v63; // [rsp+68h] [rbp-110h] BYREF
  __int64 v64; // [rsp+70h] [rbp-108h] BYREF
  __int64 v65; // [rsp+78h] [rbp-100h] BYREF
  void *ppvOut; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v67; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v68; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v69; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v75; // [rsp+C8h] [rbp-B0h] BYREF
  int v76; // [rsp+D0h] [rbp-A8h]
  __int64 v77; // [rsp+D8h] [rbp-A0h] BYREF
  __int64 v78; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v80; // [rsp+F0h] [rbp-88h] BYREF
  __int64 *v81; // [rsp+F8h] [rbp-80h]
  __int64 *v82; // [rsp+100h] [rbp-78h]
  __int64 v83; // [rsp+108h] [rbp-70h] BYREF
  int v84; // [rsp+110h] [rbp-68h]
  __int64 v85; // [rsp+118h] [rbp-60h] BYREF
  int v86; // [rsp+120h] [rbp-58h]
  _BYTE v87[8]; // [rsp+128h] [rbp-50h] BYREF
  int v88; // [rsp+130h] [rbp-48h]
  __int64 v89[8]; // [rsp+138h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]
  __int64 v93; // [rsp+190h] [rbp+18h] BYREF
  int v94; // [rsp+198h] [rbp+20h]

  try
  {
    v2 = a2;
    v3 = this;
    v4 = 0;
    v94 = 0;
    v5 = *(_QWORD *)a2;
    v67 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, __int64 *))(v5 + 72))(
           a2,
           &v67);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x600,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6,
        v53[0]);
    v7 = (__int64 **)cshell::make_agile_vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>(&v93);
    v8 = *v7;
    *v7 = 0LL;
    v82 = v8;
    if ( v93 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
    v93 = v67;
    v75 = v67;
    v76 = 0;
    v77 = 0LL;
    wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,wil::err_exception_policy>::end(
      &v93,
      v87);
    for ( i = v76; i != v88; i = ++v76 )
    {
      v10 = (__int64 *)wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::vector_iterator::operator*(&v75);
      v81 = v10;
      v54 = 0LL;
      v11 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, __int64, __int64 *))(*(_QWORD *)v2 + 80LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v54);
      try
      {
        v12 = v11(v2, *v10, &v54);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x609,
            (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v12,
            v53[0]);
        v58 = 0;
        wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
          &v68,
          *v10);
        v13 = (_QWORD *)wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
                          &v68,
                          &v78);
        v14 = (*(unsigned int (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v13 + 48LL))(*v13, &v58) >> 31;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v78);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v68);
        if ( (_BYTE)v14 )
        {
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
        }
        else
        {
          v57 = 0LL;
          v74 = 0LL;
          LOBYTE(v93) = 0;
          v56 = 0;
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v16 = (__int64)v57;
          v57 = 0LL;
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          v83 = v58;
          v84 = 4;
          First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)v3, &v83, &v57, 0LL);
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          if ( First >= 0 )
          {
            v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v54 + 56LL))(v54, &v93);
            if ( v19 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x649,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v19,
                v53[0]);
            if ( (_BYTE)v93 )
            {
              *(_QWORD *)v53 = 0LL;
              v20 = *v57;
              *(_QWORD *)v53 = 0LL;
              v21 = (*(__int64 (__fastcall **)(__int64 *, int *))(v20 + 624))(v57, v53);
              if ( v21 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x64F,
                  (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v21,
                  v53[0]);
              if ( *(_QWORD *)v53 )
              {
                LODWORD(v55) = 0;
                v22 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v53 + 32LL))(*(_QWORD *)v53, &v55);
                if ( v22 < 0 )
                  wil::details::in1diag3::Throw_Hr(
                    retaddr,
                    (void *)0x653,
                    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v22,
                    v53[0]);
                v23 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, int *))(*(_QWORD *)v2 + 64LL))(
                        v2,
                        &v56);
                if ( v23 < 0 )
                  wil::details::in1diag3::Throw_Hr(
                    retaddr,
                    (void *)0x654,
                    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v23,
                    v53[0]);
                if ( (_DWORD)v55 != v56 )
                  wil::details::in1diag3::Throw_Hr(
                    retaddr,
                    (void *)0x655,
                    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)0x80070057LL,
                    v53[0]);
              }
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v53);
            }
            wil::com_ptr_t<IImmersiveApplicationInternal,wil::err_exception_policy>::query<IImmersiveApplication>(
              &v57,
              &v73);
            v63 = 0LL;
            Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
            v25 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
            wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v63);
            v26 = v25(Ptr, v73, &v63);
            if ( v26 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x65D,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v26,
                v53[0]);
            ppvOut = 0LL;
            v27 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)v3 + 48, &v79);
            v28 = IUnknown_QueryService(
                    *v27,
                    &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                    &GUID_01719fd4_ce6f_429b_9554_1c3b9d375792,
                    &ppvOut);
            if ( v28 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x661,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v28,
                v53[0]);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v79);
            v62 = 0LL;
            v60 = 0LL;
            v29 = v54;
            v30 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v54 + 88LL);
            wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v62);
            if ( v30(v29, &v62) >= 0 )
            {
              LODWORD(v55) = 0;
              v31 = (_QWORD *)wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
                                &v62,
                                &v80);
              v32 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v31 + 48LL))(*v31, &v55);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v80);
              if ( v32 >= 0 )
              {
                AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                v65 = 0LL;
                v85 = (int)v55;
                v86 = 4;
                v33 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                        (__int64)v3,
                        &v85,
                        &v65,
                        0LL);
                ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                if ( v33 >= 0 )
                {
                  wil::com_ptr_t<IImmersiveApplicationInternal,wil::err_exception_policy>::query<IImmersiveApplication>(
                    &v65,
                    &v69);
                  v34 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
                  v35 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)v34 + 56LL);
                  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v60);
                  v36 = v35(v34, v69, &v60);
                  if ( v36 < 0 )
                    wil::details::in1diag3::Throw_Hr(
                      retaddr,
                      (void *)0x673,
                      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      (const char *)(unsigned int)v36,
                      v53[0]);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v69);
                }
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v65);
              }
            }
            *(_QWORD *)v53 = v60;
            v55 = v54;
            if ( (_BYTE)v93 )
            {
              v37 = (__int64 *)wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *,unsigned int &>(
                                 &v71,
                                 &v55,
                                 v53,
                                 &v56,
                                 *(_QWORD *)v53);
              v4 |= 1u;
            }
            else
            {
              v37 = (__int64 *)wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *>(
                                 &v70,
                                 &v55,
                                 v53);
              v4 |= 2u;
            }
            v94 = v4;
            v38 = *v37;
            *v37 = 0LL;
            if ( v38 )
              *(_QWORD *)v53 = v38 + 16;
            else
              *(_QWORD *)v53 = 0LL;
            if ( (v4 & 2) != 0 )
            {
              v4 &= ~2u;
              v94 = v4;
              v39 = v70;
              if ( v70 )
              {
                v70 = 0LL;
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v39);
              }
            }
            if ( (v4 & 1) != 0 )
            {
              v4 &= ~1u;
              v94 = v4;
              v40 = v71;
              if ( v71 )
              {
                v71 = 0LL;
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v40);
              }
            }
            wil::com_ptr_t<IPresentationRequestedArgs,wil::err_exception_policy>::query<IInspectable>(v53, &v72);
            v41 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v63, v72);
            if ( v41 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x67D,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v41,
                v53[0]);
            v61 = 0LL;
            v42 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v81;
            v43 = *(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v81;
            v61 = 0LL;
            v44 = (*v43)(v42, &GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d, &v61);
            if ( v44 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x686,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v44,
                v53[0]);
            v59 = 0;
            if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v54 + 48LL))(v54, &v59) >= 0 )
            {
              v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v61 + 112LL))(v61, v59);
              if ( v45 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x68C,
                  (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v45,
                  v53[0]);
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v61);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v72);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v53);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v60);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v62);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v63);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v73);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v74);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v57);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
          }
          else
          {
            v18 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v8 + 104))(v8, *v10);
            if ( v18 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x644,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v18,
                v53[0]);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v74);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v57);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
          }
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x690,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          v15);
        v3 = this;
        v2 = a2;
        v8 = v82;
        v4 = v94;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v89);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v77);
    v64 = 0LL;
    v46 = *v8;
    v64 = 0LL;
    v47 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v46 + 64))(v8, &v64);
    if ( v47 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x694,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v47,
        v53[0]);
    v48 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, __int64))(*(_QWORD *)v2 + 88LL))(
            v2,
            v64);
    if ( v48 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x696,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v48,
        v53[0]);
    LOBYTE(v49) = 1;
    v50 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, __int64))(*(_QWORD *)v2 + 48LL))(
            v2,
            v49);
    if ( v50 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x697,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v50,
        v53[0]);
    if ( v64 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
    if ( v8 )
      (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
    if ( v67 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x69A,
                           (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           v51);
  }
  return result;
}
