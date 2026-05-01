/*
 * XREFs of ?DestroyDesktopThumbnail@TabletModeCoverWindow@@AEAAXXZ @ 0x1802B8184
 * Callers:
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x18013C710 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 *     wil::details::ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___::_ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___ @ 0x180531794 (wil--details--ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___--_ScopeExitFn__lambda_1ec7.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x1805318B4 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall TabletModeCoverWindow::DestroyDesktopThumbnail(TabletModeCoverWindow *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
}
