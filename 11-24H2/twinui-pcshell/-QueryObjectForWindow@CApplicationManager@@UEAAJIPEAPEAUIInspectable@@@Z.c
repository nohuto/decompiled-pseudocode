/*
 * XREFs of ?QueryObjectForWindow@CApplicationManager@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x1802EA200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180164368 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?AcquireShared@CIAMGlobals@@QEAA?AVCAutoSRWSharedLock@@XZ @ 0x1801930F0 (-AcquireShared@CIAMGlobals@@QEAA-AVCAutoSRWSharedLock@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::QueryObjectForWindow(
        CApplicationManager *this,
        int a2,
        struct IInspectable **a3)
{
  __int64 v5; // rdi
  int First; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IInspectable **); // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+58h] [rbp+20h] BYREF

  v5 = a2;
  CIAMGlobals::AcquireShared((__int64)this, &v11);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  v8 = v5;
  v9 = 2;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)this - 328, &v8, &v10, 0LL);
  if ( First >= 0 )
    First = (**v10)(v10, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
  return (unsigned int)First;
}
