/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E7600
 * Callers:
 *     ??1CVisualSurface@@UEAA@XZ @ 0x18018E0D4 (--1CVisualSurface@@UEAA@XZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x18028F488 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x1802ACCA8 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1802C5F48 (-_Erase@-$_Tree@V-$_Tmap_traits@U_LUID@@V-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Window.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x1800E7AF0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>>::_Extract(
        __int64 **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 **v4; // r10
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 i; // rax
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 *v10; // rcx
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 j; // rcx
  char v15; // dl
  __int64 *v16; // rcx
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 *v19; // rcx
  __int64 *v20; // rcx
  __int64 **v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rcx
  __int64 **v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 **v31; // rdx
  __int64 **v32; // rax
  __int64 v33; // rax
  __int64 **v34; // rax

  v3 = a2 + 16;
  v4 = a1;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = a2;
  if ( *(_BYTE *)(v5 + 25) )
  {
    for ( i = *(_QWORD *)(a2 + 8); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
    {
      if ( a2 != *(_QWORD *)(i + 16) )
        break;
      a2 = i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min(
          v5,
          a2,
          a3);
  }
  v8 = *(_QWORD *)v3;
  if ( !*(_BYTE *)(*(_QWORD *)v6 + 25LL) )
  {
    if ( *(_BYTE *)(v8 + 25) )
    {
      v8 = *(_QWORD *)v6;
    }
    else
    {
      v8 = *(_QWORD *)(i + 16);
      if ( i != v6 )
      {
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = i;
        *(_QWORD *)i = *(_QWORD *)v6;
        if ( i == *(_QWORD *)v3 )
        {
          v9 = i;
        }
        else
        {
          v9 = *(_QWORD *)(i + 8);
          if ( !*(_BYTE *)(v8 + 25) )
            *(_QWORD *)(v8 + 8) = v9;
          *(_QWORD *)v9 = v8;
          *(_QWORD *)(i + 16) = *(_QWORD *)v3;
          *(_QWORD *)(*(_QWORD *)v3 + 8LL) = i;
        }
        if ( (*v4)[1] == v6 )
        {
          (*v4)[1] = i;
        }
        else
        {
          v10 = *(__int64 **)(v6 + 8);
          if ( *v10 == v6 )
            *v10 = i;
          else
            v10[2] = i;
        }
        *(_QWORD *)(i + 8) = *(_QWORD *)(v6 + 8);
        v15 = *(_BYTE *)(i + 24);
        *(_BYTE *)(i + 24) = *(_BYTE *)(v6 + 24);
        *(_BYTE *)(v6 + 24) = v15;
        goto LABEL_27;
      }
    }
  }
  v9 = *(_QWORD *)(v6 + 8);
  if ( !*(_BYTE *)(v8 + 25) )
    *(_QWORD *)(v8 + 8) = v9;
  if ( (*v4)[1] == v6 )
  {
    (*v4)[1] = v8;
  }
  else if ( *(_QWORD *)v9 == v6 )
  {
    *(_QWORD *)v9 = v8;
  }
  else
  {
    *(_QWORD *)(v9 + 16) = v8;
  }
  v11 = *v4;
  if ( **v4 == v6 )
  {
    if ( *(_BYTE *)(v8 + 25) )
      v12 = v9;
    else
      v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min(
              v8,
              a2,
              v9);
    *v11 = v12;
  }
  if ( (*v4)[2] == v6 )
  {
    if ( *(_BYTE *)(v8 + 25) )
    {
      j = v9;
    }
    else
    {
      v13 = *(_QWORD *)(v8 + 16);
      for ( j = v8; !*(_BYTE *)(v13 + 25); v13 = *(_QWORD *)(v13 + 16) )
        j = v13;
    }
    (*v4)[2] = j;
  }
LABEL_27:
  if ( *(_BYTE *)(v6 + 24) != 1 )
    goto LABEL_28;
  while ( 1 )
  {
    v18 = v9;
    if ( v8 == (*v4)[1] || *(_BYTE *)(v8 + 24) != 1 )
      goto LABEL_57;
    v19 = *(__int64 **)v9;
    if ( v8 == *(_QWORD *)v9 )
      break;
    if ( !*((_BYTE *)v19 + 24) )
    {
      *((_BYTE *)v19 + 24) = 1;
      v27 = *(_QWORD *)v9;
      *(_BYTE *)(v9 + 24) = 0;
      *(_QWORD *)v9 = *(_QWORD *)(v27 + 16);
      v28 = *(_QWORD *)(v27 + 16);
      if ( !*(_BYTE *)(v28 + 25) )
        *(_QWORD *)(v28 + 8) = v9;
      *(_QWORD *)(v27 + 8) = *(_QWORD *)(v9 + 8);
      if ( v9 == (*v4)[1] )
      {
        (*v4)[1] = v27;
      }
      else
      {
        v29 = *(__int64 **)(v9 + 8);
        if ( v9 == v29[2] )
          v29[2] = v27;
        else
          *v29 = v27;
      }
      *(_QWORD *)(v27 + 16) = v9;
      *(_QWORD *)(v9 + 8) = v27;
      v19 = *(__int64 **)v9;
    }
    if ( !*((_BYTE *)v19 + 25) )
    {
      v30 = v19[2];
      if ( *(_BYTE *)(v30 + 24) != 1 || *(_BYTE *)(*v19 + 24) != 1 )
      {
        if ( *(_BYTE *)(*v19 + 24) == 1 )
        {
          *(_BYTE *)(v30 + 24) = 1;
          v31 = (__int64 **)v19[2];
          *((_BYTE *)v19 + 24) = 0;
          v19[2] = (__int64)*v31;
          if ( !*((_BYTE *)*v31 + 25) )
            (*v31)[1] = (__int64)v19;
          v31[1] = (__int64 *)v19[1];
          if ( v19 == (__int64 *)(*v4)[1] )
          {
            (*v4)[1] = (__int64)v31;
          }
          else
          {
            v32 = (__int64 **)v19[1];
            if ( v19 == *v32 )
              *v32 = (__int64 *)v31;
            else
              v32[2] = (__int64 *)v31;
          }
          *v31 = v19;
          v19[1] = (__int64)v31;
          v19 = *(__int64 **)v9;
        }
        *((_BYTE *)v19 + 24) = *(_BYTE *)(v9 + 24);
        *(_BYTE *)(v9 + 24) = 1;
        *(_BYTE *)(*v19 + 24) = 1;
        v25 = *(__int64 **)v9;
        *(_QWORD *)v9 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
        v33 = v25[2];
        if ( !*(_BYTE *)(v33 + 25) )
          *(_QWORD *)(v33 + 8) = v9;
        v25[1] = *(_QWORD *)(v9 + 8);
        if ( v9 == (*v4)[1] )
        {
          (*v4)[1] = (__int64)v25;
          v25[2] = v9;
        }
        else
        {
          v34 = *(__int64 ***)(v9 + 8);
          if ( (__int64 *)v9 == v34[2] )
            v34[2] = v25;
          else
            *v34 = v25;
          v25[2] = v9;
        }
        goto LABEL_56;
      }
      goto LABEL_84;
    }
LABEL_85:
    v9 = *(_QWORD *)(v9 + 8);
    v8 = v18;
  }
  v19 = *(__int64 **)(v9 + 16);
  if ( !*((_BYTE *)v19 + 24) )
  {
    *((_BYTE *)v19 + 24) = 1;
    v20 = *(__int64 **)(v9 + 16);
    *(_BYTE *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 16) = *v20;
    if ( !*(_BYTE *)(*v20 + 25) )
      *(_QWORD *)(*v20 + 8) = v9;
    v20[1] = *(_QWORD *)(v9 + 8);
    if ( v9 == (*v4)[1] )
    {
      (*v4)[1] = (__int64)v20;
    }
    else
    {
      v21 = *(__int64 ***)(v9 + 8);
      if ( (__int64 *)v9 == *v21 )
        *v21 = v20;
      else
        v21[2] = v20;
    }
    *v20 = v9;
    *(_QWORD *)(v9 + 8) = v20;
    v19 = *(__int64 **)(v9 + 16);
  }
  if ( *((_BYTE *)v19 + 25) )
    goto LABEL_85;
  if ( *(_BYTE *)(*v19 + 24) == 1 && *(_BYTE *)(v19[2] + 24) == 1 )
  {
LABEL_84:
    *((_BYTE *)v19 + 24) = 0;
    goto LABEL_85;
  }
  if ( *(_BYTE *)(v19[2] + 24) == 1 )
  {
    *(_BYTE *)(*v19 + 24) = 1;
    v22 = *v19;
    *((_BYTE *)v19 + 24) = 0;
    *v19 = *(_QWORD *)(v22 + 16);
    v23 = *(_QWORD *)(v22 + 16);
    if ( !*(_BYTE *)(v23 + 25) )
      *(_QWORD *)(v23 + 8) = v19;
    *(_QWORD *)(v22 + 8) = v19[1];
    if ( v19 == (__int64 *)(*v4)[1] )
    {
      (*v4)[1] = v22;
    }
    else
    {
      v24 = (__int64 *)v19[1];
      if ( v19 == (__int64 *)v24[2] )
        v24[2] = v22;
      else
        *v24 = v22;
    }
    *(_QWORD *)(v22 + 16) = v19;
    v19[1] = v22;
    v19 = *(__int64 **)(v9 + 16);
  }
  *((_BYTE *)v19 + 24) = *(_BYTE *)(v9 + 24);
  *(_BYTE *)(v9 + 24) = 1;
  *(_BYTE *)(v19[2] + 24) = 1;
  v25 = *(__int64 **)(v9 + 16);
  *(_QWORD *)(v9 + 16) = *v25;
  if ( !*(_BYTE *)(*v25 + 25) )
    *(_QWORD *)(*v25 + 8) = v9;
  v25[1] = *(_QWORD *)(v9 + 8);
  if ( v9 != (*v4)[1] )
  {
    v26 = *(__int64 ***)(v9 + 8);
    if ( (__int64 *)v9 == *v26 )
      *v26 = v25;
    else
      v26[2] = v25;
    *v25 = v9;
LABEL_56:
    *(_QWORD *)(v9 + 8) = v25;
LABEL_57:
    *(_BYTE *)(v8 + 24) = 1;
    goto LABEL_28;
  }
  (*v4)[1] = (__int64)v25;
  *v25 = v9;
  *(_QWORD *)(v9 + 8) = v25;
  *(_BYTE *)(v8 + 24) = 1;
LABEL_28:
  v16 = v4[1];
  result = v6;
  if ( v16 )
    v4[1] = (__int64 *)((char *)v16 - 1);
  return result;
}
