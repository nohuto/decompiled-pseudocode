/*
 * XREFs of ?CanIgnoreAncestorCpuClips@CCpuClippingData@@QEBA_NXZ @ 0x1801EC410
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCpuClippingData::CanIgnoreAncestorCpuClips(CCpuClippingData *this)
{
  return *((_BYTE *)this + 64);
}
