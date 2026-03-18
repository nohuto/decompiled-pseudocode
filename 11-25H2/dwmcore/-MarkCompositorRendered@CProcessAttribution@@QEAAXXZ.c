/*
 * XREFs of ?MarkCompositorRendered@CProcessAttribution@@QEAAXXZ @ 0x1801E2A70
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessAttribution::MarkCompositorRendered(CProcessAttribution *this)
{
  ++*((_DWORD *)this + 8);
}
