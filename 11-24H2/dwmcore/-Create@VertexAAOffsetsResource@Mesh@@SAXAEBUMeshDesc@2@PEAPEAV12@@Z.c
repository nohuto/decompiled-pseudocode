/*
 * XREFs of ?Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z @ 0x18017AC18
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x1800CAE40 (-TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEB.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180176590 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z @ 0x18017ACA0 (-CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Mesh::VertexAAOffsetsResource::Create(
        const struct Mesh::MeshDesc *a1,
        struct Mesh::VertexAAOffsetsResource **a2)
{
  char *v4; // rbx
  __int64 v5; // rax

  v4 = (char *)MIDL_user_allocate(32LL * *((_QWORD *)a1 + 1) + 24);
  if ( v4 )
  {
    v5 = *((_QWORD *)a1 + 1);
    *((_DWORD *)v4 + 2) = 0;
    *((_QWORD *)v4 + 2) = v5;
    *(_QWORD *)v4 = &Mesh::VertexAAOffsetsResource::`vftable';
    ((void (__fastcall *)(char *))Mesh::VertexAAOffsetsResource::`vftable')(v4);
  }
  else
  {
    v4 = 0LL;
  }
  Mesh::CalcVertexAAOffsets(a1, (struct Mesh::VertexAAOffsetDesc *)(v4 + 24), 1);
  *a2 = (struct Mesh::VertexAAOffsetsResource *)v4;
}
