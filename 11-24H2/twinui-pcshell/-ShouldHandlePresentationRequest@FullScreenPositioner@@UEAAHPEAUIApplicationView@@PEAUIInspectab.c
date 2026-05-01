/*
 * XREFs of ?ShouldHandlePresentationRequest@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180325B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositioner::ShouldHandlePresentationRequest(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  unsigned int v5; // esi
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rbx
  int (__fastcall *v7)(struct IApplicationView *, __int64 *); // rbx
  __int64 v9[2]; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  v5 = 0;
  v9[0] = 0LL;
  QueryInterface = a3->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, __int64 *))QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         v9) >= 0 )
  {
    v10 = 0;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v9[0] + 24LL))(v9[0], &v10) < 0 )
    {
      v11 = 0LL;
      v7 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
      if ( v7(a2, &v11) >= 0 )
        LOBYTE(v5) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11) == 4;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    }
    else
    {
      LOBYTE(v5) = v10 == 2;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  return v5;
}
