/*
 * XREFs of ?ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ @ 0x1800318C0
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030238 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18002FE14 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18002FE40 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800301EC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x180031950 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 */

void __fastcall CMeshCacheManager::ReleaseUnusedCaches(__int64 **this)
{
  __int64 *v2; // r9
  __int64 v3; // rcx
  __int64 *v4; // r9
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 i; // rax
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)**this;
  while ( v2 != *this )
  {
    if ( *(_DWORD *)(v2[6] + 8) == 1 )
    {
      v8 = v2;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++((__int64 *)&v8);
      v5 = std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Extract(
             this,
             v4);
      std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>(
        v6,
        (__int64)v5);
      v2 = v8;
    }
    else
    {
      v3 = v2[2];
      if ( *(_BYTE *)(v3 + 25) )
      {
        for ( i = v2[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
        {
          if ( v2 != *(__int64 **)(i + 16) )
            break;
          v2 = (__int64 *)i;
        }
        v2 = (__int64 *)i;
      }
      else
      {
        v2 = (__int64 *)std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min(v3);
      }
    }
  }
}
