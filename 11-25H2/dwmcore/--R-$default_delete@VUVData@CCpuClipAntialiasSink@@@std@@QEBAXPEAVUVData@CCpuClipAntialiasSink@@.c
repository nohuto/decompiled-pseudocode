/*
 * XREFs of ??R?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@QEBAXPEAVUVData@CCpuClipAntialiasSink@@@Z @ 0x1801EB9A4
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180093920 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CCpuClipAntialiasSink::UVData>::operator()(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx

  if ( a2 )
  {
    v2 = (void *)a2[2];
    if ( v2 )
      operator delete(v2);
    operator delete(a2, 0x18uLL);
  }
}
