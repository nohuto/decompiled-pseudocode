/*
 * XREFs of ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180013140
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180012760 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001AE40 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002192C (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180022740 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?OnTargetWithFocusChanged@InputDeliveryServer@@QEAAXPEAUIInputTarget@@@Z @ 0x180024338 (-OnTargetWithFocusChanged@InputDeliveryServer@@QEAAXPEAUIInputTarget@@@Z.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180024800 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025AF4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x1800262FC (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180026A60 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180026AAC (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z @ 0x180030F90 (-OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x1800520B8 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ??$As@UIInputSiteTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180061528 (--$As@UIInputSiteTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x180061BF4 (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QEAA_NXZ @ 0x1800B10F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall DWMInputRouter::UpdateFocusedInputTarget(
        DWMInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *))
{
  bool v4; // si
  int v5; // edi
  int v6; // r12d
  _QWORD *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // al
  char v12; // si
  int v13; // eax
  int v14; // eax
  char v15; // al
  __int64 v16; // r14
  int v17; // eax
  struct InputSiteManager *InputSiteManager; // rax
  __int64 InputSiteFromId; // rax
  __int64 v20; // rcx
  __int64 *Attached; // rax
  __int64 v22; // rcx
  __int64 *v23; // rcx
  int (__fastcall *v24)(char *, __int64 *); // rdi
  const char *v25; // r9
  int v26; // eax
  _QWORD *v27; // rdi
  const char *v28; // r9
  __int64 v29; // rcx
  bool v30; // si
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 (__fastcall *v33)(struct IInputTarget *, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v34)(struct IInputTarget *, GUID *, __int64 *); // rdi
  int v35; // eax
  int v36; // eax
  unsigned int v37; // edi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned __int8 v39; // di
  __int64 (__fastcall *v40)(struct IInputTarget *, GUID *, __int64 *); // rdi
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // edx
  unsigned int v47; // ecx
  __int64 v48; // r9
  __int64 v49; // rcx
  int v50; // eax
  unsigned int v51; // ebx
  int v53; // [rsp+20h] [rbp-89h]
  unsigned int v54; // [rsp+30h] [rbp-79h] BYREF
  __int64 v55; // [rsp+38h] [rbp-71h] BYREF
  __int64 v56; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v57; // [rsp+48h] [rbp-61h] BYREF
  __int64 v58; // [rsp+50h] [rbp-59h] BYREF
  __int64 v59; // [rsp+58h] [rbp-51h] BYREF
  __int64 v60; // [rsp+60h] [rbp-49h] BYREF
  __int64 v61; // [rsp+68h] [rbp-41h] BYREF
  __int64 v62; // [rsp+70h] [rbp-39h] BYREF
  __int64 v63; // [rsp+78h] [rbp-31h] BYREF
  __int64 v64; // [rsp+80h] [rbp-29h] BYREF
  __int64 v65; // [rsp+88h] [rbp-21h] BYREF
  __int64 v66; // [rsp+90h] [rbp-19h] BYREF
  _BYTE v67[40]; // [rsp+98h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = 0;
  v5 = 0;
  LODWORD(v60) = 0;
  v6 = 0;
  v57 = 0;
  v7 = (_QWORD *)((char *)this + 272);
  v64 = *((_QWORD *)this + 34);
  v8 = v64;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v64);
  Microsoft::WRL::ComPtr<IInputTarget>::operator=(v7, a2);
  if ( v8 )
  {
    v63 = 0LL;
    v58 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(&v64, &v63) >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v63 + 24LL))(v63, &v61);
      v5 = 1;
      v4 = *(_QWORD *)Microsoft::WRL::ComPtr<InputSite>::operator=(&v58, v9) != 0LL;
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      v10 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    if ( v4 )
    {
      InputSite::GetAttachedObject<IDelegateInformationProvider>(v58, &v55);
      if ( v55 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 56LL))(v55);
        if ( (v11 & 0xE) != 0 && (v11 & 1) == 0 )
        {
          if ( IsEdition(0xAuLL) )
          {
            v54 = 0;
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_57240160>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Bugfix_57240160>::GetImpl'::`2'::impl) )
            {
              v12 = 0;
              LODWORD(v59) = 0;
              v56 = 0LL;
              if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(v7, &v56) >= 0 )
              {
                v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v56 + 32LL))(v56, &v54);
                if ( v13 < 0 )
                  wil::details::in1diag3::FailFast_Hr(
                    retaddr,
                    (void *)0x7C4,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
                    (const char *)(unsigned int)v13,
                    v53);
                v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v56 + 72LL))(v56, &v59);
                if ( v14 < 0 )
                  wil::details::in1diag3::FailFast_Hr(
                    retaddr,
                    (void *)0x7C5,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
                    (const char *)(unsigned int)v14,
                    v53);
              }
              while ( 1 )
              {
                if ( !v55
                  || (v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 56LL))(v55), (v15 & 0xE) == 0)
                  || (v15 & 1) != 0 )
                {
                  v23 = &v56;
                  goto LABEL_59;
                }
                if ( (_DWORD)v59 )
                  v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 48LL))(v55);
                v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
                if ( !v12 )
                {
                  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 64LL))(v55);
                  if ( v17 == (_DWORD)v59 || v17 == v54 )
                    v12 = 1;
                  else
                    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v55 + 72LL))(
                      v55,
                      0LL,
                      0LL,
                      1LL);
                }
                InputSiteManager = ISMStatics::GetInputSiteManager();
                InputSiteFromId = InputSiteManager::GetInputSiteFromId(InputSiteManager, &v61, 1LL, v16);
                Microsoft::WRL::ComPtr<InputSite>::operator=(&v58, InputSiteFromId);
                v20 = v61;
                if ( v61 )
                {
                  v61 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
                }
                if ( v58 )
                {
                  Attached = (__int64 *)InputSite::GetAttachedObject<IDelegateInformationProvider>(v58, &v65);
                  v5 |= 2u;
                  v22 = 0LL;
                  if ( &v66 == Attached )
                    goto LABEL_33;
                }
                else
                {
                  v62 = 0LL;
                  Attached = &v62;
                  v5 |= 4u;
                }
                v22 = *Attached;
                *Attached = 0LL;
LABEL_33:
                v66 = v55;
                v55 = v22;
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v66);
                if ( (v5 & 4) != 0 )
                {
                  v5 &= ~4u;
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v62);
                }
                if ( (v5 & 2) != 0 )
                {
                  v5 &= ~2u;
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v65);
                }
              }
            }
            v60 = 0LL;
            v24 = *(int (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 2) + 32LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v60);
            if ( v24((char *)this + 16, &v60) >= 0 )
            {
              v26 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v60 + 80LL))(v60, &v54);
              if ( v26 < 0 )
                wil::details::in1diag3::FailFast_Hr(
                  retaddr,
                  (void *)0x7EA,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
                  (const char *)(unsigned int)v26,
                  v53);
            }
            v27 = (_QWORD *)((char *)this + 280);
            if ( (v54 & 0x40) != 0 )
            {
              if ( *v27 )
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  (void *)0x7F2,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
                  v25);
              Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((char *)this + 280, &v64);
              v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 48LL))(v55);
            }
            else
            {
              if ( *v27 )
              {
                if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 56LL))(v55) & 0x40) == 0 )
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    (void *)0x7FD,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
                    v28);
                v61 = 0LL;
                if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>((char *)this + 280, &v61) >= 0 )
                {
                  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v61 + 24LL))(v61, &v56);
                  v59 = 0LL;
                  if ( !*v7 || (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(v7, &v59) < 0 )
                    goto LABEL_51;
                  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v59 + 24LL))(v59, &v62);
                  v29 = v62;
                  v30 = v62 != v56;
                  if ( v62 )
                  {
                    v62 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                  }
                  if ( v30 )
                  {
LABEL_51:
                    InputSite::GetAttachedObject<IDelegateInformationProvider>(v56, &v62);
                    if ( v62 )
                      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v62 + 72LL))(
                        v62,
                        0LL,
                        0LL,
                        1LL);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v62);
                  }
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v59);
                  v31 = v56;
                  if ( v56 )
                  {
                    v56 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                  }
                }
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 35);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v61);
              }
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v55 + 72LL))(v55, 0LL, 0LL, 1LL);
            }
            v23 = &v60;
LABEL_59:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v23);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v55 + 72LL))(v55, 0LL, 0LL, 1LL);
          }
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
    }
    v32 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v63);
  }
  if ( IsEdition(0x3DDA1uLL) && a2 )
  {
    v58 = 0LL;
    v33 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
    v6 = v33((struct IInputTarget *)a2, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v58);
    if ( v6 >= 0 )
    {
      v56 = 0LL;
      v34 = **a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
      v35 = v34((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v56);
      if ( v35 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x84A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v35,
          v53);
      v54 = 0;
      v36 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v56 + 48LL))(v56, &v54);
      if ( v36 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x84D,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v36,
          v53);
      v37 = v54;
      if ( v54 )
      {
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewHelper::GetWindowForViewId(&v63, ViewHierarchy, v37);
        v65 = 0LL;
        if ( !(unsigned __int8)winrt::Windows::Foundation::operator==(&v63, &v65) )
        {
          winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
            &v63,
            &v60);
          (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v58 + 72LL))(v58, v67);
        }
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v63);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
    }
    else
    {
      v6 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
  }
  if ( IsEdition(0xAuLL) )
  {
    LODWORD(v60) = 0;
    LODWORD(v59) = 0;
    v39 = 0;
    v54 = 0;
    if ( a2 )
    {
      v55 = 0LL;
      v40 = **a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
      v41 = v40((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v55);
      if ( v41 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x864,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v41,
          v53);
      v42 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v55 + 40LL))(v55, &v59);
      if ( v42 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x865,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v42,
          v53);
      if ( !v57 )
      {
        v43 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v55 + 72LL))(v55, &v57);
        if ( v43 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x868,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v43,
            v53);
      }
      v44 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v55 + 32LL))(v55, &v60);
      if ( v44 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x86A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v44,
          v53);
      v45 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v55 + 80LL))(v55, &v54);
      if ( v45 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x86B,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v45,
          v53);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
      v39 = v54;
    }
    if ( IsEdition(0xAuLL) )
      v46 = (v39 & 6) != 0;
    else
      v46 = (v39 >> 2) & 1;
    v47 = v46 | 2;
    if ( (v39 & 8) == 0 )
      v47 = v46;
    v48 = v47 | 4;
    if ( (v39 & 0x40) == 0 )
      v48 = v47;
    NtMITSetInputDelegationMode(v57, (unsigned int)v60, (unsigned int)v59, v48);
  }
  InputETW::InputRouter::OnFocusChanged((struct IInputTarget *)a2);
  v49 = *((_QWORD *)this + 36);
  if ( v49
    && (v50 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInputTarget *))(*(_QWORD *)v49 + 24LL))(
                v49,
                v8,
                (struct IInputTarget *)a2),
        v51 = v50,
        v50 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v50,
      v53);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v64);
    return v51;
  }
  else
  {
    InputDeliveryServer::OnTargetWithFocusChanged(*((InputDeliveryServer **)this + 43), (struct IInputTarget *)a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v64);
    return (unsigned int)v6;
  }
}
