/*
 * XREFs of ?InitThumbnailFactory@CDragVisual@@UEAAJXZ @ 0x180542860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::InitThumbnailFactory(IUnknown **this)
{
  HRESULT v1; // ebx
  __int64 *v2; // rbp
  void *v4; // rbx
  __int64 (__fastcall *v5)(void *, IUnknown *, __int64, __int64 *); // rdi
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (__int64 *)(this + 6);
  if ( !this[6] )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v1 = IUnknown_QueryService(*(this - 1), &stru_1807B2AE0, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, &ppvOut);
    if ( v1 >= 0 )
    {
      v4 = ppvOut;
      v5 = *(__int64 (__fastcall **)(void *, IUnknown *, __int64, __int64 *))(*(_QWORD *)ppvOut + 56LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
      v1 = v5(v4, this[16], 1LL, v2);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  }
  return (unsigned int)v1;
}
