/*
 * XREFs of ?OnGraphicsDeviceLost@CAccentAcrylicBlurBehind@@QEAAXXZ @ 0x1800A1434
 * Callers:
 *     ?OnGraphicsDeviceLost@CAccent@@QEAAXXZ @ 0x1800A1404 (-OnGraphicsDeviceLost@CAccent@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAccentAcrylicBlurBehind::OnGraphicsDeviceLost(CAccentAcrylicBlurBehind *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 35);
}
