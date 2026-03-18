/*
 * XREFs of ?GetDisplayId@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AVDisplayId@@XZ @ 0x1802CDA20
 * Callers:
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800596A0 (-SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetDisplayId@CRenderTargetBitmap@@UEBA?AVDisplayId@@XZ @ 0x18005C590 (-GetDisplayId@CRenderTargetBitmap@@UEBA-AVDisplayId@@XZ.c)
 *     ?RecordUse@CRenderTargetBitmap@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801B1DF0 (-RecordUse@CRenderTargetBitmap@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId(a1 - 168, a2);
}
