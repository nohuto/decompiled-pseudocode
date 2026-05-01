/*
 * XREFs of ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x1802A666C
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180014150 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180089108 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CImmersiveAppFinderByTaskWindow@@QEAA@AEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x18008936C (--0CImmersiveAppFinderByTaskWindow@@QEAA@AEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18008A758 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x180092E78 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@@Z @ 0x1802E23C4 (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802EA2E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CApplicationManager::_CreatePresentationRequestedArgs(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a2,
        struct IPresentationRequestedArgs **a3)
{
  int (__fastcall *v6)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *); // rbx
  bool v7; // bl
  const char *v8; // r9
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rdi
  CTaskWindowFinder *v14; // rax
  __int64 v15; // rax
  int First; // ebx
  __int64 result; // rax
  int v18; // eax
  PVOID Ptr; // rdi
  __int64 (__fastcall *v20)(PVOID, _QWORD, __int64 *); // rbx
  int v21; // eax
  _QWORD *v22; // rax
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+28h] [rbp-80h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v28; // [rsp+30h] [rbp-78h] BYREF
  __int64 v29; // [rsp+38h] [rbp-70h] BYREF
  __int64 v30; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v31[8]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v32; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v33[8]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v34[8]; // [rsp+68h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v36; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v37; // [rsp+C0h] [rbp+18h] BYREF
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // [rsp+C8h] [rbp+20h] BYREF

  try
  {
    *a3 = 0LL;
    v37 = 0LL;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = **(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
    v7 = v6(a2, &GUID_ca746cf0_7375_4d7a_9d29_6c72d8b5e684, &v37) >= 0;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v7 )
    {
      v36 = 0LL;
      v9 = v37;
      v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 48LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
      v11 = v10(v9, &v36);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x211B,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v11,
          v26[0]);
      v12 = v36;
      if ( v36 )
      {
        v28 = 0LL;
        v27 = 0LL;
        v13 = *(int (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v36 + 88LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
        if ( v13(v12, &v28) >= 0 )
        {
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v38 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
          v14 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v31, v28);
          v15 = CImmersiveAppFinderByTaskWindow::CImmersiveAppFinderByTaskWindow((__int64)v33, (__int64)v14, 0);
          First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                    (__int64)this,
                    v15,
                    &v38,
                    0LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v34);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          if ( First < 0 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
            return (unsigned int)First;
          }
          *(_QWORD *)v26 = 0LL;
          v18 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v38, (__int64 *)v26);
          if ( v18 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x212B,
              (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v18,
              v26[0]);
          Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
          v20 = *(__int64 (__fastcall **)(PVOID, _QWORD, __int64 *))(*(_QWORD *)Ptr + 56LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
          v21 = v20(Ptr, *(_QWORD *)v26, &v27);
          if ( v21 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x212C,
              (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v21,
              v26[0]);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v26);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
        }
        v38 = 0LL;
        v30 = v27;
        v29 = v36;
        v22 = (_QWORD *)wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *>(
                          v26,
                          &v29,
                          &v30);
        v23 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))((*v22 + 16LL) & -(__int64)(*v22 != 0LL));
        *v22 = 0LL;
        v29 = 0LL;
        v38 = v23;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
        v24 = *(_QWORD *)v26;
        if ( *(_QWORD *)v26 )
        {
          *(_QWORD *)v26 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v24);
        }
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v38);
        *a3 = (struct IPresentationRequestedArgs *)v23;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
        return 0LL;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
    }
    v25 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    result = 2147943568LL;
  }
  catch ( ... )
  {
    LODWORD(v36) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x213A,
                     (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                     v8);
    return (unsigned int)v36;
  }
  return result;
}
