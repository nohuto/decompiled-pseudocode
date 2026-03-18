/*
 * XREFs of ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180108A2C
 * Callers:
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180108D70 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180147598 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ?AppendMegaRectCommand@CMegaRectCollection@@QEAAXPEAVCMegaRectBatchCommand@@@Z @ 0x180042650 (-AppendMegaRectCommand@CMegaRectCollection@@QEAAXPEAVCMegaRectBatchCommand@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801D5204 (-AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delet.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180289FB8 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 */

__int64 __fastcall CDrawListEntryBatch::AppendRenderCommand(__int64 a1, struct CMegaRectBatchCommand **a2)
{
  struct CMegaRectBatchCommand *v2; // rdi
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct CMegaRectBatchCommand *v6; // rdx
  int v7; // eax

  ++dword_1803FA738;
  v2 = *a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  if ( *(_DWORD *)*a2 != 4 )
    v2 = 0LL;
  if ( *(_QWORD *)(v4 + 160) )
  {
    v6 = (struct CMegaRectBatchCommand *)((unsigned __int64)v2 & -(__int64)((unsigned __int8)CBatchOptimizer::AddRenderingCommand(*(CBatchOptimizer **)(v4 + 160)) != 0));
  }
  else
  {
    v7 = CDrawListBatchManager::AddBatchCommand(v4 + 24);
    v5 = v7;
    v6 = v2;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x84u, 0LL);
      return v5;
    }
  }
  if ( v6 )
    CMegaRectCollection::AppendMegaRectCommand((CMegaRectCollection *)(a1 + 128), v6);
  return v5;
}
