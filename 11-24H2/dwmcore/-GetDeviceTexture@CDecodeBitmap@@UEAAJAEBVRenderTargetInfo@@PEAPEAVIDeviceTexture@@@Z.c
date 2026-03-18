/*
 * XREFs of ?GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180213020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDecodeBitmap::GetDeviceTexture(
        CDecodeBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  if ( *((_BYTE *)this + 48) )
    return CRenderTargetBitmap::GetDeviceTexture(this, a2, a3);
  *a3 = 0LL;
  return 2291674884LL;
}
