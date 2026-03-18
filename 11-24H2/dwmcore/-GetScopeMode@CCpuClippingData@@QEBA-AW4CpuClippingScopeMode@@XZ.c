/*
 * XREFs of ?GetScopeMode@CCpuClippingData@@QEBA?AW4CpuClippingScopeMode@@XZ @ 0x1801EC25C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCpuClippingData::GetScopeMode(__int64 a1)
{
  return *(unsigned int *)(a1 + 32);
}
