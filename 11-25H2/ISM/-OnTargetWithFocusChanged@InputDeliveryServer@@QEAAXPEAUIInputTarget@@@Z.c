/*
 * XREFs of ?OnTargetWithFocusChanged@InputDeliveryServer@@QEAAXPEAUIInputTarget@@@Z @ 0x180024338
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180013140 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall InputDeliveryServer::OnTargetWithFocusChanged(InputDeliveryServer *this, struct IInputTarget *a2)
{
  int (__fastcall *v4)(struct IInputTarget *, GUID *, __int64 *); // rbx
  __int64 v5; // rcx
  int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  struct IInputTarget *v8; // [rsp+50h] [rbp+18h]

  v6 = 0;
  v8 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = 0LL;
  if ( a2 )
  {
    v4 = **(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
    if ( v4(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v7) >= 0 )
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 48LL))(v7, &v6);
  }
  *((_DWORD *)this + 18) = v6;
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
}
