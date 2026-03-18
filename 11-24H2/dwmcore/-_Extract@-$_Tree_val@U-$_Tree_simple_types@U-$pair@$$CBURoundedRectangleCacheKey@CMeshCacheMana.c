/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800F3F38
 * Callers:
 *     ?ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ @ 0x1800F3430 (-ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x1800E18C8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E75B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x1800E7AF0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x1801A131C (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Extract(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // r9
  _QWORD *v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rax
  char v11; // dl
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++((__int64 *)&v18);
  v4 = v3[2];
  if ( *(_BYTE *)(*v3 + 25) )
    goto LABEL_2;
  if ( *(_BYTE *)(v4 + 25) )
  {
    v4 = *v3;
    goto LABEL_2;
  }
  v10 = (__int64)v18;
  v4 = v18[2];
  if ( v18 == v3 )
  {
LABEL_2:
    v5 = v3[1];
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v5;
    if ( *(__int64 **)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( *(__int64 **)v5 == v3 )
    {
      *(_QWORD *)v5 = v4;
    }
    else
    {
      *(_QWORD *)(v5 + 16) = v4;
    }
    v6 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
        v7 = (_QWORD *)v5;
      else
        v7 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min((_QWORD *)v4);
      *v6 = v7;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
      {
        v14 = v5;
      }
      else
      {
        v16 = *(_QWORD *)(v4 + 16);
        v14 = v4;
        while ( !*(_BYTE *)(v16 + 25) )
        {
          v14 = v16;
          v16 = *(_QWORD *)(v16 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v14;
    }
    goto LABEL_12;
  }
  *(_QWORD *)(*v3 + 8) = v18;
  *(_QWORD *)v10 = *v3;
  if ( v10 == v3[2] )
  {
    v5 = v10;
  }
  else
  {
    v5 = *(_QWORD *)(v10 + 8);
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v5;
    *(_QWORD *)v5 = v4;
    *(_QWORD *)(v10 + 16) = v3[2];
    *(_QWORD *)(v3[2] + 8) = v10;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v10;
  }
  else
  {
    v15 = (__int64 *)v3[1];
    if ( (__int64 *)*v15 == v3 )
      *v15 = v10;
    else
      v15[2] = v10;
  }
  *(_QWORD *)(v10 + 8) = v3[1];
  v11 = *(_BYTE *)(v10 + 24);
  *(_BYTE *)(v10 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v11;
LABEL_12:
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_13;
  while ( 1 )
  {
    v12 = v5;
    if ( v4 == *(_QWORD *)(*a1 + 8LL) || *(_BYTE *)(v4 + 24) != 1 )
      break;
    v13 = *(_QWORD *)v5;
    if ( v4 == *(_QWORD *)v5 )
    {
      v13 = *(_QWORD *)(v5 + 16);
      if ( !*(_BYTE *)(v13 + 24) )
      {
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(v5 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Lrotate(
          (__int64)a1,
          v5);
        v13 = *(_QWORD *)(v5 + 16);
      }
      if ( !*(_BYTE *)(v13 + 25) )
      {
        if ( *(_BYTE *)(*(_QWORD *)v13 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v13 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v13 + 24LL) = 1;
            *(_BYTE *)(v13 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
            v13 = *(_QWORD *)(v5 + 16);
          }
          *(_BYTE *)(v13 + 24) = *(_BYTE *)(v5 + 24);
          *(_BYTE *)(v5 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v13 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Lrotate(
            (__int64)a1,
            v5);
          break;
        }
        goto LABEL_60;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v13 + 24) )
      {
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(v5 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
        v13 = *(_QWORD *)v5;
      }
      if ( !*(_BYTE *)(v13 + 25) )
      {
        v17 = *(_QWORD *)(v13 + 16);
        if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v13 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v13 + 24LL) == 1 )
          {
            *(_BYTE *)(v17 + 24) = 1;
            *(_BYTE *)(v13 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Lrotate(
              (__int64)a1,
              v13);
            v13 = *(_QWORD *)v5;
          }
          *(_BYTE *)(v13 + 24) = *(_BYTE *)(v5 + 24);
          *(_BYTE *)(v5 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v13 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
          break;
        }
LABEL_60:
        *(_BYTE *)(v13 + 24) = 0;
      }
    }
    v5 = *(_QWORD *)(v5 + 8);
    v4 = v12;
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_13:
  v8 = a1[1];
  if ( v8 )
    a1[1] = v8 - 1;
  return v3;
}
