/*
 * XREFs of ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180147060
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x18003F290 (-SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x18007FC58 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x1800D8850 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800DAB4C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DB068 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DCA0C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1801E4F64 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x180147A00 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceTextureTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 (*v5)(void); // rax
  struct CD3DDevice *Device; // rax
  bool v7; // al

  v4 = (_QWORD *)(a1 - 256);
  v5 = *(__int64 (**)(void))(*v4 + 40LL);
  if ( (char *)v5 == (char *)CD2DResource::GetDevice )
    Device = CD2DContext::GetDevice(*(CD2DContext **)(v4[5] + 24LL));
  else
    Device = (struct CD3DDevice *)v5();
  *(_QWORD *)a2 = *((_QWORD *)Device + 117);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 - 28);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 28);
  if ( *(_BYTE *)(a1 + 32) )
    v7 = 1;
  else
    v7 = (*(_DWORD *)(a1 - 72) & 0x80000) != 0;
  *(_BYTE *)(a2 + 20) = v7;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
