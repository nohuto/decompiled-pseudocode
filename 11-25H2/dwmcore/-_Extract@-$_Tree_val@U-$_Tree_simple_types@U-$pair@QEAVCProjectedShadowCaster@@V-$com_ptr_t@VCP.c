/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801E57E8
 * Callers:
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@0@Z @ 0x1801E5C98 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedSh.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x180031950 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 */

_BYTE *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>::_Extract(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r11
  __int64 v4; // rcx
  _QWORD **v5; // r10
  _BYTE *v6; // rbx
  _QWORD *i; // rax
  _QWORD *v8; // r9
  _QWORD *v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // r10
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char v15; // dl
  __int64 v16; // rcx
  _QWORD *v18; // r11
  __int64 *v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rdx
  __int64 **v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax

  v2 = a2 + 2;
  v4 = a2[2];
  v5 = (_QWORD **)(a2 + 1);
  v6 = a2;
  if ( *(_BYTE *)(v4 + 25) )
  {
    for ( i = *v5; !*((_BYTE *)i + 25) && a2 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      a2 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min((_QWORD *)v4);
  }
  v8 = (_QWORD *)*v2;
  if ( !*(_BYTE *)(*(_QWORD *)v6 + 25LL) )
  {
    if ( *((_BYTE *)v8 + 25) )
    {
      v8 = *(_QWORD **)v6;
    }
    else
    {
      v8 = (_QWORD *)i[2];
      if ( i != (_QWORD *)v6 )
      {
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = i;
        *i = *(_QWORD *)v6;
        if ( i == (_QWORD *)*v2 )
        {
          v9 = i;
        }
        else
        {
          v9 = (_QWORD *)i[1];
          if ( !*((_BYTE *)v8 + 25) )
            v8[1] = v9;
          *v9 = v8;
          i[2] = *v2;
          *(_QWORD *)(*v2 + 8LL) = i;
        }
        if ( *(_BYTE **)(*a1 + 8LL) == v6 )
        {
          *(_QWORD *)(*a1 + 8LL) = i;
        }
        else
        {
          v10 = *v5;
          if ( (_BYTE *)**v5 == v6 )
            *v10 = i;
          else
            v10[2] = i;
        }
        i[1] = *v5;
        v15 = *((_BYTE *)i + 24);
        *((_BYTE *)i + 24) = v6[24];
        v6[24] = v15;
        goto LABEL_25;
      }
    }
  }
  v9 = *v5;
  if ( !*((_BYTE *)v8 + 25) )
    v8[1] = v9;
  if ( *(_BYTE **)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = v8;
  }
  else if ( (_BYTE *)*v9 == v6 )
  {
    *v9 = v8;
  }
  else
  {
    v9[2] = v8;
  }
  v11 = (_QWORD *)*a1;
  if ( *(_BYTE **)*a1 == v6 )
  {
    if ( *((_BYTE *)v8 + 25) )
      v12 = v9;
    else
      v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min(v8);
    *v11 = v12;
  }
  if ( *(_BYTE **)(*a1 + 16LL) == v6 )
  {
    if ( *((_BYTE *)v8 + 25) )
    {
      v14 = v9;
    }
    else
    {
      v13 = v8[2];
      v14 = v8;
      while ( !*(_BYTE *)(v13 + 25) )
      {
        v14 = (_QWORD *)v13;
        v13 = *(_QWORD *)(v13 + 16);
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v14;
  }
LABEL_25:
  if ( v6[24] != 1 )
    goto LABEL_26;
  while ( 1 )
  {
    v18 = v9;
    if ( v8 == *(_QWORD **)(*a1 + 8LL) || *((_BYTE *)v8 + 24) != 1 )
      break;
    v19 = (__int64 *)*v9;
    if ( v8 == (_QWORD *)*v9 )
    {
      v19 = (__int64 *)v9[2];
      if ( !*((_BYTE *)v19 + 24) )
      {
        *((_BYTE *)v19 + 24) = 1;
        v29 = (_QWORD *)v9[2];
        *((_BYTE *)v9 + 24) = 0;
        v9[2] = *v29;
        if ( !*(_BYTE *)(*v29 + 25LL) )
          *(_QWORD *)(*v29 + 8LL) = v9;
        v29[1] = v9[1];
        if ( v9 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v29;
        }
        else
        {
          v30 = (_QWORD *)v9[1];
          if ( v9 == (_QWORD *)*v30 )
            *v30 = v29;
          else
            v30[2] = v29;
        }
        *v29 = v9;
        v9[1] = v29;
        v19 = (__int64 *)v9[2];
      }
      if ( !*((_BYTE *)v19 + 25) )
      {
        if ( *(_BYTE *)(*v19 + 24) != 1 || *(_BYTE *)(v19[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v19[2] + 24) == 1 )
          {
            *(_BYTE *)(*v19 + 24) = 1;
            v31 = *v19;
            *((_BYTE *)v19 + 24) = 0;
            *v19 = *(_QWORD *)(v31 + 16);
            v32 = *(_QWORD *)(v31 + 16);
            if ( !*(_BYTE *)(v32 + 25) )
              *(_QWORD *)(v32 + 8) = v19;
            *(_QWORD *)(v31 + 8) = v19[1];
            if ( v19 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v31;
            }
            else
            {
              v33 = (_QWORD *)v19[1];
              if ( v19 == (__int64 *)v33[2] )
                v33[2] = v31;
              else
                *v33 = v31;
            }
            *(_QWORD *)(v31 + 16) = v19;
            v19[1] = v31;
            v19 = (__int64 *)v9[2];
          }
          *((_BYTE *)v19 + 24) = *((_BYTE *)v9 + 24);
          *((_BYTE *)v9 + 24) = 1;
          *(_BYTE *)(v19[2] + 24) = 1;
          v26 = (_QWORD *)v9[2];
          v9[2] = *v26;
          if ( !*(_BYTE *)(*v26 + 25LL) )
            *(_QWORD *)(*v26 + 8LL) = v9;
          v26[1] = v9[1];
          if ( v9 == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v26;
          }
          else
          {
            v34 = (_QWORD *)v9[1];
            if ( v9 == (_QWORD *)*v34 )
              *v34 = v26;
            else
              v34[2] = v26;
          }
          *v26 = v9;
          goto LABEL_89;
        }
        goto LABEL_108;
      }
    }
    else
    {
      if ( !*((_BYTE *)v19 + 24) )
      {
        *((_BYTE *)v19 + 24) = 1;
        v20 = (__int64 *)*v9;
        *((_BYTE *)v9 + 24) = 0;
        *v9 = v20[2];
        v21 = v20[2];
        if ( !*(_BYTE *)(v21 + 25) )
          *(_QWORD *)(v21 + 8) = v9;
        v20[1] = v9[1];
        if ( v9 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v20;
        }
        else
        {
          v22 = (_QWORD *)v9[1];
          if ( v9 == (_QWORD *)v22[2] )
            v22[2] = v20;
          else
            *v22 = v20;
        }
        v20[2] = (__int64)v9;
        v9[1] = v20;
        v19 = (__int64 *)*v9;
      }
      if ( !*((_BYTE *)v19 + 25) )
      {
        v23 = v19[2];
        if ( *(_BYTE *)(v23 + 24) != 1 || *(_BYTE *)(*v19 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v19 + 24) == 1 )
          {
            *(_BYTE *)(v23 + 24) = 1;
            v24 = (__int64 *)v19[2];
            *((_BYTE *)v19 + 24) = 0;
            v19[2] = *v24;
            if ( !*(_BYTE *)(*v24 + 25) )
              *(_QWORD *)(*v24 + 8) = v19;
            v24[1] = v19[1];
            if ( v19 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v24;
            }
            else
            {
              v25 = (__int64 **)v19[1];
              if ( v19 == *v25 )
                *v25 = v24;
              else
                v25[2] = v24;
            }
            *v24 = (__int64)v19;
            v19[1] = (__int64)v24;
            v19 = (__int64 *)*v9;
          }
          *((_BYTE *)v19 + 24) = *((_BYTE *)v9 + 24);
          *((_BYTE *)v9 + 24) = 1;
          *(_BYTE *)(*v19 + 24) = 1;
          v26 = (_QWORD *)*v9;
          *v9 = *(_QWORD *)(*v9 + 16LL);
          v27 = v26[2];
          if ( !*(_BYTE *)(v27 + 25) )
            *(_QWORD *)(v27 + 8) = v9;
          v26[1] = v9[1];
          if ( v9 == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v26;
          }
          else
          {
            v28 = (_QWORD *)v9[1];
            if ( v9 == (_QWORD *)v28[2] )
              v28[2] = v26;
            else
              *v28 = v26;
          }
          v26[2] = v9;
LABEL_89:
          v9[1] = v26;
          break;
        }
LABEL_108:
        *((_BYTE *)v19 + 24) = 0;
      }
    }
    v9 = (_QWORD *)v9[1];
    v8 = v18;
  }
  *((_BYTE *)v8 + 24) = 1;
LABEL_26:
  v16 = a1[1];
  if ( v16 )
    a1[1] = v16 - 1;
  return v6;
}
