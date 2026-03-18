/*
 * XREFs of ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180188440
 * Callers:
 *     ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z @ 0x180106520 (-PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z.c)
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801072D0 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18015D680 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x18015E980 (-EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18015FAE0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801607F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180188170 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x180188520 (-SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18022EE74 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DBatchExecutionContext::Flush(__int64 a1, int a2)
{
  __int64 v3; // rdi

  *(_DWORD *)(a1 + 32) |= a2;
  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v3 + 40) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v3 + 16) + 560LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v3 + 16) + 560LL),
      *(_QWORD *)(v3 + 24),
      0LL);
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_DWORD *)(v3 + 48) = 0;
    if ( *(_BYTE *)(a1 + 74) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 104LL))(
        *(_QWORD *)(a1 + 16),
        *(unsigned int *)(a1 + 88),
        *(unsigned int *)(a1 + 76));
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v3 + 64) + 560LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v3 + 64) + 560LL),
        *(_QWORD *)(v3 + 72),
        0LL);
      *(_QWORD *)(v3 + 88) = 0LL;
      *(_DWORD *)(v3 + 96) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 96LL))(
        *(_QWORD *)(a1 + 16),
        *(unsigned int *)(a1 + 92),
        *(unsigned int *)(a1 + 80),
        0LL);
    }
    ++*(_DWORD *)(a1 + 128);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_DWORD *)(a1 + 96) = 0;
  }
}
