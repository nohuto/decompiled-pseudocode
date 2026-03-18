/*
 * XREFs of ?GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ @ 0x18024FEB4
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18015957C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801EC948 (-UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ.c)
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
