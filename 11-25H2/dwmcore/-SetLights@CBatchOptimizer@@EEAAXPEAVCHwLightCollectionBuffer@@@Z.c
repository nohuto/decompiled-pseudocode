/*
 * XREFs of ?SetLights@CBatchOptimizer@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x18018DA40
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180144C20 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x18018D6A0 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBatchOptimizer::SetLights(CBatchOptimizer *this, struct CHwLightCollectionBuffer *a2)
{
  *((_QWORD *)this + 2) = a2;
}
