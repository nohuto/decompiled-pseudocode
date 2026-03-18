/*
 * XREFs of ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18018D0D8
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800D7540 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800D79B0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 * Callees:
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800D79B0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18018CE4C (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z @ 0x18018DD44 (-GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x18018DD94 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 */

char __fastcall CBatchOptimizer::TryRemoveEmptyStateSettingLayer(CBatchOptimizer *this, int a2)
{
  __int64 v2; // rbx
  int v4; // edi
  int NearestRenderingLayerUnderEmptyLayer; // ebp
  __int64 v6; // r8
  __int64 v7; // r9
  int *v8; // r11
  int *i; // r10
  __int64 v11; // rcx
  int v12; // edx

  v2 = a2;
  v4 = v2 + 1;
  NearestRenderingLayerUnderEmptyLayer = CBatchOptimizer::GetNearestRenderingLayerUnderEmptyLayer(this, a2);
  v6 = NearestRenderingLayerUnderEmptyLayer;
  v7 = (int)v2 + 1;
  v8 = (int *)((char *)this + 4 * NearestRenderingLayerUnderEmptyLayer + 48);
LABEL_2:
  if ( v6 == v2 )
    return 0;
  for ( i = (int *)((char *)this + 4 * v7 + 48); ; ++i )
  {
    if ( v7 == *((_DWORD *)this + 8) )
    {
LABEL_5:
      ++NearestRenderingLayerUnderEmptyLayer;
      ++v6;
      ++v8;
      goto LABEL_2;
    }
    v11 = 520LL * *i;
    v12 = *(_DWORD *)((char *)this + v11 + 100);
    if ( *(_QWORD *)((char *)this + v11 + 80) == *((_QWORD *)this + 65 * *v8 + 10) )
      break;
    if ( v12 )
      goto LABEL_5;
    ++v4;
    ++v7;
  }
  if ( v12 )
    CBatchOptimizer::PurgeStateSettingEntriesFromLayer(this, v4--);
  CBatchOptimizer::DiscardEmptyLayers(
    this,
    NearestRenderingLayerUnderEmptyLayer + 1,
    v4 - NearestRenderingLayerUnderEmptyLayer);
  CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(this, NearestRenderingLayerUnderEmptyLayer);
  return 1;
}
