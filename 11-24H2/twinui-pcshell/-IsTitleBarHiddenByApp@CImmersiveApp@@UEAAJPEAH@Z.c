/*
 * XREFs of ?IsTitleBarHiddenByApp@CImmersiveApp@@UEAAJPEAH@Z @ 0x180303BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?AcquireShared@CIAMGlobals@@QEAA?AVCAutoSRWSharedLock@@XZ @ 0x1801930F0 (-AcquireShared@CIAMGlobals@@QEAA-AVCAutoSRWSharedLock@@XZ.c)
 *     ?GetAppTitleBarConfig@@YA?AV?$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801D29FC (-GetAppTitleBarConfig@@YA-AV-$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewMan.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::IsTitleBarHiddenByApp(CImmersiveApp *this, int *a2)
{
  int (__fastcall *v4)(char *, __int64, GUID *, __int64 *); // rbx
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, GUID *, __int64 *); // rdi
  unsigned int v7; // r8d
  char v9; // [rsp+60h] [rbp+28h] BYREF
  char v10; // [rsp+61h] [rbp+29h]
  char v11; // [rsp+62h] [rbp+2Ah]
  __int64 v12; // [rsp+68h] [rbp+30h] BYREF
  __int64 v13; // [rsp+70h] [rbp+38h] BYREF
  RTL_SRWLOCK *v14; // [rsp+78h] [rbp+40h] BYREF

  *a2 = 0;
  CIAMGlobals::AcquireShared((__int64)this, &v14);
  v13 = 0LL;
  v4 = *(int (__fastcall **)(char *, __int64, GUID *, __int64 *))(*((_QWORD *)this + 2) + 352LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  if ( v4((char *)this + 16, 1LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v13) >= 0 )
  {
    v12 = 0LL;
    v5 = v13;
    v6 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v13 + 40LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    if ( v6(v5, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v12) >= 0 )
    {
      GetAppTitleBarConfig((__int64)&v9, v12, v7);
      if ( v11 )
      {
        if ( v9 && v10 )
          *a2 = 1;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v14);
  return 0LL;
}
