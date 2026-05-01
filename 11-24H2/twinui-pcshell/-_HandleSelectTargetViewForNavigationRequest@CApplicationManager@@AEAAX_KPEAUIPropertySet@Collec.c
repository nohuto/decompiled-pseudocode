/*
 * XREFs of ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1801E3700
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180014150 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CApplicationManager::_HandleSelectTargetViewForNavigationRequest(
        CApplicationManager *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *a4)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rbx
  int v8; // eax
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rbx
  void (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  RTL_SRWLOCK *v11; // rdi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rsi
  int v14; // ebx
  struct Windows::Foundation::Collections::IPropertySet *v15; // rbx
  __int64 (__fastcall *v16)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rsi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  void (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  int v23[2]; // [rsp+38h] [rbp-18h] BYREF
  PSRWLOCK v24; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v26; // [rsp+70h] [rbp+20h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v27; // [rsp+80h] [rbp+30h] BYREF

  v27 = a3;
  *(_QWORD *)v23 = 0LL;
  v6 = *((_QWORD *)this + 75);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 64LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v23);
  v8 = v7(v6, 1LL, a2);
  if ( v8 < 0 )
  {
    if ( v8 == -2147319765 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, _QWORD))(*(_QWORD *)a4 + 56LL))(
        a4,
        0LL);
  }
  else
  {
    v22 = 0LL;
    v26 = 0LL;
    v9 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))v23;
    v10 = ***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))v23;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    v10(v9, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v26);
    v11 = CApplicationManagerUtility::g_pIAMGlobals;
    v24 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v27 = 0LL;
    v12 = v26;
    v13 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v26 + 352LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
    v14 = v13(v12, 2LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v27);
    if ( v14 >= 0 )
    {
      v15 = v27;
      v16 = *(__int64 (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))(*(_QWORD *)v27 + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      v14 = v16(v15, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v22);
    }
    v17 = (__int64)v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( v11 )
      ReleaseSRWLockShared(v11);
    if ( v14 >= 0 )
    {
      LODWORD(v27) = 0;
      v18 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v22 + 48LL))(
              v22,
              &v27);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x17B9,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v18,
          (int)v23);
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, _QWORD))(*(_QWORD *)a4 + 56LL))(
        a4,
        (unsigned int)v27);
    }
    v19 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  v21 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))v23;
  if ( *(_QWORD *)v23 )
  {
    *(_QWORD *)v23 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
  }
}
