/*
 * XREFs of ??1?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ @ 0x180146FB0
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18010A010 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?Destroy@CBatchCommand@@AEAAXXZ @ 0x180146FF0 (-Destroy@CBatchCommand@@AEAAXXZ.c)
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
