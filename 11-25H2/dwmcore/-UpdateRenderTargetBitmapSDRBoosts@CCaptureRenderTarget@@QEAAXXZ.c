/*
 * XREFs of ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801F93E8
 * Callers:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801F8F24 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801F9120 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?ProcessSetSDRBoost@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETSDRBOOST@@@Z @ 0x18028DA28 (-ProcessSetSDRBoost@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTA.c)
 *     ?OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ @ 0x18029F0B4 (-OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18002E7F0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ @ 0x18025B3E4 (-GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts(enum DXGI_COLOR_SPACE_TYPE *this)
{
  __int64 v2; // rsi
  __int64 i; // rbx

  if ( IsDXGIColorSpaceHDR(this[34]) )
    CCaptureRenderTarget::GetEffectiveSDRBoost((CCaptureRenderTarget *)this);
  v2 = *((_QWORD *)this + 372);
  for ( i = *((_QWORD *)this + 371); i != v2; i += 24LL )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(i + 8) + 120LL))(*(_QWORD *)(i + 8));
    if ( *((_BYTE *)this + 2943) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(i + 16) + 120LL))(*(_QWORD *)(i + 16));
  }
}
