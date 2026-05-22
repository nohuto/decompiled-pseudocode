/*
 * XREFs of ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800C1788
 * Callers:
 *     ??$_Find_hint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18006775C (--$_Find_hint@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_tr.c)
 * Callees:
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@PEAU32@@Z @ 0x18009BC78 (-_Max@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 *__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>,std::_Iterator_base0>::operator--(
        __int64 *a1)
{
  __int64 v1; // rax
  __int64 *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax

  v1 = *a1;
  v2 = a1;
  if ( *(_BYTE *)(*a1 + 25) )
  {
    *a1 = *(_QWORD *)(v1 + 16);
  }
  else if ( *(_BYTE *)(*(_QWORD *)v1 + 25LL) )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v3 + 25) )
    {
      v4 = v1;
      v5 = v1;
      do
      {
        v1 = v5;
        if ( v4 != *(_QWORD *)v3 )
          break;
        v4 = v3;
        *v2 = v3;
        v3 = *(_QWORD *)(v3 + 8);
        v5 = v4;
        v1 = v4;
      }
      while ( !*(_BYTE *)(v3 + 25) );
    }
    if ( !*(_BYTE *)(v1 + 25) )
      *v2 = v3;
  }
  else
  {
    v6 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Max(*(_QWORD *)v1);
    *v2 = v6;
  }
  return v2;
}
