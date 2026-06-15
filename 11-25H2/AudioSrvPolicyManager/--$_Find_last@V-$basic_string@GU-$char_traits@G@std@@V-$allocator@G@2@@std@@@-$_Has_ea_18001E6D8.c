/*
 * XREFs of ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x18001E6D8
 * Callers:
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002E5A0 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$_Hash@V-$_Um.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x18000DBB0 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Find_last<std::wstring>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // r11
  _QWORD *v6; // r10
  __int64 v7; // rax
  _QWORD *v8; // r9
  _QWORD *v9; // rbx
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rax

  v4 = a3;
  v5 = a1[3];
  v6 = (_QWORD *)a1[1];
  v7 = 2 * (a4 & a1[6]);
  v8 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]) + 8);
  if ( v8 == v6 )
  {
    *a2 = v6;
LABEL_13:
    a2[1] = 0LL;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 8 * v7);
    v10 = *(_QWORD *)(a3 + 16);
    while ( v10 != v8[4] )
    {
LABEL_9:
      if ( v8 == v9 )
      {
        *a2 = v8;
        goto LABEL_13;
      }
      v8 = (_QWORD *)v8[1];
    }
    v11 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)(v8 + 2), (__int64)a2, a3, (__int64)v8);
    v14 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(v4, v12, v11, v13);
    v16 = v14 - a3;
    while ( v15 )
    {
      if ( *(_WORD *)(v16 + a3) != *(_WORD *)a3 )
        goto LABEL_9;
      --v15;
      a3 += 2LL;
    }
    *a2 = *v8;
    a2[1] = v8;
  }
  return a2;
}
