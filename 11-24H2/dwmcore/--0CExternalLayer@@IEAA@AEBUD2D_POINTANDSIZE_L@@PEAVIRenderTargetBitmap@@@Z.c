/*
 * XREFs of ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800FE538
 * Callers:
 *     ??0CTreeEffectLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_POINTANDSIZE_F@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800A8C00 (--0CTreeEffectLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_POINTANDSIZE_F@@PEAVIRenderTargetBitma.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1800FE3C8 (-Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformResource@@PEAPEAV1@@Z @ 0x1800FE87C (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformR.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z @ 0x1801B4898 (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEB.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180230700 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ??0CValueColorTransformLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@AEBUMilColorTransform@@@Z @ 0x18027B5A4 (--0CValueColorTransformLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@AEBUMilColor.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z @ 0x18027C050 (-Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z.c)
 *     ??0CResampleLayer@@AEAA@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@1AEBUD2D_SIZE_F@@V?$optional@M@std@@PEAVIRenderTargetBitmap@@4@Z @ 0x18027C2AC (--0CResampleLayer@@AEAA@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@1AEBUD2D_SIZE_F@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CExternalLayer *__fastcall CExternalLayer::CExternalLayer(
        CExternalLayer *this,
        const struct D2D_POINTANDSIZE_L *a2,
        struct IRenderTargetBitmap *a3)
{
  __int128 v5; // xmm0
  char v6; // al

  *(_QWORD *)this = &CExternalLayer::`vftable';
  *((_QWORD *)this + 1) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a3 + 8LL))(a3);
  v5 = *(_OWORD *)a2;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 1) = v5;
  *(_QWORD *)((char *)this + 108) = 1065353216LL;
  *((_QWORD *)this + 6) = 1065353216LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 68) = 1065353216LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 11) = 1065353216LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  v6 = *((_BYTE *)this + 113) & 0xC0 | 0x29;
  *((_BYTE *)this + 112) = -86;
  *((_BYTE *)this + 113) = v6;
  return this;
}
