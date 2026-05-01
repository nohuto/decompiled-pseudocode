/*
 * XREFs of ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_KV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x18018F6C0
 * Callers:
 *     ?GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@XZ @ 0x1800C30BC (-GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$unord.c)
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_KV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800C5AF0 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$_ea_1800C5AF0.c)
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_JV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1801B9448 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$_ea_1801B9448.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,unsigned __int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,unsigned __int64>>,0>>::_Find_last<std::wstring>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        __int64 a4)
{
  __int64 v5; // r10
  _QWORD *v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // r9
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  char *v11; // r8
  __int64 v12; // r10
  signed __int64 v13; // r8

  v5 = a1[3];
  v6 = (_QWORD *)a1[1];
  v7 = 2 * (a4 & a1[6]);
  v8 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]) + 8);
  if ( v8 == v6 )
  {
    *a2 = v6;
LABEL_15:
    a2[1] = 0LL;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 8 * v7);
    while ( 1 )
    {
      v10 = v8 + 2;
      if ( v8[5] > 7uLL )
        v10 = (_QWORD *)*v10;
      v11 = a3;
      if ( *((_QWORD *)a3 + 3) > 7uLL )
        v11 = *(char **)a3;
      if ( *((_QWORD *)a3 + 2) == v8[4] )
        break;
LABEL_16:
      if ( v8 == v9 )
      {
        *a2 = v8;
        goto LABEL_15;
      }
      v8 = (_QWORD *)v8[1];
    }
    v12 = *((_QWORD *)a3 + 2);
    v13 = v11 - (char *)v10;
    while ( v12 )
    {
      if ( *(_WORD *)((char *)v10 + v13) != *(_WORD *)v10 )
        goto LABEL_16;
      --v12;
      v10 = (_QWORD *)((char *)v10 + 2);
    }
    *a2 = *v8;
    a2[1] = v8;
  }
  return a2;
}
