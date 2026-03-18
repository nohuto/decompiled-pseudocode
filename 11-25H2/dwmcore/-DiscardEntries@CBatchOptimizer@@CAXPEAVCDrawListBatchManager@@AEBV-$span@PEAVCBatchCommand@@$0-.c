/*
 * XREFs of ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x18018CEE0
 * Callers:
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18018CE4C (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x18018DD94 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 * Callees:
 *     ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18018CF50 (-ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_de.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x18018D2A8 (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 */

__int64 __fastcall CBatchOptimizer::DiscardEntries(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  dword_1804067A0 += *(_DWORD *)a2;
  v3 = (__int64 *)a2[1];
  result = *a2;
  v5 = &v3[*a2];
  while ( v3 != v5 )
  {
    v7 = *v3;
    result = CDrawListBatchManager::ReturnBatchCommand(a1, &v7);
    if ( v7 )
      result = std::default_delete<CBatchCommand>::operator()(v6, v7);
    ++v3;
  }
  return result;
}
