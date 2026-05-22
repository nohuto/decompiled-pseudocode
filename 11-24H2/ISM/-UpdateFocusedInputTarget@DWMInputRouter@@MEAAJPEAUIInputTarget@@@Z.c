/*
 * XREFs of ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180013700
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180012D20 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001B410 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180022D10 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?OnTargetWithFocusChanged@InputDeliveryServer@@QEAAXPEAUIInputTarget@@@Z @ 0x1800248F4 (-OnTargetWithFocusChanged@InputDeliveryServer@@QEAAXPEAUIInputTarget@@@Z.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180024DC0 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180025DEC (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800260B4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180026554 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x1800268BC (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027020 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z @ 0x180031550 (-OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x180051F08 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ??$As@UIInputSiteTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180061178 (--$As@UIInputSiteTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x180061844 (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D4C8 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?GetProcessId@InputSite@@QEBAIXZ @ 0x18012FF14 (-GetProcessId@InputSite@@QEBAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall DWMInputRouter::UpdateFocusedInputTarget(
        DWMInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, InputSite **))
{
  bool v4; // bl
  int v5; // r14d
  int v6; // r12d
  _QWORD *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // al
  InputSite *v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // al
  unsigned int ProcessId; // eax
  __int64 v19; // rsi
  struct InputSiteManager *InputSiteManager; // rax
  __int64 InputSiteFromId; // rax
  __int64 v22; // rcx
  __int64 *Attached; // rax
  __int64 v24; // rcx
  InputSite *v25; // rcx
  __int64 (__fastcall *v26)(struct IInputTarget *, GUID *, InputSite **); // rbx
  __int64 (__fastcall *v27)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v28; // eax
  int v29; // eax
  unsigned int v30; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned __int8 v32; // bl
  __int64 (__fastcall *v33)(struct IInputTarget *, GUID *, InputSite **); // rbx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // edx
  unsigned int v40; // ecx
  __int64 v41; // r9
  __int64 v42; // rcx
  int v43; // eax
  unsigned int v44; // ebx
  int v46; // [rsp+20h] [rbp-89h]
  unsigned int v47; // [rsp+30h] [rbp-79h] BYREF
  InputSite *v48; // [rsp+38h] [rbp-71h] BYREF
  __int64 v49; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v51; // [rsp+4Ch] [rbp-5Dh] BYREF
  __int64 v52; // [rsp+50h] [rbp-59h] BYREF
  __int64 v53; // [rsp+58h] [rbp-51h] BYREF
  __int64 v54; // [rsp+60h] [rbp-49h] BYREF
  __int64 v55; // [rsp+68h] [rbp-41h] BYREF
  __int64 v56; // [rsp+70h] [rbp-39h] BYREF
  __int64 v57; // [rsp+78h] [rbp-31h] BYREF
  InputSite *v58; // [rsp+80h] [rbp-29h] BYREF
  __int64 v59; // [rsp+88h] [rbp-21h] BYREF
  __int64 v60; // [rsp+90h] [rbp-19h] BYREF
  _BYTE v61[40]; // [rsp+98h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = 0;
  v5 = 0;
  LODWORD(v52) = 0;
  v6 = 0;
  v51 = 0;
  v7 = (_QWORD *)((char *)this + 272);
  v56 = *((_QWORD *)this + 34);
  v8 = v56;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v56);
  Microsoft::WRL::ComPtr<IInputTarget>::operator=(v7, a2);
  if ( !v8 )
    goto LABEL_47;
  v54 = 0LL;
  v48 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(&v56, &v54) >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v54 + 24LL))(v54, &v49);
    v5 = 1;
    v4 = *(_QWORD *)Microsoft::WRL::ComPtr<InputSite>::operator=(&v48, v9) != 0LL;
  }
  if ( (v5 & 1) != 0 )
  {
    v5 &= ~1u;
    v10 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  if ( !v4 )
    goto LABEL_44;
  InputSite::GetAttachedObject<IDelegateInformationProvider>(v48, &v53);
  if ( !v53 )
    goto LABEL_43;
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 56LL))(v53);
  if ( (v11 & 0xE) == 0 || (v11 & 1) != 0 )
    goto LABEL_43;
  if ( !IsEdition(0xAuLL) )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v53 + 64LL))(v53, 0LL, 0LL, 1LL);
    goto LABEL_43;
  }
  v47 = 0;
  v50 = 0;
  v12 = 0LL;
  v58 = 0LL;
  v49 = 0LL;
  if ( *v7 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(v7, &v49) >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v49 + 32LL))(v49, &v50);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x7B6,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v13,
        v46);
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v49 + 72LL))(v49, &v47);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x7B7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v14,
        v46);
    if ( v47 )
    {
      v51 = *((_DWORD *)ISMStatics::GetForegroundManager() + 56);
      v52 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(v7, &v52) >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v52 + 24LL))(v52, &v55);
        Microsoft::WRL::ComPtr<InputSite>::operator=(&v58, v15);
        v16 = v55;
        if ( v55 )
        {
          v55 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v12 = v58;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
    }
  }
  while ( v53 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 56LL))(v53);
    if ( (v17 & 0xE) == 0 )
      break;
    if ( (v17 & 1) != 0 )
      break;
    if ( v47 )
    {
      ProcessId = InputSite::GetProcessId(v48);
      if ( ProcessId == v47 || v48 == v12 )
        break;
    }
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v53 + 64LL))(v53, 0LL, 0LL, 1LL);
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteFromId = InputSiteManager::GetInputSiteFromId(InputSiteManager, &v55, 1LL, v19);
    Microsoft::WRL::ComPtr<InputSite>::operator=(&v48, InputSiteFromId);
    v22 = v55;
    if ( v55 )
    {
      v55 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( v48 )
    {
      Attached = (__int64 *)InputSite::GetAttachedObject<IDelegateInformationProvider>(v48, &v57);
      v5 |= 2u;
      v24 = 0LL;
      if ( &v59 == Attached )
        goto LABEL_35;
    }
    else
    {
      v60 = 0LL;
      Attached = &v60;
      v5 |= 4u;
    }
    v24 = *Attached;
    *Attached = 0LL;
LABEL_35:
    v59 = v53;
    v53 = v24;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v59);
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v60);
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v49);
  if ( v12 )
    (*(void (__fastcall **)(InputSite *))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_43:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v53);
LABEL_44:
  v25 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(InputSite *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
LABEL_47:
  if ( IsEdition(0x3DDA1uLL) && a2 )
  {
    v48 = 0LL;
    v26 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
    v6 = v26((struct IInputTarget *)a2, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v48);
    if ( v6 >= 0 )
    {
      v49 = 0LL;
      v27 = (__int64 (__fastcall *)(struct IInputTarget *, GUID *, __int64 *))**a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v49);
      v28 = v27((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v49);
      if ( v28 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x807,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v28,
          v46);
      v47 = 0;
      v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v49 + 48LL))(v49, &v47);
      if ( v29 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x80A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v29,
          v46);
      v30 = v47;
      if ( v47 )
      {
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewHelper::GetWindowForViewId(&v54, ViewHierarchy, v30);
        v57 = 0LL;
        if ( !(unsigned __int8)winrt::Windows::Foundation::operator==(&v54, &v57) )
        {
          winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
            &v54,
            &v50);
          (*(void (__fastcall **)(InputSite *, _BYTE *))(*(_QWORD *)v48 + 72LL))(v48, v61);
        }
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v54);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v49);
    }
    else
    {
      v6 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
  }
  if ( IsEdition(0xAuLL) )
  {
    v50 = 0;
    LODWORD(v52) = 0;
    v32 = 0;
    v47 = 0;
    if ( a2 )
    {
      v48 = 0LL;
      v33 = **a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
      v34 = v33((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v48);
      if ( v34 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x821,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v34,
          v46);
      v35 = (*(__int64 (__fastcall **)(InputSite *, __int64 *))(*(_QWORD *)v48 + 40LL))(v48, &v52);
      if ( v35 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x822,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v35,
          v46);
      if ( !v51 )
      {
        v36 = (*(__int64 (__fastcall **)(InputSite *, unsigned int *))(*(_QWORD *)v48 + 72LL))(v48, &v51);
        if ( v36 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x825,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v36,
            v46);
      }
      v37 = (*(__int64 (__fastcall **)(InputSite *, unsigned int *))(*(_QWORD *)v48 + 32LL))(v48, &v50);
      if ( v37 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x827,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v37,
          v46);
      v38 = (*(__int64 (__fastcall **)(InputSite *, unsigned int *))(*(_QWORD *)v48 + 80LL))(v48, &v47);
      if ( v38 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x828,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v38,
          v46);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
      v32 = v47;
    }
    if ( IsEdition(0xAuLL) )
      v39 = (v32 & 6) != 0;
    else
      v39 = (v32 >> 2) & 1;
    v40 = v39 | 2;
    if ( (v32 & 8) == 0 )
      v40 = v39;
    v41 = v40 | 4;
    if ( (v32 & 0x40) == 0 )
      v41 = v40;
    NtMITSetInputDelegationMode(v51, v50, (unsigned int)v52, v41);
  }
  InputETW::InputRouter::OnFocusChanged((struct IInputTarget *)a2);
  v42 = *((_QWORD *)this + 35);
  if ( v42
    && (v43 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInputTarget *))(*(_QWORD *)v42 + 24LL))(
                v42,
                v8,
                (struct IInputTarget *)a2),
        v44 = v43,
        v43 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v43,
      v46);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
    return v44;
  }
  else
  {
    InputDeliveryServer::OnTargetWithFocusChanged(*((InputDeliveryServer **)this + 42), (struct IInputTarget *)a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
    return (unsigned int)v6;
  }
}
