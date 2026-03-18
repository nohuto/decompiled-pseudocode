/*
 * XREFs of ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180188864
 * Callers:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180054980 (-CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA-AV-$com_ptr_t@VCDrawListEntryBatch@@.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x180187D4C (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18018801C (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x1801889C0 (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV-$span@PEAVCBatchCommand@@$0-.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180188A30 (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBatchOptimizer::DiscardEmptyLayers(CBatchOptimizer *this, int a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int i; // edi
  __int64 v7; // r15
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 )
  {
    v4 = a2;
    for ( i = 0; i < a3; ++i )
    {
      v7 = 520LL * *((int *)this + v4 + 12);
      gsl::details::extent_type<-1>::extent_type<-1>(v8, *(unsigned int *)((char *)this + v7 + 96));
      v8[1] = (char *)this + v7 + 120;
      if ( v8[0] == -1LL || !(CBatchOptimizer *)((char *)this + v7 + 120) && v8[0] )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      CBatchOptimizer::DiscardEntries(*((_QWORD *)this + 1), v8);
      *(_DWORD *)((char *)this + v7 + 96) = 0;
      CBatchOptimizer::RecycleLayer(this, v4);
    }
  }
}
