/*
 * XREFs of ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802E24C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetDeviceTexture(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  return CDxHandleYUVBitmapRealization::GetDeviceTexture((CDxHandleYUVBitmapRealization *)(a1 - 256), a2, a3);
}
