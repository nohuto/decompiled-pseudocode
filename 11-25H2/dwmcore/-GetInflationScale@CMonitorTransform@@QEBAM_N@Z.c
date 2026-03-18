/*
 * XREFs of ?GetInflationScale@CMonitorTransform@@QEBAM_N@Z @ 0x18021DEC0
 * Callers:
 *     ?GetInflationScale@CLegacyRenderTarget@@UEBAMXZ @ 0x180099660 (-GetInflationScale@CLegacyRenderTarget@@UEBAMXZ.c)
 *     ?GetInflationScale@CDDisplayRenderTarget@@UEBAMXZ @ 0x180232E60 (-GetInflationScale@CDDisplayRenderTarget@@UEBAMXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CMonitorTransform::GetInflationScale(CMonitorTransform *this, char a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4

  if ( a2 )
  {
    v2 = *((float *)this + 52) * *((float *)this + 47);
    v3 = *((float *)this + 51) * *((float *)this + 48);
  }
  else
  {
    v2 = *((float *)this + 18) * *((float *)this + 13);
    v3 = *((float *)this + 17) * *((float *)this + 14);
  }
  return sqrtf_0(1.0 / (float)(v2 - v3));
}
