/*
 * XREFs of ?GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x18010E600
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010A6B0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x18010C510 (-GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceVi.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010C8E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ @ 0x18010C7A8 (-EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ.c)
 */

struct ID3D11ShaderResourceView *__fastcall CD2DBitmap::GetShaderResourceView(CD2DBitmap *this)
{
  CD2DBitmap::EnsureShaderResourceView((CD2DBitmap *)((char *)this - 72));
  return (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 5);
}
