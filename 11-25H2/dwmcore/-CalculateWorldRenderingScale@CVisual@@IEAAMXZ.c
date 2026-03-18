/*
 * XREFs of ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ @ 0x18003E528
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::CalculateWorldRenderingScale(CVisual *this)
{
  float v1; // xmm6_4
  float v2; // xmm5_4
  float v3; // xmm2_4

  v1 = (float)((float)(*((float *)this + 154) * 0.70710677) + (float)(*((float *)this + 150) * 0.70710677))
     + (float)(*((float *)this + 158) * 0.0);
  v2 = (float)((float)(*((float *)this + 155) * 0.70710677) + (float)(*((float *)this + 151) * 0.70710677))
     + (float)(*((float *)this + 159) * 0.0);
  v3 = (float)((float)(*((float *)this + 156) * 0.70710677) + (float)(*((float *)this + 152) * 0.70710677))
     + (float)(*((float *)this + 160) * 0.0);
  return sqrtf_0((float)((float)(v1 * v1) + (float)(v2 * v2)) + (float)(v3 * v3));
}
