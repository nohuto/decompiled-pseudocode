/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180146F60
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18010A010 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?Destroy@CBatchCommand@@AEAAXXZ @ 0x180146FF0 (-Destroy@CBatchCommand@@AEAAXXZ.c)
 */

void __fastcall wil::details::out_param_t<std::unique_ptr<CBatchCommand>>::~out_param_t<std::unique_ptr<CBatchCommand>>(
        __int64 a1)
{
  CBatchCommand *v1; // rbx

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(CBatchCommand ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
    {
      CBatchCommand::Destroy(v1);
      operator delete(v1, 0xB8uLL);
    }
  }
}
