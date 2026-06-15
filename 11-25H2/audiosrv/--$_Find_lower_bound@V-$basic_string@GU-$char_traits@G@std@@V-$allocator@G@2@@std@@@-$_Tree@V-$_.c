/*
 * XREFs of ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180065FB4
 * Callers:
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180156CD8 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-_ea_180156CD8.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180159E84 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@.c)
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1800C1360 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Find_lower_bound<std::wstring>(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v4; // r10
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // rdi
  char *v9; // r8
  char *v10; // r9
  unsigned __int64 v11; // rax
  signed __int64 v12; // r9
  unsigned __int16 v13; // cx

  v4 = a2;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  *((_DWORD *)a2 + 2) = 0;
  *a2 = v5;
  *((_DWORD *)a2 + 3) = 0;
  a2[2] = *(_QWORD *)a1;
  while ( 1 )
  {
    v6 = *a2;
LABEL_3:
    if ( *(_BYTE *)(v6 + 25) )
      return v4;
    *v4 = v6;
    std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a3);
    v8 = *(_QWORD *)(v7 + 16);
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v7) )
      v10 = *(char **)v10;
    v11 = *(_QWORD *)(a3 + 16);
    if ( v11 >= v8 )
      v11 = v8;
    v12 = v10 - v9;
    while ( 1 )
    {
      if ( !v11 )
      {
        if ( v8 >= *(_QWORD *)(a3 + 16) )
          goto LABEL_16;
LABEL_13:
        *((_DWORD *)v4 + 2) = 0;
        v6 = a2[2];
        goto LABEL_3;
      }
      v13 = *(_WORD *)&v9[v12];
      if ( v13 != *(_WORD *)v9 )
        break;
      --v11;
      v9 += 2;
    }
    if ( (v13 < *(_WORD *)v9 ? -1 : 1) < 0 )
      goto LABEL_13;
LABEL_16:
    *((_DWORD *)v4 + 2) = 1;
    v4[2] = (__int64)a2;
  }
}
