/*
 * XREFs of ?GetShaderResourceView@CDeviceTextureTarget@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x1801DFF00
 * Callers:
 *     ?GetShaderResourceView@CDeviceTextureTarget@@WKI@EAAPEAUID3D11ShaderResourceView@@XZ @ 0x1802D6D10 (-GetShaderResourceView@CDeviceTextureTarget@@WKI@EAAPEAUID3D11ShaderResourceView@@XZ.c)
 * Callees:
 *     ?EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ @ 0x1801483E8 (-EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ.c)
 */

struct ID3D11ShaderResourceView *__fastcall CDeviceTextureTarget::GetShaderResourceView(CDeviceTextureTarget *this)
{
  if ( !*((_BYTE *)this + 218) && !*((_BYTE *)this + 217) )
    return 0LL;
  CD2DBitmap::EnsureShaderResourceView((CDeviceTextureTarget *)((char *)this - 72));
  return (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 5);
}
