/*
 * XREFs of ?v_InvokeElement@CGlyphButtonElement@@MEAA_NXZ @ 0x1804D1F20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CGlyphButtonElement::v_InvokeElement(CGlyphButtonElement *this)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, GUID *, __int64 *); // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *((_QWORD *)this + 48);
  v3 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
  if ( v3(v2, &GUID_b09cbbc9_d9b8_46fe_b3d5_2cd3bb04dda8, &v5) >= 0 )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v5 + 40LL))(
      v5,
      ((unsigned __int64)this + 216) & -(__int64)(this != 0LL));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
  return 1;
}
