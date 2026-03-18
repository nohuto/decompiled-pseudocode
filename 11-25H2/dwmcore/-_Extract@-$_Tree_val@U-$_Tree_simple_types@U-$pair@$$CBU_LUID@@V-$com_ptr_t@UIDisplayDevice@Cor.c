/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801B72D0
 * Callers:
 *     ??1CVisualSurface@@UEAA@XZ @ 0x180184FD4 (--1CVisualSurface@@UEAA@XZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x18029BBE8 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x1802B6898 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1802CF2B8 (-_Erase@-$_Tree@V-$_Tmap_traits@U_LUID@@V-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Window.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x180031950 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>>::_Extract(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // r10
  __int64 v4; // rcx
  _QWORD *v5; // r9
  _QWORD *i; // rax
  _QWORD *v7; // r11
  _QWORD *v8; // r8
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *j; // rcx
  char v14; // dl
  __int64 v15; // rcx
  _QWORD *result; // rax
  _QWORD *v17; // rdi
  __int64 *v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rdx
  __int64 **v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax

  v2 = a2 + 2;
  v3 = a1;
  v4 = a2[2];
  v5 = a2;
  if ( *(_BYTE *)(v4 + 25) )
  {
    for ( i = (_QWORD *)a2[1]; !*((_BYTE *)i + 25); i = (_QWORD *)i[1] )
    {
      if ( a2 != (_QWORD *)i[2] )
        break;
      a2 = i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min((_QWORD *)v4);
  }
  v7 = (_QWORD *)*v2;
  if ( !*(_BYTE *)(*v5 + 25LL) )
  {
    if ( *((_BYTE *)v7 + 25) )
    {
      v7 = (_QWORD *)*v5;
    }
    else
    {
      v7 = (_QWORD *)i[2];
      if ( i != v5 )
      {
        *(_QWORD *)(*v5 + 8LL) = i;
        *i = *v5;
        if ( i == (_QWORD *)*v2 )
        {
          v8 = i;
        }
        else
        {
          v8 = (_QWORD *)i[1];
          if ( !*((_BYTE *)v7 + 25) )
            v7[1] = v8;
          *v8 = v7;
          i[2] = *v2;
          *(_QWORD *)(*v2 + 8LL) = i;
        }
        if ( *(_QWORD **)(*v3 + 8LL) == v5 )
        {
          *(_QWORD *)(*v3 + 8LL) = i;
        }
        else
        {
          v9 = (_QWORD *)v5[1];
          if ( (_QWORD *)*v9 == v5 )
            *v9 = i;
          else
            v9[2] = i;
        }
        i[1] = v5[1];
        v14 = *((_BYTE *)i + 24);
        *((_BYTE *)i + 24) = *((_BYTE *)v5 + 24);
        *((_BYTE *)v5 + 24) = v14;
        goto LABEL_27;
      }
    }
  }
  v8 = (_QWORD *)v5[1];
  if ( !*((_BYTE *)v7 + 25) )
    v7[1] = v8;
  if ( *(_QWORD **)(*v3 + 8LL) == v5 )
  {
    *(_QWORD *)(*v3 + 8LL) = v7;
  }
  else if ( (_QWORD *)*v8 == v5 )
  {
    *v8 = v7;
  }
  else
  {
    v8[2] = v7;
  }
  v10 = (_QWORD *)*v3;
  if ( *(_QWORD **)*v3 == v5 )
  {
    if ( *((_BYTE *)v7 + 25) )
      v11 = v8;
    else
      v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min(v7);
    *v10 = v11;
  }
  if ( *(_QWORD **)(*v3 + 16LL) == v5 )
  {
    if ( *((_BYTE *)v7 + 25) )
    {
      j = v8;
    }
    else
    {
      v12 = v7[2];
      for ( j = v7; !*(_BYTE *)(v12 + 25); v12 = *(_QWORD *)(v12 + 16) )
        j = (_QWORD *)v12;
    }
    *(_QWORD *)(*v3 + 16LL) = j;
  }
LABEL_27:
  if ( *((_BYTE *)v5 + 24) != 1 )
    goto LABEL_28;
  while ( 1 )
  {
    v17 = v8;
    if ( v7 == *(_QWORD **)(*v3 + 8LL) || *((_BYTE *)v7 + 24) != 1 )
      goto LABEL_57;
    v18 = (__int64 *)*v8;
    if ( v7 == (_QWORD *)*v8 )
      break;
    if ( !*((_BYTE *)v18 + 24) )
    {
      *((_BYTE *)v18 + 24) = 1;
      v26 = (__int64 *)*v8;
      *((_BYTE *)v8 + 24) = 0;
      *v8 = v26[2];
      v27 = v26[2];
      if ( !*(_BYTE *)(v27 + 25) )
        *(_QWORD *)(v27 + 8) = v8;
      v26[1] = v8[1];
      if ( v8 == *(_QWORD **)(*v3 + 8LL) )
      {
        *(_QWORD *)(*v3 + 8LL) = v26;
      }
      else
      {
        v28 = (_QWORD *)v8[1];
        if ( v8 == (_QWORD *)v28[2] )
          v28[2] = v26;
        else
          *v28 = v26;
      }
      v26[2] = (__int64)v8;
      v8[1] = v26;
      v18 = (__int64 *)*v8;
    }
    if ( !*((_BYTE *)v18 + 25) )
    {
      v29 = v18[2];
      if ( *(_BYTE *)(v29 + 24) != 1 || *(_BYTE *)(*v18 + 24) != 1 )
      {
        if ( *(_BYTE *)(*v18 + 24) == 1 )
        {
          *(_BYTE *)(v29 + 24) = 1;
          v30 = (__int64 *)v18[2];
          *((_BYTE *)v18 + 24) = 0;
          v18[2] = *v30;
          if ( !*(_BYTE *)(*v30 + 25) )
            *(_QWORD *)(*v30 + 8) = v18;
          v30[1] = v18[1];
          if ( v18 == *(__int64 **)(*v3 + 8LL) )
          {
            *(_QWORD *)(*v3 + 8LL) = v30;
          }
          else
          {
            v31 = (__int64 **)v18[1];
            if ( v18 == *v31 )
              *v31 = v30;
            else
              v31[2] = v30;
          }
          *v30 = (__int64)v18;
          v18[1] = (__int64)v30;
          v18 = (__int64 *)*v8;
        }
        *((_BYTE *)v18 + 24) = *((_BYTE *)v8 + 24);
        *((_BYTE *)v8 + 24) = 1;
        *(_BYTE *)(*v18 + 24) = 1;
        v24 = (_QWORD *)*v8;
        *v8 = *(_QWORD *)(*v8 + 16LL);
        v32 = v24[2];
        if ( !*(_BYTE *)(v32 + 25) )
          *(_QWORD *)(v32 + 8) = v8;
        v24[1] = v8[1];
        if ( v8 == *(_QWORD **)(*v3 + 8LL) )
        {
          *(_QWORD *)(*v3 + 8LL) = v24;
          v24[2] = v8;
        }
        else
        {
          v33 = (_QWORD *)v8[1];
          if ( v8 == (_QWORD *)v33[2] )
            v33[2] = v24;
          else
            *v33 = v24;
          v24[2] = v8;
        }
        goto LABEL_56;
      }
      goto LABEL_84;
    }
LABEL_85:
    v8 = (_QWORD *)v8[1];
    v7 = v17;
  }
  v18 = (__int64 *)v8[2];
  if ( !*((_BYTE *)v18 + 24) )
  {
    *((_BYTE *)v18 + 24) = 1;
    v19 = (_QWORD *)v8[2];
    *((_BYTE *)v8 + 24) = 0;
    v8[2] = *v19;
    if ( !*(_BYTE *)(*v19 + 25LL) )
      *(_QWORD *)(*v19 + 8LL) = v8;
    v19[1] = v8[1];
    if ( v8 == *(_QWORD **)(*v3 + 8LL) )
    {
      *(_QWORD *)(*v3 + 8LL) = v19;
    }
    else
    {
      v20 = (_QWORD *)v8[1];
      if ( v8 == (_QWORD *)*v20 )
        *v20 = v19;
      else
        v20[2] = v19;
    }
    *v19 = v8;
    v8[1] = v19;
    v18 = (__int64 *)v8[2];
  }
  if ( *((_BYTE *)v18 + 25) )
    goto LABEL_85;
  if ( *(_BYTE *)(*v18 + 24) == 1 && *(_BYTE *)(v18[2] + 24) == 1 )
  {
LABEL_84:
    *((_BYTE *)v18 + 24) = 0;
    goto LABEL_85;
  }
  if ( *(_BYTE *)(v18[2] + 24) == 1 )
  {
    *(_BYTE *)(*v18 + 24) = 1;
    v21 = *v18;
    *((_BYTE *)v18 + 24) = 0;
    *v18 = *(_QWORD *)(v21 + 16);
    v22 = *(_QWORD *)(v21 + 16);
    if ( !*(_BYTE *)(v22 + 25) )
      *(_QWORD *)(v22 + 8) = v18;
    *(_QWORD *)(v21 + 8) = v18[1];
    if ( v18 == *(__int64 **)(*v3 + 8LL) )
    {
      *(_QWORD *)(*v3 + 8LL) = v21;
    }
    else
    {
      v23 = (_QWORD *)v18[1];
      if ( v18 == (__int64 *)v23[2] )
        v23[2] = v21;
      else
        *v23 = v21;
    }
    *(_QWORD *)(v21 + 16) = v18;
    v18[1] = v21;
    v18 = (__int64 *)v8[2];
  }
  *((_BYTE *)v18 + 24) = *((_BYTE *)v8 + 24);
  *((_BYTE *)v8 + 24) = 1;
  *(_BYTE *)(v18[2] + 24) = 1;
  v24 = (_QWORD *)v8[2];
  v8[2] = *v24;
  if ( !*(_BYTE *)(*v24 + 25LL) )
    *(_QWORD *)(*v24 + 8LL) = v8;
  v24[1] = v8[1];
  if ( v8 != *(_QWORD **)(*v3 + 8LL) )
  {
    v25 = (_QWORD *)v8[1];
    if ( v8 == (_QWORD *)*v25 )
      *v25 = v24;
    else
      v25[2] = v24;
    *v24 = v8;
LABEL_56:
    v8[1] = v24;
LABEL_57:
    *((_BYTE *)v7 + 24) = 1;
    goto LABEL_28;
  }
  *(_QWORD *)(*v3 + 8LL) = v24;
  *v24 = v8;
  v8[1] = v24;
  *((_BYTE *)v7 + 24) = 1;
LABEL_28:
  v15 = v3[1];
  result = v5;
  if ( v15 )
    v3[1] = v15 - 1;
  return result;
}
