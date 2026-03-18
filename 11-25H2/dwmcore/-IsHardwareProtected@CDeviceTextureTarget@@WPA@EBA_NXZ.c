/*
 * XREFs of ?IsHardwareProtected@CDeviceTextureTarget@@WPA@EBA_NXZ @ 0x1802D6E10
 * Callers:
 *     ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x18003F750 (-IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DB068 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsHardwareProtected(__int64 a1)
{
  return CDeviceTextureTarget::IsHardwareProtected((CDeviceTextureTarget *)(a1 - 240));
}
