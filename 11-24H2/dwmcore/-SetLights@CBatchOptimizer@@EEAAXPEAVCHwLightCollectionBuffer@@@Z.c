/*
 * XREFs of ?SetLights@CBatchOptimizer@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x180188510
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180108FE0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180188170 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBatchOptimizer::SetLights(CBatchOptimizer *this, struct CHwLightCollectionBuffer *a2)
{
  *((_QWORD *)this + 2) = a2;
}
