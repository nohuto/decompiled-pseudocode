/*
 * XREFs of ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1802E8470
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18008F514 (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?AcquireShared@CIAMGlobals@@QEAA?AVCAutoSRWSharedLock@@XZ @ 0x1801930F0 (-AcquireShared@CIAMGlobals@@QEAA-AVCAutoSRWSharedLock@@XZ.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_d353c244007572bd2dd605324d11ed33___ @ 0x1802E1ED0 (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___-_ea_1802E1ED0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::GetRunningApplicationsFromPackageId(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplicationArray **a3)
{
  const struct _GUID *v6; // rcx
  int v7; // ebx
  RTL_SRWLOCK *v9; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+28h] [rbp-18h] BYREF
  void *v11; // [rsp+38h] [rbp-8h] BYREF
  int v12; // [rsp+70h] [rbp+30h] BYREF
  void *v13; // [rsp+78h] [rbp+38h] BYREF

  *a3 = 0LL;
  CIAMGlobals::AcquireShared((__int64)this, &v9);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  v7 = CImmersiveAppArray::s_CreateInstance(v6, &v13);
  v12 = v7;
  if ( v7 >= 0 )
  {
    v10[0] = &v12;
    v10[1] = a2;
    v11 = v13;
    if ( v13 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
    CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_d353c244007572bd2dd605324d11ed33___(
      (__int64)this + 456,
      (__int64)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v7 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationArray **))v13)(
             v13,
             &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
             a3);
      v12 = v7;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  return (unsigned int)v7;
}
