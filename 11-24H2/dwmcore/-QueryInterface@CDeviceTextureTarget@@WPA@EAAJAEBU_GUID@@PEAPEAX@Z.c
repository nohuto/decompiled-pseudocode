/*
 * XREFs of ?QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CDD00
 * Callers:
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18005A094 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010BFE0 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ??$query_to@VIDeviceTexture@@@?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVIDeviceTexture@@@Z @ 0x1801D0314 (--$query_to@VIDeviceTexture@@@-$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDeviceTextureTarget::QueryInterface((CD2DBitmap *)(a1 - 240), a2, a3);
}
