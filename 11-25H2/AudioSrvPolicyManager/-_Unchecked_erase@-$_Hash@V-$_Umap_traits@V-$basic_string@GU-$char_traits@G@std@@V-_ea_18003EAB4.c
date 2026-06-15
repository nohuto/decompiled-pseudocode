/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18003EAB4
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18003E7DC (--1_Clear_guard@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a_ea_18003E7DC.c)
 * Callees:
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18001258C (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Uhash_compare@V-$basic_st.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18003E8BC (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits_ea_18003E8BC.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r13
  bool v14; // bl
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  bool v21; // bl
  _QWORD *v22; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+88h] [rbp+10h]

  if ( a2 != a3 )
  {
    v6 = *(_QWORD **)(a2 + 8);
    v7 = (_QWORD *)a1[1];
    v8 = a1[3];
    v22 = a1 + 1;
    v23 = v6;
    v24 = a2;
    v9 = std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring>(
           (__int64)a1,
           a2 + 16,
           a3);
    v11 = 2 * (a1[6] & v9);
    v12 = *(_QWORD *)(v8 + 16 * (a1[6] & v9) + 8);
    v13 = *(_QWORD *)(v8 + 8 * v11);
    v26 = *(_QWORD *)(v8 + 8 * v11 + 8);
    while ( 1 )
    {
      v14 = v10 == v12;
      std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::_Range_eraser::_Bump_erased(&v22);
      if ( v14 )
        break;
      v10 = v24;
      v12 = v26;
      if ( v24 == a3 )
      {
        if ( v13 == a2 )
LABEL_6:
          *(_QWORD *)(v8 + 8 * v11) = v10;
        goto LABEL_7;
      }
    }
    if ( v13 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v11) = v7;
      v6 = v7;
    }
    for ( *(_QWORD *)(v8 + 8 * v11 + 8) = v6; ; *(_QWORD *)(v8 + 8 * v11 + 8) = v7 )
    {
      v10 = v24;
      if ( v24 == a3 )
        break;
      v19 = std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring>(
              v15,
              v24 + 16,
              v16);
      v11 = 2 * (a1[6] & v19);
      v20 = *(_QWORD *)(v8 + 16 * (a1[6] & v19) + 8);
      while ( 1 )
      {
        v21 = v10 == v20;
        std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::_Range_eraser::_Bump_erased(&v22);
        if ( v21 )
          break;
        v10 = v24;
        if ( v24 == a3 )
          goto LABEL_6;
      }
      *(_QWORD *)(v8 + 8 * v11) = v7;
    }
LABEL_7:
    v17 = v23;
    *v23 = v10;
    *(_QWORD *)(v10 + 8) = v17;
  }
  return a3;
}
