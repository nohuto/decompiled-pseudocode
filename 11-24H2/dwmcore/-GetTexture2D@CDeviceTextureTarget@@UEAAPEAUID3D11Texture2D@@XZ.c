/*
 * XREFs of ?GetTexture2D@CDeviceTextureTarget@@UEAAPEAUID3D11Texture2D@@XZ @ 0x18005A070
 * Callers:
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetTexture2D@CDeviceTextureTarget@@WKI@EAAPEAUID3D11Texture2D@@XZ @ 0x1802CDB00 (-GetTexture2D@CDeviceTextureTarget@@WKI@EAAPEAUID3D11Texture2D@@XZ.c)
 * Callees:
 *     <none>
 */

struct ID3D11Texture2D *__fastcall CDeviceTextureTarget::GetTexture2D(CDeviceTextureTarget *this)
{
  if ( *((_BYTE *)this + 218) || *((_BYTE *)this + 217) )
    return (struct ID3D11Texture2D *)*((_QWORD *)this + 4);
  else
    return 0LL;
}
