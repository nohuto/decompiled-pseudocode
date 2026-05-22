/*
 * XREFs of ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x1800243FC
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180023960 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025AF4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x1800262FC (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180026C8C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall InputStateManager::NotifyForegroundChange(
        InputStateManager *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(struct IInputTarget *, GUID *, __int64 *))
{
  __int64 (__fastcall *v6)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v22; // [rsp+70h] [rbp+30h] BYREF
  int v23; // [rsp+78h] [rbp+38h] BYREF
  int v24; // [rsp+88h] [rbp+48h] BYREF

  v23 = 0;
  v24 = 0;
  *((_DWORD *)this + 51) = -1;
  if ( a2 )
  {
    v22 = 0LL;
    v6 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v7 = v6((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v22);
    v8 = retaddr;
    if ( v7 < 0 )
    {
      v17 = 632LL;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 32LL))(v22, &v23);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
        v9 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        goto LABEL_6;
      }
      v17 = 636LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v8,
      (void *)v17,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v7,
      v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    return;
  }
LABEL_6:
  if ( a3 )
  {
    LODWORD(v22) = 0;
    v18 = 0LL;
    v10 = **a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    v11 = v10((struct IInputTarget *)a3, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v18);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x28B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v11,
        v18);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 32LL))(v18, &v24);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x290,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v12,
          v18);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 48LL))(v18, &v22);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x294,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
            (const char *)(unsigned int)v13,
            v18);
        }
        else
        {
          v14 = v22;
          if ( (_DWORD)v22 )
          {
            ViewHierarchy = ISMStatics::GetViewHierarchy();
            ViewHelper::GetWindowForViewId(&v19, ViewHierarchy, v14);
            v20 = 0LL;
            if ( !(unsigned __int8)winrt::Windows::Foundation::operator==(&v19, &v20) )
              *((_DWORD *)this + 51) = -1;
            if ( v19 )
              winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v19);
          }
        }
      }
    }
    v15 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
}
