/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180258404
 * Callers:
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x180142F10 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180162780 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180164BE0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180166790 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 * Callees:
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x1801683E8 (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 *     ?Transform@?$CScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x180292894 (-Transform@-$CScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU-$V.c)
 */

_UNKNOWN **__fastcall VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned int v3; // r14d
  unsigned int v4; // ebp
  float i; // xmm6_4
  __int64 v8; // rdi
  __int64 v9; // rbx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = 0;
  for ( i = *(float *)(a1 + 44); v4 < v3; *(_DWORD *)(v9 + 12) = (_DWORD)result )
  {
    v8 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v4);
    v9 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v4);
    VertexTransfer::CScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
      a1,
      *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 16) * v4,
      *(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 32) * v4,
      *(_DWORD *)(a1 + 40),
      a2,
      v9);
    result = (_UNKNOWN **)BlendPremultipliedColorDW(*(_DWORD *)(v8 + 12), i);
    ++v4;
  }
  return result;
}
