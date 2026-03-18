/*
 * XREFs of ??1?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ @ 0x18018D330
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180145C50 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?Destroy@CBatchCommand@@AEAAXXZ @ 0x18018D370 (-Destroy@CBatchCommand@@AEAAXXZ.c)
 */

void __fastcall std::unique_ptr<CBatchCommand>::~unique_ptr<CBatchCommand>(CBatchCommand **a1)
{
  CBatchCommand *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CBatchCommand::Destroy(*a1);
    operator delete(v1, 0xB8uLL);
  }
}
