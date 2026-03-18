/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801A8958
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@0@Z @ 0x1802B0EDC (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801A8C30 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_p.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@PEAU32@@Z @ 0x1801A8C7C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std@@@s.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x1801A8CA4 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@@Z @ 0x1801A8CF8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
        __int64 **a1,
        __int64 a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 *v7; // rcx
  __int64 *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // dl
  __int64 *v13; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = v3[2];
  if ( !*(_BYTE *)(*v3 + 25) )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      v4 = *v3;
    }
    else
    {
      v5 = v18;
      v4 = *(_QWORD *)(v18 + 16);
      if ( (__int64 *)v18 != v3 )
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
        if ( (__int64 *)(*a1)[1] == v3 )
        {
          (*a1)[1] = v5;
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
  if ( (__int64 *)(*a1)[1] == v3 )
  {
    (*a1)[1] = v4;
  }
  else if ( *(__int64 **)v6 == v3 )
  {
    *(_QWORD *)v6 = v4;
  }
  else
  {
    *(_QWORD *)(v6 + 16) = v4;
  }
  v8 = *a1;
  if ( (__int64 *)**a1 == v3 )
  {
    if ( *(_BYTE *)(v4 + 25) )
      v9 = v6;
    else
      v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Min(v4);
    *v8 = v9;
  }
  if ( (__int64 *)(*a1)[2] == v3 )
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
    (*a1)[2] = v11;
  }
LABEL_23:
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_24;
  while ( 1 )
  {
    v15 = v6;
    if ( v4 == (*a1)[1] || *(_BYTE *)(v4 + 24) != 1 )
      break;
    v16 = *(_QWORD *)v6;
    if ( v4 == *(_QWORD *)v6 )
    {
      v16 = *(_QWORD *)(v6 + 16);
      if ( !*(_BYTE *)(v16 + 24) )
      {
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Lrotate(
          a1,
          v6);
        v16 = *(_QWORD *)(v6 + 16);
      }
      if ( !*(_BYTE *)(v16 + 25) )
      {
        if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
            *(_BYTE *)(v16 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
            v16 = *(_QWORD *)(v6 + 16);
          }
          *(_BYTE *)(v16 + 24) = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Lrotate(
            a1,
            v6);
          break;
        }
        goto LABEL_59;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v16 + 24) )
      {
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
        v16 = *(_QWORD *)v6;
      }
      if ( !*(_BYTE *)(v16 + 25) )
      {
        v17 = *(_QWORD *)(v16 + 16);
        if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) == 1 )
          {
            *(_BYTE *)(v17 + 24) = 1;
            *(_BYTE *)(v16 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Lrotate(
              a1,
              v16);
            v16 = *(_QWORD *)v6;
          }
          *(_BYTE *)(v16 + 24) = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
          break;
        }
LABEL_59:
        *(_BYTE *)(v16 + 24) = 0;
      }
    }
    v6 = *(_QWORD *)(v6 + 8);
    v4 = v15;
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_24:
  v13 = a1[1];
  if ( v13 )
    a1[1] = (__int64 *)((char *)v13 - 1);
  return v3;
}
