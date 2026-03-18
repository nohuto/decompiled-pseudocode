/*
 * XREFs of ?HasCpuClip@CCpuClippingData@@QEBA_NXZ @ 0x1801C5040
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCpuClippingData::HasCpuClip(CCpuClippingData *this)
{
  return *((_QWORD *)this + 7) != 0LL;
}
