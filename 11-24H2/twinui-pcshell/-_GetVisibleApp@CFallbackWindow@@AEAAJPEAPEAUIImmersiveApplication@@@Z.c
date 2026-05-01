/*
 * XREFs of ?_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1802B0480
 * Callers:
 *     ?GetPropertyValue@CFallbackWindow@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1801F9DD0 (-GetPropertyValue@CFallbackWindow@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?Invoke@CFallbackWindow@@UEAAJXZ @ 0x1802F0290 (-Invoke@CFallbackWindow@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CFallbackWindow::_GetVisibleApp(CFallbackWindow *this, struct IImmersiveApplication **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // esi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  unsigned int i; // r14d
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v11; // rcx
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+80h] [rbp+38h] BYREF
  int v15; // [rsp+88h] [rbp+40h] BYREF
  __int64 v16; // [rsp+90h] [rbp+48h] BYREF
  __int64 v17; // [rsp+98h] [rbp+50h] BYREF

  *a2 = 0LL;
  v13[0] = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  v4 = **v3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
  v5 = v4(v3, &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a, v13);
  if ( v5 >= 0 )
  {
    v17 = 0LL;
    v6 = v13[0];
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13[0] + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    v5 = v7(v6, &v17);
    if ( v5 >= 0 )
    {
      v14 = 0;
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, &v14);
      if ( v5 >= 0 )
      {
        v5 = -2147023728;
        for ( i = 0; i < v14; ++i )
        {
          v16 = 0LL;
          v15 = 0;
          v9 = v17;
          v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v17 + 32LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
          if ( v10(v9, i, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v16) >= 0
            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 64LL))(v16, &v15) >= 0
            && v15 )
          {
            v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v16)(
                   v16,
                   &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                   a2);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
            break;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
        }
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  }
  v11 = v13[0];
  if ( v13[0] )
  {
    v13[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v5;
}
