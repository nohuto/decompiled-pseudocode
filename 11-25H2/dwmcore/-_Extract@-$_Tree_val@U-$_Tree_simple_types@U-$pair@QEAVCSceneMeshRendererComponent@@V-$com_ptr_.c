/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801F67A4
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1802AE824 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpectreMaterial@.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800301EC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x180031950 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x1801A8CA4 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x1801F6A7C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRendererComponent@@V-$com_ptr_.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Extract(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 *v7; // rcx
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rcx
  __int64 v15; // rdi
  _BYTE *v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++((__int64 *)&v18);
  v4 = v3[2];
  if ( !*(_BYTE *)(*v3 + 25) )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      v4 = *v3;
    }
    else
    {
      v5 = (__int64)v18;
      v4 = v18[2];
      if ( v18 != v3 )
      {
        *(_QWORD *)(*v3 + 8) = v18;
        *(_QWORD *)v5 = *v3;
        if ( v5 == v3[2] )
        {
          v6 = v5;
        }
        else
        {
          v6 = *(_QWORD *)(v5 + 8);
          if ( !*(_BYTE *)(v4 + 25) )
            *(_QWORD *)(v4 + 8) = v6;
          *(_QWORD *)v6 = v4;
          *(_QWORD *)(v5 + 16) = v3[2];
          *(_QWORD *)(v3[2] + 8) = v5;
        }
        if ( *(__int64 **)(*a1 + 8LL) == v3 )
        {
          *(_QWORD *)(*a1 + 8LL) = v5;
        }
        else
        {
          v7 = (__int64 *)v3[1];
          if ( (__int64 *)*v7 == v3 )
            *v7 = v5;
          else
            v7[2] = v5;
        }
        *(_QWORD *)(v5 + 8) = v3[1];
        v12 = *(_BYTE *)(v5 + 24);
        *(_BYTE *)(v5 + 24) = *((_BYTE *)v3 + 24);
        *((_BYTE *)v3 + 24) = v12;
        goto LABEL_23;
      }
    }
  }
  v6 = v3[1];
  if ( !*(_BYTE *)(v4 + 25) )
    *(_QWORD *)(v4 + 8) = v6;
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v4;
  }
  else if ( *(__int64 **)v6 == v3 )
  {
    *(_QWORD *)v6 = v4;
  }
  else
  {
    *(_QWORD *)(v6 + 16) = v4;
  }
  v8 = (_QWORD *)*a1;
  if ( *(__int64 **)*a1 == v3 )
  {
    if ( *(_BYTE *)(v4 + 25) )
      v9 = (_QWORD *)v6;
    else
      v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min((_QWORD *)v4);
    *v8 = v9;
  }
  if ( *(__int64 **)(*a1 + 16LL) == v3 )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      v11 = v6;
    }
    else
    {
      v10 = *(_QWORD *)(v4 + 16);
      v11 = v4;
      while ( !*(_BYTE *)(v10 + 25) )
      {
        v11 = v10;
        v10 = *(_QWORD *)(v10 + 16);
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v11;
  }
LABEL_23:
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_24;
  while ( 1 )
  {
    v15 = v6;
    if ( v4 == *(_QWORD *)(*a1 + 8LL) || *(_BYTE *)(v4 + 24) != 1 )
      break;
    v16 = *(_BYTE **)v6;
    if ( v4 == *(_QWORD *)v6 )
    {
      v16 = *(_BYTE **)(v6 + 16);
      if ( !v16[24] )
      {
        v16[24] = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Lrotate(
          a1,
          v6);
        v16 = *(_BYTE **)(v6 + 16);
      }
      if ( !v16[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
            v16[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(
              (__int64)a1,
              v16);
            v16 = *(_BYTE **)(v6 + 16);
          }
          v16[24] = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Lrotate(
            a1,
            v6);
          break;
        }
        goto LABEL_59;
      }
    }
    else
    {
      if ( !v16[24] )
      {
        v16[24] = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v6);
        v16 = *(_BYTE **)v6;
      }
      if ( !v16[25] )
      {
        v17 = *((_QWORD *)v16 + 2);
        if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) == 1 )
          {
            *(_BYTE *)(v17 + 24) = 1;
            v16[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Lrotate(
              a1,
              v16);
            v16 = *(_BYTE **)v6;
          }
          v16[24] = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v6);
          break;
        }
LABEL_59:
        v16[24] = 0;
      }
    }
    v6 = *(_QWORD *)(v6 + 8);
    v4 = v15;
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_24:
  v13 = a1[1];
  if ( v13 )
    a1[1] = v13 - 1;
  return v3;
}
