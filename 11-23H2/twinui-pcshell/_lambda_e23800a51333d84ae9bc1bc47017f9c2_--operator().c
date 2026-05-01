/*
 * XREFs of _lambda_e23800a51333d84ae9bc1bc47017f9c2_::operator() @ 0x180062260
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___::operator() @ 0x180062250 (CDelayIAMOperations--CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e23800a51333d84ae9bc1bc47017f9c2_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, __int64, GUID *, GUID *, __int64 *); // rbx
  __int64 v7; // [rsp+60h] [rbp+28h] BYREF
  __int64 v8; // [rsp+68h] [rbp+30h] BYREF
  int v9; // [rsp+70h] [rbp+38h] BYREF
  int v10; // [rsp+74h] [rbp+3Ch]
  __int64 v11; // [rsp+78h] [rbp+40h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = 0LL;
  v2 = a1[1];
  v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 496LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  if ( v3(v2, &v8) >= 0 && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v11) >= 0 )
  {
    v7 = 0LL;
    v4 = *(_QWORD *)(*a1 + 560LL);
    v5 = *(int (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v4 + 88LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
    if ( v5(v4, v11, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v7) >= 0 )
    {
      v9 = *(_DWORD *)(*a1 + 960LL);
      v10 = 0;
      (*(void (__fastcall **)(_QWORD, __int64, int *, _QWORD))(*(_QWORD *)a1[1] + 456LL))(a1[1], v7, &v9, 0LL);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
}
