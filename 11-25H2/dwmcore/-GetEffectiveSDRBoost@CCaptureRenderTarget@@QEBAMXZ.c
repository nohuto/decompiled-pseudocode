/*
 * XREFs of ?GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ @ 0x18025B3E4
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1800C4784 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801F93E8 (-UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CCaptureRenderTarget::GetEffectiveSDRBoost(CCaptureRenderTarget *this)
{
  float result; // xmm0_4

  result = *((float *)this + 736);
  if ( result == 0.0 )
    return *((float *)this + 737);
  return result;
}
