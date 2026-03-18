/*
 * XREFs of ??$?4U?$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802100BC
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046B2C (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1801FE5EC (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 * Callees:
 *     ??R?$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800464D0 (--R-$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z.c)
 */

CRenderingTechniqueFragment **__fastcall std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
        CRenderingTechniqueFragment **a1,
        CRenderingTechniqueFragment **a2)
{
  CRenderingTechniqueFragment *v2; // rax
  CRenderingTechniqueFragment *v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<CRenderingTechniqueFragment>::operator()((__int64)a1, v4);
  return a1;
}
