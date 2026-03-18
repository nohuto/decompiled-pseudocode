/*
 * XREFs of ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x1801889C0
 * Callers:
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180188864 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18018892C (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 * Callees:
 *     ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180139A10 (-ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_de.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x180146F30 (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 */

void __fastcall CBatchOptimizer::DiscardEntries(__int64 a1, __int64 a2)
{
  CBatchCommand **v3; // rbx
  CBatchCommand **v4; // rdi
  __int64 v5; // rcx
  CBatchCommand *v6; // [rsp+38h] [rbp+10h] BYREF

  dword_1803FA740 += *(_DWORD *)a2;
  v3 = *(CBatchCommand ***)(a2 + 8);
  v4 = &v3[*(_QWORD *)a2];
  while ( v3 != v4 )
  {
    v6 = *v3;
    CDrawListBatchManager::ReturnBatchCommand(a1, (int **)&v6);
    if ( v6 )
      std::default_delete<CBatchCommand>::operator()(v5, v6);
    ++v3;
  }
}
