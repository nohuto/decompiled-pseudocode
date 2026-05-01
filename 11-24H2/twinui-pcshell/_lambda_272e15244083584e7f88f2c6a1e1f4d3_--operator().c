/*
 * XREFs of _lambda_272e15244083584e7f88f2c6a1e1f4d3_::operator() @ 0x1802F0838
 * Callers:
 *     ?GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1802F0BB0 (-GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_272e15244083584e7f88f2c6a1e1f4d3_::operator()(__int64 a1, __int64 a2)
{
  void (__fastcall *v4)(__int64, struct IUnknown **); // rbx
  struct IUnknown *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 8)
    || (v6 = 0LL,
        v4 = *(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)a2 + 464LL),
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6),
        v4(a2, &v6),
        LODWORD(v4) = SHIsSameObject(v6, *(struct IUnknown **)(a1 + 8)),
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6),
        (_DWORD)v4) )
  {
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2) & 4) != 0 )
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(*(__int64 **)(a1 + 16), a2);
  }
  return **(_QWORD **)(a1 + 16) == 0LL;
}
