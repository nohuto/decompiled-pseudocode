/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18018D450
 * Callers:
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180085700 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180093920 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800D6A50 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z @ 0x18018D1C0 (-CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall DynArray<CBatchCommand *,0>::AddMultipleAndSet(__int64 a1, void *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v6; // edi
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // edi
  void *Src; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(unsigned int *)(a1 + 24);
  v6 = v3 + a3;
  if ( (unsigned int)v3 + a3 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    return 2147942934LL;
  }
  else if ( v6 > *(_DWORD *)(a1 + 20) )
  {
    Src = a2;
    v8 = DynArrayImpl<0>::Grow(a1, 8u, a3, 0, (unsigned __int64 *)&Src);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xC0u, 0LL);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + (unsigned int)(8 * *(_DWORD *)(a1 + 24))), Src, 8 * a3);
      *(_DWORD *)(a1 + 24) += a3;
    }
    return v9;
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 8 * v3), a2, 8LL * a3);
    result = 0LL;
    *(_DWORD *)(a1 + 24) = v6;
  }
  return result;
}
