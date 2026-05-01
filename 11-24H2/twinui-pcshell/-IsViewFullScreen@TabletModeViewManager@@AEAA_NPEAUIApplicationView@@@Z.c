/*
 * XREFs of ?IsViewFullScreen@TabletModeViewManager@@AEAA_NPEAUIApplicationView@@@Z @ 0x180521B18
 * Callers:
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x180521BB0 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TabletModeViewManager::IsViewFullScreen(IUnknown **this, struct IApplicationView *a2)
{
  bool v4; // bl
  int v6; // [rsp+30h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+40h] [rbp+18h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         this[2],
         (const GUID *const)&SID_FullScreenManager,
         &GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d,
         &ppvOut) >= 0
    && (v6 = 0,
        (*(int (__fastcall **)(void *, struct IApplicationView *, int *))(*(_QWORD *)ppvOut + 40LL))(ppvOut, a2, &v6) >= 0)
    && v6 != 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return v4;
}
