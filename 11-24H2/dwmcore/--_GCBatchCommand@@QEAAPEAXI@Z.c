/*
 * XREFs of ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801479F8
 * Callers:
 *     ?Optimize@?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ @ 0x180057E6C (-Optimize@-$ShrinkableArray@PEAVCBatchCommand@@U-$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ.c)
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180147598 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x180147934 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ?Destroy@CBatchCommand@@AEAAXXZ @ 0x180146FF0 (-Destroy@CBatchCommand@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CBatchCommand *__fastcall CBatchCommand::`scalar deleting destructor'(CBatchCommand *this)
{
  CBatchCommand::Destroy(this);
  operator delete(this, 0xB8uLL);
  return this;
}
