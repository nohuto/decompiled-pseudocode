/*
 * XREFs of ?GetForCurrentThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180162A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006913C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180160BEC (--$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$.c)
 *     ??$com_weak_copy_failfast@AEAV?$com_ptr_t@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAV?$com_ptr_t@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@Uerr_exception_policy@wil@@@0@@Z @ 0x180160D2C (--$com_weak_copy_failfast@AEAV-$com_ptr_t@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCManagerClientFactory::GetForCurrentThread(
        MPCManagerClientFactory *this,
        struct Windows::Internal::Input::MPCManager::IMPCManagerClient **a2)
{
  HRESULT ApartmentType; // eax
  int v4; // eax
  bool v5; // bl
  struct Windows::Internal::Input::MPCManager::IMPCManagerClient *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 (__fastcall ***v15[2])(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 pAptType; // [rsp+60h] [rbp+30h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+68h] [rbp+38h] BYREF

  LODWORD(pAptType) = 0;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\precomp.h",
      (const char *)(unsigned int)ApartmentType,
      (int)v15[0]);
  if ( !(_DWORD)pAptType || (_DWORD)pAptType == 3 )
    goto LABEL_9;
  pAptType = 0LL;
  v4 = CoreUIOpenExisting(&pAptType);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x46,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\precomp.h",
      (const char *)(unsigned int)v4,
      (int)v15[0]);
  v5 = pAptType != 0;
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&pAptType);
  if ( v5 )
  {
LABEL_9:
    v7 = 0LL;
    v8 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    v9 = *(_QWORD *)(v8 + 16);
    if ( !v9 )
      goto LABEL_14;
    v15[0] = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)v9 + 24LL))(
            v9,
            &GUID_14d766a1_12f3_404c_ae87_c566719dbe22,
            v15);
    v7 = (struct Windows::Internal::Input::MPCManager::IMPCManagerClient *)v15[0];
    if ( v10 >= 0 && !v15[0] )
      v10 = -2147023728;
    if ( v10 >= 0 )
    {
LABEL_14:
      v15[0] = 0LL;
      if ( v7 )
        (*(void (__fastcall **)(struct Windows::Internal::Input::MPCManager::IMPCManagerClient *))(*(_QWORD *)v7 + 16LL))(v7);
      v11 = Microsoft::WRL::Details::MakeAndInitialize<MPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerClient,>(v15);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x197,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
          (const char *)(unsigned int)v11,
          (int)v15[0]);
      v12 = wil::com_weak_copy_failfast<wil::com_ptr_t<Windows::Internal::Input::MPCManager::IMPCManagerClient,wil::err_exception_policy> &>(
              &pAptType,
              v15);
      v13 = *v12;
      *v12 = 0LL;
      v14 = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 16) = v13;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&pAptType);
      v7 = (struct Windows::Internal::Input::MPCManager::IMPCManagerClient *)v15[0];
    }
    v15[0] = 0LL;
    *a2 = v7;
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)v15);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)0x8001010ELL);
    return 2147549454LL;
  }
}
