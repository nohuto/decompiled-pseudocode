/*
 * XREFs of ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18018892C
 * Callers:
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x180054F60 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x180187D4C (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 * Callees:
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x1801889C0 (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV-$span@PEAVCBatchCommand@@$0-.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBatchOptimizer::PurgeStateSettingEntriesFromLayer(CBatchOptimizer *this, int a2)
{
  __int64 v2; // rdx
  _DWORD *v3; // rbx
  int v4; // eax
  __int64 v5; // rsi
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((int *)this + a2 + 12);
  v3 = (_DWORD *)((char *)this + 520 * v2);
  v4 = v3[24] - v3[25];
  if ( v4 )
  {
    v5 = v4;
    v6[0] = v4;
    if ( v4 == -1LL || (v6[1] = v3 + 30, v3 == (_DWORD *)-120LL) )
      ((void (__fastcall *)(CBatchOptimizer *, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(this, v2);
    CBatchOptimizer::DiscardEntries(*((_QWORD *)this + 1), v6);
    memmove_0(v3 + 30, &v3[2 * v5 + 30], 8LL * (unsigned int)v3[25]);
    v3[24] = v3[25];
  }
}
