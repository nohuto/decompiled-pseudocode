/*
 * XREFs of ?IsSeparateGlomForSameApp@CImmersiveApp@@UEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180303AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::IsSeparateGlomForSameApp(
        CImmersiveApp *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))
{
  int v4; // esi
  int v5; // ebp
  __int64 (__fastcall *v6)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  int v7; // eax
  char v8; // bl
  bool v9; // al
  int v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v11 = 0;
  v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *)))(*a2)[20])(a2);
  v5 = *((_DWORD *)this + 118);
  v6 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  v7 = v6((struct IImmersiveApplicationInternal *)a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v12);
  v8 = 1;
  v9 = v7 >= 0
    && (*(int (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v12 + 32LL))(v12, *((_QWORD *)this + 97), &v11) >= 0
    && v11;
  if ( v4 == v5 || !v9 )
    v8 = 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  return v8;
}
