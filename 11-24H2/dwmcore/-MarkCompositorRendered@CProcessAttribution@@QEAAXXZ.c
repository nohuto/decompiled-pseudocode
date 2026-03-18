/*
 * XREFs of ?MarkCompositorRendered@CProcessAttribution@@QEAAXXZ @ 0x1801D6DC0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessAttribution::MarkCompositorRendered(CProcessAttribution *this)
{
  ++*((_DWORD *)this + 8);
}
