/*
 * XREFs of ?GetInflationScale@CDDisplayRenderTarget@@UEBAMXZ @ 0x180232E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CDDisplayRenderTarget::GetInflationScale(CDDisplayRenderTarget *this)
{
  return CMonitorTransform::GetInflationScale((CDDisplayRenderTarget *)((char *)this + 30808), *((_BYTE *)this + 19609));
}
