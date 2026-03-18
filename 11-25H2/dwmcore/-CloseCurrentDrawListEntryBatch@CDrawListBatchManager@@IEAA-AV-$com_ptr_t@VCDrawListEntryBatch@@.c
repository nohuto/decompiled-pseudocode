/*
 * XREFs of ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800D73D0
 * Callers:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800926D4 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 * Callees:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800D6A50 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800D7540 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x18018DD94 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 */

_QWORD *__fastcall CDrawListBatchManager::CloseCurrentDrawListEntryBatch(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  int v8; // r10d
  _DWORD *v9; // r8
  __int64 v11; // rcx

  if ( *(_QWORD *)(a1 + 128) )
  {
    v4 = *(_QWORD *)(a1 + 136);
    if ( v4 )
    {
      while ( *(_BYTE *)(v4 + 4240) )
      {
        if ( *(_DWORD *)(v4 + 32) <= 1u )
          break;
        CBatchOptimizer::TryMergeOneLayer((CBatchOptimizer *)v4);
      }
      v5 = *(_DWORD *)(v4 + 32);
      if ( v5 )
      {
        while ( !*(_DWORD *)(520LL * *(int *)(v4 + 4LL * (v5 - 1) + 48) + v4 + 100) )
        {
          CBatchOptimizer::DiscardEmptyLayers((CBatchOptimizer *)v4, v5 - 1, 1u);
          v5 = *(_DWORD *)(v4 + 32);
          if ( !v5 )
            goto LABEL_12;
        }
        do
        {
          CBatchOptimizer::FlushBottomLayer((CBatchOptimizer *)v4);
          v6 = 0LL;
          v7 = *(_DWORD *)(v4 + 32) - 1;
          if ( *(_DWORD *)(v4 + 32) != 1 )
          {
            v8 = *(_DWORD *)(v4 + 48);
            v9 = (_DWORD *)(v4 + 48);
            do
            {
              ++v6;
              *v9 = v9[1];
              ++v9;
            }
            while ( v6 != v7 );
            *(_DWORD *)(v4 + 4LL * v7 + 48) = v8;
          }
        }
        while ( (*(_DWORD *)(v4 + 32))-- != 1 );
      }
LABEL_12:
      *(_BYTE *)(v4 + 4240) = 0;
      *(_OWORD *)(v4 + 16) = SharedStateLayer::StateBlock::kBlank;
      *(_DWORD *)(v4 + 48) = 0;
      *(_DWORD *)(v4 + 52) = 1;
      *(_DWORD *)(v4 + 56) = 2;
      *(_DWORD *)(v4 + 60) = 3;
      *(_DWORD *)(v4 + 64) = 4;
      *(_DWORD *)(v4 + 68) = 5;
      *(_DWORD *)(v4 + 72) = 6;
      *(_DWORD *)(v4 + 76) = 7;
    }
    v11 = *(_QWORD *)(a1 + 128);
    *(_DWORD *)(v11 + 44) = *(_DWORD *)(a1 + 24);
    *(_QWORD *)(v11 + 32) = 0LL;
    *a2 = *(_QWORD *)(a1 + 128);
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
