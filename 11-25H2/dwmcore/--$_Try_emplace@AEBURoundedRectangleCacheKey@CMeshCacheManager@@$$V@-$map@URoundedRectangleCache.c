/*
 * XREFs of ??$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@?$map@URoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@Z @ 0x1801DBE04
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x18008F360 (-TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEB.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801DBF5C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCache.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801DC09C (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1802591E0 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<CMeshCacheManager::RoundedRectangleCacheKey,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>::_Try_emplace<CMeshCacheManager::RoundedRectangleCacheKey const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3,
        int a4)
{
  __int64 *v4; // r10
  __int64 *v7; // rdx
  float *v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  char v14; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v15; // [rsp+38h] [rbp-28h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 *v17; // [rsp+70h] [rbp+10h] BYREF

  v4 = (__int64 *)*a1;
  v7 = (__int64 *)*a1;
  v8 = *(float **)(*a1 + 8LL);
  v16 = (unsigned __int64)v8;
  if ( !*((_BYTE *)v8 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v16 = v8;
      if ( *((_QWORD *)v8 + 4) < v9
        || *((_QWORD *)v8 + 4) <= v9 && (float)(*((float *)a3 + 2) - v8[10]) > 0.0000011920929 )
      {
        DWORD2(v16) = 0;
        v8 = (float *)*((_QWORD *)v8 + 2);
      }
      else
      {
        v7 = (__int64 *)v8;
        DWORD2(v16) = 1;
        v8 = *(float **)v8;
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
  }
  if ( *((_BYTE *)v7 + 25)
    || (v10 = v7[4], *a3 < v10)
    || *a3 <= v10 && (float)(*((float *)v7 + 10) - *((float *)a3 + 2)) > 0.0000011920929 )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v17 = a3;
    v11 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>(
            (unsigned int)&v14,
            (_DWORD)a1,
            (_DWORD)v4,
            a4,
            (__int64)&v17);
    v12 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = 0LL;
    if ( v15 )
    {
      wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(v15 + 6);
      if ( v15 )
        std::_Deallocate<16,0>(v15, 0x38uLL);
    }
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      &v16,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
