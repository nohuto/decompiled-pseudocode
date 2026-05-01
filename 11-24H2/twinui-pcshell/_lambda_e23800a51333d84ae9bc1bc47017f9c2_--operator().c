/*
 * XREFs of _lambda_e23800a51333d84ae9bc1bc47017f9c2_::operator() @ 0x1801D4F10
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___::operator() @ 0x1802C26E0 (CDelayIAMOperations--CDelayedOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_e23800a51333d84ae9bc1bc47017f9c2_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, __int64, GUID *, GUID *, __int64 *); // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+60h] [rbp+28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+30h] BYREF
  __int64 v10; // [rsp+70h] [rbp+38h] BYREF
  int v11; // [rsp+78h] [rbp+40h] BYREF
  int v12; // [rsp+7Ch] [rbp+44h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = 0LL;
  v2 = a1[1];
  v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 496LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  if ( v3(v2, &v9) >= 0 )
  {
    v10 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v10) >= 0 )
    {
      v8 = 0LL;
      v4 = *(_QWORD *)(*a1 + 560LL);
      v5 = *(int (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v4 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
      if ( v5(v4, v10, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v8) >= 0 )
      {
        v11 = *(_DWORD *)(*a1 + 960LL);
        v12 = 0;
        (*(void (__fastcall **)(_QWORD, __int64, int *, _QWORD))(*(_QWORD *)a1[1] + 456LL))(a1[1], v8, &v11, 0LL);
      }
      v6 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
