/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180031A30
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18002ED5C (--1_Clear_guard@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 * Callees:
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18001258C (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Uhash_compare@V-$basic_st.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180031278 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r13
  bool v17; // bl
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r12
  bool v25; // bl
  _QWORD *v26; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+88h] [rbp+10h]

  if ( a2 != a3 )
  {
    v6 = *(_QWORD **)(a2 + 8);
    v7 = (_QWORD *)a1[1];
    v8 = a1[3];
    v26 = a1 + 1;
    v27 = v6;
    v28 = a2;
    v9 = std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring>(
           (__int64)a1,
           a2 + 16,
           a3);
    v14 = 2 * (a1[6] & v9);
    v15 = *(_QWORD *)(v8 + 16 * (a1[6] & v9) + 8);
    v16 = *(_QWORD *)(v8 + 8 * v14);
    v30 = *(_QWORD *)(v8 + 8 * v14 + 8);
    while ( 1 )
    {
      v17 = v13 == v15;
      std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Range_eraser::_Bump_erased(
        &v26,
        v10,
        v11,
        v12);
      if ( v17 )
        break;
      v13 = v28;
      v15 = v30;
      if ( v28 == a3 )
      {
        if ( v16 == a2 )
LABEL_6:
          *(_QWORD *)(v8 + 8 * v14) = v13;
        goto LABEL_7;
      }
    }
    if ( v16 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v14) = v7;
      v6 = v7;
    }
    for ( *(_QWORD *)(v8 + 8 * v14 + 8) = v6; ; *(_QWORD *)(v8 + 8 * v14 + 8) = v7 )
    {
      v13 = v28;
      if ( v28 == a3 )
        break;
      v21 = std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring>(
              v18,
              v28 + 16,
              v11);
      v14 = 2 * (a1[6] & v21);
      v24 = *(_QWORD *)(v8 + 16 * (a1[6] & v21) + 8);
      while ( 1 )
      {
        v25 = v13 == v24;
        std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Range_eraser::_Bump_erased(
          &v26,
          v22,
          v11,
          v23);
        if ( v25 )
          break;
        v13 = v28;
        if ( v28 == a3 )
          goto LABEL_6;
      }
      *(_QWORD *)(v8 + 8 * v14) = v7;
    }
LABEL_7:
    v19 = v27;
    *v27 = v13;
    *(_QWORD *)(v13 + 8) = v19;
  }
  return a3;
}
