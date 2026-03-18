/*
 * XREFs of ?CanIgnoreAncestorCpuClips@CCpuClippingData@@QEBA_NXZ @ 0x1801F8EA8
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCpuClippingData::CanIgnoreAncestorCpuClips(CCpuClippingData *this)
{
  return *((_BYTE *)this + 64);
}
