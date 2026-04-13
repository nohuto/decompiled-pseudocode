/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@std@@@std@@@2@@Z @ 0x18005D0A8
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@std@@@std@@@2@0@Z @ 0x18005CFE0 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180004800 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ??1?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@QEAA@XZ @ 0x18004C42C (--1-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$shared_ptr@VIS.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@Z @ 0x18005B378 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x18005B3C8 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@Z @ 0x18005B630 (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>,0>>::erase(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  __int64 *v5; // r14
  _BYTE *v6; // rdi
  __int64 v7; // rcx
  __int64 *v8; // r11
  _QWORD *i; // rbx
  __int64 v10; // r10
  __int64 v11; // r9
  _QWORD *v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char v17; // cl
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *result; // rax

  v3 = (_QWORD *)a2;
  if ( *((_BYTE *)a3 + 25) )
    std::_Xout_of_range("invalid map/set<T> iterator");
  v5 = a3 + 2;
  v6 = a3;
  v7 = a3[2];
  v8 = a3 + 1;
  if ( *(_BYTE *)(v7 + 25) )
  {
    for ( i = (_QWORD *)*v8; !*((_BYTE *)i + 25) && a3 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      a3 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v7);
  }
  v10 = *v5;
  if ( *(_BYTE *)(*(_QWORD *)v6 + 25LL) )
    goto LABEL_13;
  if ( *(_BYTE *)(v10 + 25) )
  {
    v10 = *(_QWORD *)v6;
LABEL_13:
    v11 = *v8;
    if ( !*(_BYTE *)(v10 + 25) )
      *(_QWORD *)(v10 + 8) = v11;
    if ( *(_BYTE **)(*a1 + 8) == v6 )
    {
      *(_QWORD *)(*a1 + 8) = v10;
    }
    else if ( *(_BYTE **)v11 == v6 )
    {
      *(_QWORD *)v11 = v10;
    }
    else
    {
      *(_QWORD *)(v11 + 16) = v10;
    }
    v12 = (_QWORD *)*a1;
    if ( *(_BYTE **)*a1 == v6 )
    {
      if ( *(_BYTE *)(v10 + 25) )
        v13 = (_QWORD *)v11;
      else
        v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v10);
      *v12 = v13;
    }
    a2 = *a1;
    if ( *(_BYTE **)(*a1 + 16) == v6 )
    {
      if ( *(_BYTE *)(v10 + 25) )
      {
        v14 = v11;
      }
      else
      {
        v15 = *(_QWORD *)(v10 + 16);
        v14 = v10;
        while ( !*(_BYTE *)(v15 + 25) )
        {
          v14 = v15;
          v15 = *(_QWORD *)(v15 + 16);
        }
      }
      *(_QWORD *)(a2 + 16) = v14;
    }
    goto LABEL_43;
  }
  v10 = i[2];
  if ( i == (_QWORD *)v6 )
    goto LABEL_13;
  *(_QWORD *)(*(_QWORD *)v6 + 8LL) = i;
  *i = *(_QWORD *)v6;
  if ( i == (_QWORD *)*v5 )
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
  if ( *(_BYTE **)(*a1 + 8) == v6 )
  {
    *(_QWORD *)(*a1 + 8) = i;
  }
  else
  {
    v16 = (_QWORD *)*v8;
    if ( *(_BYTE **)*v8 == v6 )
      *v16 = i;
    else
      v16[2] = i;
  }
  i[1] = *v8;
  v17 = *((_BYTE *)i + 24);
  *((_BYTE *)i + 24) = v6[24];
  v6[24] = v17;
LABEL_43:
  if ( v6[24] != 1 )
    goto LABEL_66;
  while ( 1 )
  {
    v18 = v11;
    if ( v10 == *(_QWORD *)(*a1 + 8) || *(_BYTE *)(v10 + 24) != 1 )
      break;
    a2 = *(_QWORD *)v11;
    if ( v10 == *(_QWORD *)v11 )
    {
      a2 = *(_QWORD *)(v11 + 16);
      if ( !*(_BYTE *)(a2 + 24) )
      {
        *(_BYTE *)(a2 + 24) = 1;
        *(_BYTE *)(v11 + 24) = 0;
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Lrotate(
          (__int64)a1,
          v11);
        a2 = *(_QWORD *)(v11 + 16);
      }
      if ( !*(_BYTE *)(a2 + 25) )
      {
        if ( *(_BYTE *)(*(_QWORD *)a2 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(a2 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)a2 + 24LL) = 1;
            *(_BYTE *)(a2 + 24) = 0;
            std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)a2);
            a2 = *(_QWORD *)(v11 + 16);
          }
          *(_BYTE *)(a2 + 24) = *(_BYTE *)(v11 + 24);
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(a2 + 16) + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Lrotate(
            (__int64)a1,
            v11);
          break;
        }
LABEL_60:
        *(_BYTE *)(a2 + 24) = 0;
      }
    }
    else
    {
      if ( !*(_BYTE *)(a2 + 24) )
      {
        *(_BYTE *)(a2 + 24) = 1;
        *(_BYTE *)(v11 + 24) = 0;
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v11);
        a2 = *(_QWORD *)v11;
      }
      if ( !*(_BYTE *)(a2 + 25) )
      {
        v19 = *(_QWORD *)(a2 + 16);
        if ( *(_BYTE *)(v19 + 24) != 1 || *(_BYTE *)(*(_QWORD *)a2 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)a2 + 24LL) == 1 )
          {
            *(_BYTE *)(v19 + 24) = 1;
            *(_BYTE *)(a2 + 24) = 0;
            std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Lrotate(
              (__int64)a1,
              a2);
            a2 = *(_QWORD *)v11;
          }
          *(_BYTE *)(a2 + 24) = *(_BYTE *)(v11 + 24);
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)a2 + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v11);
          break;
        }
        goto LABEL_60;
      }
    }
    v11 = *(_QWORD *)(v11 + 8);
    v10 = v18;
  }
  *(_BYTE *)(v10 + 24) = 1;
LABEL_66:
  std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>::~pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>(
    (__int64)(v6 + 32),
    a2);
  operator delete(v6);
  v20 = a1[1];
  if ( v20 )
    a1[1] = v20 - 1;
  result = v3;
  *v3 = i;
  return result;
}
