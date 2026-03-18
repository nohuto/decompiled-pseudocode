/*
 * XREFs of ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1801E4F64
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x1800D8850 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D8BD0 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800DAB4C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180147060 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::UpdateRenderTargetInfo(CDrawingContext *this)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 RenderTargetInfo; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 120LL);
  if ( v3 == CDeviceTextureTarget::GetRenderTargetInfo )
    RenderTargetInfo = CDeviceTextureTarget::GetRenderTargetInfo(v2, (__int64)v5);
  else
    RenderTargetInfo = v3(v2, (__int64)v5);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)RenderTargetInfo;
  *((_QWORD *)this + 9) = *(_QWORD *)(RenderTargetInfo + 16);
}
