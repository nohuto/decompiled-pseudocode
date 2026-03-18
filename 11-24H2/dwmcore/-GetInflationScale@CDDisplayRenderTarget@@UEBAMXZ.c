/*
 * XREFs of ?GetInflationScale@CDDisplayRenderTarget@@UEBAMXZ @ 0x1802275D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CDDisplayRenderTarget::GetInflationScale(CDDisplayRenderTarget *this)
{
  return CMonitorTransform::GetInflationScale((CDDisplayRenderTarget *)((char *)this + 30424), *((_BYTE *)this + 19225));
}
