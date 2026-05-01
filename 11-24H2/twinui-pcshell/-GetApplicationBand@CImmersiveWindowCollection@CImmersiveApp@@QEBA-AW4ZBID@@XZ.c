/*
 * XREFs of ?GetApplicationBand@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ZBID@@XZ @ 0x18009A41C
 * Callers:
 *     ?GetZbid@CImmersiveApp@@UEAA?AW4ZBID@@XZ @ 0x180202630 (-GetZbid@CImmersiveApp@@UEAA-AW4ZBID@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::GetApplicationBand(__int64 a1)
{
  __int64 v1; // rdi
  int (__fastcall *v2)(__int64, __int64 *); // rbx
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int v6; // [rsp+40h] [rbp+20h] BYREF
  __int64 v7; // [rsp+48h] [rbp+28h] BYREF
  __int64 v8; // [rsp+50h] [rbp+30h] BYREF

  v6 = 0;
  v8 = 0LL;
  v7 = 0LL;
  v1 = *(_QWORD *)(a1 + 144);
  v2 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 136LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  if ( v2(v1, &v7) >= 0 && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 24LL))(v7, &v8) >= 0 )
    GetWindowBand(v8, &v6);
  v3 = v6;
  v4 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
