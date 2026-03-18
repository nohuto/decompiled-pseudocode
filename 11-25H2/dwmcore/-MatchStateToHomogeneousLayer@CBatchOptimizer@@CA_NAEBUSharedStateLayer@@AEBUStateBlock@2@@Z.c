/*
 * XREFs of ?MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z @ 0x1801C2C50
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180295158 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBatchOptimizer::MatchStateToHomogeneousLayer(
        const struct SharedStateLayer *a1,
        const struct SharedStateLayer::StateBlock *a2)
{
  int v3; // eax

  if ( *(_QWORD *)a1 != *(_QWORD *)a2 )
    return 0;
  if ( !*((_QWORD *)a1 + 4) )
  {
    v3 = *((_DWORD *)a1 + 5);
    if ( v3 != 1 )
      return v3 == 0;
  }
  return *((_DWORD *)a1 + 2) == *((_DWORD *)a2 + 2) && *((_BYTE *)a1 + 12) == *((_BYTE *)a2 + 12);
}
