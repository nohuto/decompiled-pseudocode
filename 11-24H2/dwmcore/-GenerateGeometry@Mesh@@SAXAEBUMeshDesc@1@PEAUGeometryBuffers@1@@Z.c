/*
 * XREFs of ?GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x180179C80
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180176590 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x180179D70 (-GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18017A5D0 (-GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z @ 0x18017ACA0 (-CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z.c)
 *     ?resize@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18017B1E4 (-resize@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@.c)
 *     ??1?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801C87C0 (--1-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vl.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall Mesh::GenerateGeometry(const struct Mesh::MeshDesc *a1, struct Mesh::GeometryBuffers *a2)
{
  __int64 v4; // rdx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  _OWORD v7[2]; // [rsp+20h] [rbp-578h] BYREF
  struct Mesh::VertexAAOffsetDesc *v8; // [rsp+40h] [rbp-558h]
  __int64 v9; // [rsp+48h] [rbp-550h]
  __int64 v10; // [rsp+50h] [rbp-548h]
  struct Mesh::VertexAAOffsetDesc *v11[3]; // [rsp+60h] [rbp-538h] BYREF
  _BYTE v12[1280]; // [rsp+78h] [rbp-520h] BYREF
  char v13; // [rsp+578h] [rbp-20h] BYREF

  if ( *((_BYTE *)a1 + 52) )
  {
    Mesh::GenerateGeometryForRectangle(a1, a2);
  }
  else if ( *((_QWORD *)a1 + 4) )
  {
    Mesh::GenerateGeometryWorker(a1, a2);
  }
  else
  {
    v4 = *((_QWORD *)a1 + 1);
    v11[0] = (struct Mesh::VertexAAOffsetDesc *)v12;
    v11[1] = (struct Mesh::VertexAAOffsetDesc *)v12;
    v11[2] = (struct Mesh::VertexAAOffsetDesc *)&v13;
    detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::resize(
      v11,
      v4);
    Mesh::CalcVertexAAOffsets(a1, v11[0], 1);
    v5 = *((_OWORD *)a1 + 1);
    v7[0] = *(_OWORD *)a1;
    v6 = *((_OWORD *)a1 + 2);
    v7[1] = v5;
    *(_QWORD *)&v5 = *((_QWORD *)a1 + 6);
    v9 = *((_QWORD *)&v6 + 1);
    v8 = v11[0];
    v10 = v5;
    Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)v7, a2);
    detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::~vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>(v11);
  }
}
