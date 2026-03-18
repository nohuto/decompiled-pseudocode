/*
 * XREFs of ??0CValueColorTransformLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@AEBUMilColorTransform@@@Z @ 0x18027B5A4
 * Callers:
 *     ?Create@CValueColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransform@@PEAPEAV1@@Z @ 0x18027B620 (-Create@CValueColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTra.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800FE538 (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 */

CValueColorTransformLayer *__fastcall CValueColorTransformLayer::CValueColorTransformLayer(
        CValueColorTransformLayer *this,
        const struct D2D_POINTANDSIZE_L *a2,
        struct IRenderTargetBitmap *a3,
        const struct MilColorTransform *a4)
{
  CExternalLayer::CExternalLayer(this, a2, a3);
  *(_QWORD *)this = &CValueColorTransformLayer::`vftable';
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)a4;
  *(_OWORD *)((char *)this + 136) = *((_OWORD *)a4 + 1);
  *(_OWORD *)((char *)this + 152) = *((_OWORD *)a4 + 2);
  *(_OWORD *)((char *)this + 168) = *((_OWORD *)a4 + 3);
  *(_OWORD *)((char *)this + 184) = *((_OWORD *)a4 + 4);
  *(_OWORD *)((char *)this + 200) = *((_OWORD *)a4 + 5);
  *((_DWORD *)this + 54) = *((_DWORD *)a4 + 24);
  return this;
}
