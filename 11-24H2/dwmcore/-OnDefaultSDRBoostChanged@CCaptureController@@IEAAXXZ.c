/*
 * XREFs of ?OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ @ 0x180293764
 * Callers:
 *     ?SetDefaultSDRBoost@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJM@Z @ 0x180278868 (-SetDefaultSDRBoost@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJM@Z.c)
 * Callees:
 *     ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801EC948 (-UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ.c)
 */

void __fastcall CCaptureController::OnDefaultSDRBoostChanged(CCaptureController *this)
{
  __int64 *v1; // rsi
  __int64 *i; // rbx
  __int64 v4; // rcx

  v1 = (__int64 *)*((_QWORD *)this + 20);
  for ( i = (__int64 *)*((_QWORD *)this + 19); i != v1; ++i )
  {
    v4 = *i;
    *(_DWORD *)(v4 + 2948) = *((_DWORD *)this + 22);
    CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts((enum DXGI_COLOR_SPACE_TYPE *)v4);
  }
}
