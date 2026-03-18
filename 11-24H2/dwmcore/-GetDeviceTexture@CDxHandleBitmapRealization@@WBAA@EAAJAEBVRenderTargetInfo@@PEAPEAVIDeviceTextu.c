/*
 * XREFs of ?GetDeviceTexture@CDxHandleBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D7E20
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010A6B0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x18010C510 (-GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceVi.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010C8E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDeviceTexture(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  return CDxHandleBitmapRealization::GetDeviceTexture((CDxHandleBitmapRealization *)(a1 - 256), a2, a3);
}
