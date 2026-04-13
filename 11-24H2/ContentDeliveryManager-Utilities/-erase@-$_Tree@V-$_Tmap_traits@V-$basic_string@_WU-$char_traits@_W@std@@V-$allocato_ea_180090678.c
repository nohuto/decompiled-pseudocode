/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@@Z @ 0x180090678
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@0@Z @ 0x1800905CC (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocato_ea_1800905CC.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180004810 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@Z @ 0x18005B818 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x18005B868 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@Z @ 0x18005BAD0 (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x1800604C4 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x180064554 (-_Max@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::erase(
        _QWORD *a1,
        __int64 **a2,
        __int64 *a3)
{
  __int64 *v5; // r14
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 *v8; // r11
  __int64 *i; // rbx
  __int64 v10; // r10
  __int64 v11; // r9
  _QWORD *v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  char v17; // cl
  __int64 v18; // r11
  _BYTE *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 **result; // rax

  if ( *((_BYTE *)a3 + 25) )
    std::_Xout_of_range("invalid map/set<T> iterator");
  v5 = a3 + 2;
  v6 = a3;
  v7 = a3[2];
  v8 = a3 + 1;
  if ( *(_BYTE *)(v7 + 25) )
  {
    for ( i = (__int64 *)*v8; !*((_BYTE *)i + 25) && a3 == (__int64 *)i[2]; i = (__int64 *)i[1] )
      a3 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v7);
  }
  v10 = *v5;
  if ( *(_BYTE *)(*v6 + 25) )
    goto LABEL_13;
  if ( *(_BYTE *)(v10 + 25) )
  {
    v10 = *v6;
LABEL_13:
    v11 = *v8;
    if ( !*(_BYTE *)(v10 + 25) )
      *(_QWORD *)(v10 + 8) = v11;
    if ( *(__int64 **)(*a1 + 8LL) == v6 )
    {
      *(_QWORD *)(*a1 + 8LL) = v10;
    }
    else if ( *(__int64 **)v11 == v6 )
    {
      *(_QWORD *)v11 = v10;
    }
    else
    {
      *(_QWORD *)(v11 + 16) = v10;
    }
    v12 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v6 )
    {
      if ( *(_BYTE *)(v10 + 25) )
        v13 = (_QWORD *)v11;
      else
        v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v10);
      *v12 = v13;
    }
    v14 = *a1;
    if ( *(__int64 **)(*a1 + 16LL) == v6 )
    {
      if ( *(_BYTE *)(v10 + 25) )
        v15 = v11;
      else
        v15 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Max(v10);
      *(_QWORD *)(v14 + 16) = v15;
    }
    goto LABEL_41;
  }
  v10 = i[2];
  if ( i == v6 )
    goto LABEL_13;
  *(_QWORD *)(*v6 + 8) = i;
  *i = *v6;
  if ( i == (__int64 *)*v5 )
  {
    v11 = (__int64)i;
  }
  else
  {
    v11 = i[1];
    if ( !*(_BYTE *)(v10 + 25) )
      *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)v11 = v10;
    i[2] = *v5;
    *(_QWORD *)(*v5 + 8) = i;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = i;
  }
  else
  {
    v16 = (_QWORD *)*v8;
    if ( *(__int64 **)*v8 == v6 )
      *v16 = i;
    else
      v16[2] = i;
  }
  i[1] = *v8;
  v17 = *((_BYTE *)i + 24);
  *((_BYTE *)i + 24) = *((_BYTE *)v6 + 24);
  *((_BYTE *)v6 + 24) = v17;
LABEL_41:
  if ( *((_BYTE *)v6 + 24) != 1 )
    goto LABEL_64;
  while ( 1 )
  {
    v18 = v11;
    if ( v10 == *(_QWORD *)(*a1 + 8LL) || *(_BYTE *)(v10 + 24) != 1 )
      break;
    v19 = *(_BYTE **)v11;
    if ( v10 == *(_QWORD *)v11 )
    {
      v19 = *(_BYTE **)(v11 + 16);
      if ( !v19[24] )
      {
        v19[24] = 1;
        *(_BYTE *)(v11 + 24) = 0;
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Lrotate(
          (__int64)a1,
          v11);
        v19 = *(_BYTE **)(v11 + 16);
      }
      if ( !v19[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
            v19[24] = 0;
            std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Rrotate(
              (__int64)a1,
              v19);
            v19 = *(_BYTE **)(v11 + 16);
          }
          v19[24] = *(_BYTE *)(v11 + 24);
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Lrotate(
            (__int64)a1,
            v11);
          break;
        }
LABEL_58:
        v19[24] = 0;
      }
    }
    else
    {
      if ( !v19[24] )
      {
        v19[24] = 1;
        *(_BYTE *)(v11 + 24) = 0;
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v11);
        v19 = *(_BYTE **)v11;
      }
      if ( !v19[25] )
      {
        v20 = *((_QWORD *)v19 + 2);
        if ( *(_BYTE *)(v20 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) == 1 )
          {
            *(_BYTE *)(v20 + 24) = 1;
            v19[24] = 0;
            std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Lrotate(
              (__int64)a1,
              (__int64)v19);
            v19 = *(_BYTE **)v11;
          }
          v19[24] = *(_BYTE *)(v11 + 24);
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v11);
          break;
        }
        goto LABEL_58;
      }
    }
    v11 = *(_QWORD *)(v11 + 8);
    v10 = v18;
  }
  *(_BYTE *)(v10 + 24) = 1;
LABEL_64:
  std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>(v6 + 4);
  operator delete(v6);
  v21 = a1[1];
  if ( v21 )
    a1[1] = v21 - 1;
  result = a2;
  *a2 = i;
  return result;
}
