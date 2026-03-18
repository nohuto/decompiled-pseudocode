/*
 * XREFs of ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18018801C
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18010A010 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180188170 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180188720 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z @ 0x180188814 (-GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180188864 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 */

void __fastcall CBatchOptimizer::AddStateSettingCommand(struct IDrawListStateSink *a1, CBatchCommand **a2)
{
  _OWORD *v4; // r14
  __int64 v5; // rax
  CBatchCommand *v6; // rdx
  __int64 v7; // rcx
  char *v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // esi
  int NearestRenderingLayerUnderEmptyLayer; // eax
  __int64 v12; // r8
  int *v13; // r9
  bool v14; // zf

  if ( !*((_DWORD *)a1 + 8) )
    CBatchOptimizer::AppendLayer(a1);
  CBatchCommand::ApplyRenderState(*a2, a1);
  v4 = (_OWORD *)((char *)a1 + 16);
  v5 = 520LL * *((int *)a1 + *((_DWORD *)a1 + 8) + 11);
  if ( *(_DWORD *)((char *)a1 + v5 + 100)
    || (v14 = *(_DWORD *)((char *)a1 + v5 + 96) == 20, *(_OWORD *)((char *)a1 + v5 + 80) = *v4, v14) )
  {
    *((_DWORD *)a1 + 6) = 24;
    *((_BYTE *)a1 + 28) = 2;
    CBatchOptimizer::AppendLayer(a1);
  }
  v6 = *a2;
  v7 = *((int *)a1 + *((_DWORD *)a1 + 8) + 11);
  *a2 = 0LL;
  v8 = (char *)a1 + 520 * v7;
  v9 = *((unsigned int *)v8 + 24);
  *((_DWORD *)v8 + 24) = v9 + 1;
  *(_QWORD *)&v8[8 * v9 + 120] = v6;
  v10 = *((_DWORD *)a1 + 8);
  if ( v10 > 1 )
  {
    NearestRenderingLayerUnderEmptyLayer = CBatchOptimizer::GetNearestRenderingLayerUnderEmptyLayer(a1, v10 - 1);
    v12 = NearestRenderingLayerUnderEmptyLayer;
    v13 = (int *)((char *)a1 + 4 * NearestRenderingLayerUnderEmptyLayer + 48);
    while ( v12 != v10 - 1 )
    {
      if ( *((_QWORD *)a1 + 65 * *v13 + 10) == *(_QWORD *)v4 )
      {
        CBatchOptimizer::DiscardEmptyLayers(
          a1,
          NearestRenderingLayerUnderEmptyLayer + 1,
          v10 - NearestRenderingLayerUnderEmptyLayer - 1);
        return;
      }
      ++NearestRenderingLayerUnderEmptyLayer;
      ++v12;
      ++v13;
    }
  }
}
