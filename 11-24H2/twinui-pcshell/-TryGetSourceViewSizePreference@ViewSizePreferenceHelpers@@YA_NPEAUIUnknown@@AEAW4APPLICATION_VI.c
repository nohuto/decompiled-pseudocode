/*
 * XREFs of ?TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@AEAPEAUHWND__@@@Z @ 0x1802B4EF4
 * Callers:
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180121A40 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall ViewSizePreferenceHelpers::TryGetSourceViewSizePreference(
        IUnknown *punk,
        struct IUnknown *a2,
        enum APPLICATION_VIEW_SIZE_PREFERENCE *a3,
        HWND *a4)
{
  bool v7; // bl
  void *v8; // rcx
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)a3 = 0LL;
  LODWORD(a2->lpVtbl) = 0;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v7 = IUnknown_QueryService(
         punk,
         (const GUID *const)&SID_LaunchSourceViewSizePreference,
         &GUID_e5aa01f7_1fb8_4830_8720_4e6734cbd5f3,
         &ppvOut) >= 0
    && (*(int (__fastcall **)(void *, struct IUnknown *))(*(_QWORD *)ppvOut + 32LL))(ppvOut, a2) >= 0
    && (*(int (__fastcall **)(void *, enum APPLICATION_VIEW_SIZE_PREFERENCE *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, a3) >= 0
    && *(_QWORD *)a3;
  v8 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v7;
}
