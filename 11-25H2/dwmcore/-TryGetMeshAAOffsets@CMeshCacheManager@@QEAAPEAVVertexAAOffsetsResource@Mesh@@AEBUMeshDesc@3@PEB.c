/*
 * XREFs of ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x18008F360
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18016CE28 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x18008ED00 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?resize@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1801917E8 (-resize@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_ex.c)
 *     ?Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z @ 0x1801B5D4C (-Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z.c)
 *     ??1?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801D7E10 (--1-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansi.c)
 *     ??$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@?$map@URoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@Z @ 0x1801DBE04 (--$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@-$map@URoundedRectangleCache.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct Mesh::VertexAAOffsetsResource *__fastcall CMeshCacheManager::TryGetMeshAAOffsets(
        CMeshCacheManager *this,
        const struct Mesh::MeshDesc *a2,
        const struct CShape *a3,
        const struct D2D1::Matrix3x2F *a4,
        bool a5)
{
  __int64 v9; // rbx
  int v10; // xmm0_4
  int v11; // xmm1_4
  __int64 v12; // rcx
  int v13; // xmm0_4
  int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  unsigned int i; // eax
  __int64 v18; // rdi
  float v20; // xmm2_4
  float v21; // xmm1_4
  unsigned int j; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  struct Mesh::VertexAAOffsetsResource **v27; // rdx
  int v28; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v29; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-C8h]
  __int128 v31; // [rsp+50h] [rbp-B8h]
  __int64 v32; // [rsp+60h] [rbp-A8h]
  _DWORD v33[6]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+80h] [rbp-88h]
  int v35; // [rsp+90h] [rbp-78h]
  int v36; // [rsp+94h] [rbp-74h]
  int v37; // [rsp+98h] [rbp-70h]
  int v38; // [rsp+9Ch] [rbp-6Ch]
  int v39; // [rsp+A0h] [rbp-68h]
  __int64 v40; // [rsp+A4h] [rbp-64h]
  __int64 v41; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-48h] BYREF
  float v43; // [rsp+C8h] [rbp-40h]
  int v44; // [rsp+CCh] [rbp-3Ch]
  _QWORD v45[3]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v46[160]; // [rsp+F0h] [rbp-18h] BYREF
  char v47; // [rsp+190h] [rbp+88h] BYREF

  v9 = 0LL;
  if ( (*(unsigned int (__fastcall **)(const struct CShape *))(*(_QWORD *)a3 + 8LL))(a3) )
    return 0LL;
  if ( COERCE_FLOAT(*((_DWORD *)a4 + 1) & _xmm) < 0.000081380211
    && COERCE_FLOAT(*((_DWORD *)a4 + 2) & _xmm) < 0.000081380211
    || COERCE_FLOAT(*(_DWORD *)a4 & _xmm) < 0.000081380211 && COERCE_FLOAT(*((_DWORD *)a4 + 3) & _xmm) < 0.000081380211 )
  {
    v10 = *(_DWORD *)a4;
    v11 = *((_DWORD *)a4 + 1);
    v12 = *((_QWORD *)a3 + 2);
    LODWORD(v32) = 0;
    v33[2] = 0;
    v33[3] = 0;
    v36 = 0;
    v39 = 0;
    v33[0] = v10;
    v13 = *((_DWORD *)a4 + 2);
    v40 = 1065353216LL;
    v33[4] = v13;
    v33[1] = v11;
    v14 = *((_DWORD *)a4 + 3);
    v34 = 0LL;
    v35 = 1065353216;
    v15 = *((_DWORD *)a4 + 5);
    v33[5] = v14;
    v16 = *((_DWORD *)a4 + 4);
    v38 = v15;
    v37 = v16;
    WORD2(v40) = 10248;
    CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
      (const struct CRoundedRectangleGeometryData *)(v12 + 16),
      (const struct CMILMatrix *)v33,
      (struct CRoundedRectangleGeometryData *)&v29);
    if ( BYTE4(v32) )
    {
      v20 = *((float *)&v29 + 2) + *(float *)&v29;
      v21 = *((float *)&v29 + 3) + *((float *)&v29 + 1);
    }
    else
    {
      for ( i = 1; i < 4; ++i )
      {
        if ( *(float *)v30 != *(float *)&v30[i] || *((float *)v30 + 1) != *((float *)&v30[i] + 1) )
          return (struct Mesh::VertexAAOffsetsResource *)v9;
      }
      v20 = *((float *)&v29 + 2);
      v21 = *((float *)&v29 + 3);
    }
    if ( (float)((float)(v20 - *(float *)&v29) - (float)(*(float *)v30 * 2.0)) > 0.0000011920929
      && (float)((float)(v21 - *((float *)&v29 + 1)) - (float)(*((float *)v30 + 1) * 2.0)) > 0.0000011920929 )
    {
      if ( !a5 )
      {
        for ( j = 0; (unsigned __int64)j < *((_QWORD *)a2 + 1); ++j )
        {
          if ( *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL * j) != 3 )
            return (struct Mesh::VertexAAOffsetsResource *)v9;
        }
      }
      v42 = *((_QWORD *)a2 + 1);
      v44 = 0;
      v43 = *(float *)v30 / *((float *)v30 + 1);
      std::map<CMeshCacheManager::RoundedRectangleCacheKey,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>::_Try_emplace<CMeshCacheManager::RoundedRectangleCacheKey const &,>(
        this,
        &v41,
        &v42);
      v18 = v41;
      if ( !*(_QWORD *)(v41 + 48) )
      {
        if ( a5 )
        {
          v23 = *((_QWORD *)a2 + 1);
          v45[0] = v46;
          v28 = 3;
          v45[1] = v46;
          v45[2] = &v47;
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::resize(
            v45,
            v23,
            &v28);
          v24 = *(_QWORD *)(v18 + 48);
          v25 = *((_OWORD *)a2 + 1);
          v29 = *(_OWORD *)a2;
          v26 = *((_OWORD *)a2 + 2);
          v30[0] = v25;
          v30[1] = v45[0];
          v32 = *((_QWORD *)a2 + 6);
          *(_QWORD *)(v18 + 48) = 0LL;
          v31 = v26;
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
          Mesh::VertexAAOffsetsResource::Create(
            (const struct Mesh::MeshDesc *)&v29,
            (struct Mesh::VertexAAOffsetsResource **)(v18 + 48));
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::~vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>(v45);
        }
        else
        {
          v27 = (struct Mesh::VertexAAOffsetsResource **)(v41 + 48);
          *(_QWORD *)(v41 + 48) = 0LL;
          Mesh::VertexAAOffsetsResource::Create(a2, v27);
        }
      }
      return *(struct Mesh::VertexAAOffsetsResource **)(v18 + 48);
    }
  }
  return (struct Mesh::VertexAAOffsetsResource *)v9;
}
