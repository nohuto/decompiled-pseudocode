/*
 * XREFs of ?s_GetActivationTime@CompareGridElements@@CA_KPEAUIMultitaskingViewElement@@@Z @ 0x1804C9B34
 * Callers:
 *     ?Compare@CompareGridElements@@QEBAHAEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@0@Z @ 0x1804C7E50 (-Compare@CompareGridElements@@QEBAHAEBV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CompareGridElements::s_GetActivationTime(
        void (__fastcall ***a1)(struct IMultitaskingViewElement *, GUID *, __int64 *))
{
  void (__fastcall *v2)(struct IMultitaskingViewElement *, GUID *, __int64 *); // rbx
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = **a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
  v2((struct IMultitaskingViewElement *)a1, &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932, &v5);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
  return v3;
}
