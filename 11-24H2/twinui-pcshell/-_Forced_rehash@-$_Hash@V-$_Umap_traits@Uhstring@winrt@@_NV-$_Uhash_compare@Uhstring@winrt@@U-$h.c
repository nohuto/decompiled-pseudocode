/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180615D64
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180616454 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$ha.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@@Z @ 0x18001CD30 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$?RUhstring@winrt@@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x1801A6000 (--$-RUhstring@winrt@@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to.c)
 *     ??$?RUhstring@winrt@@U01@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_NAEBUhstring@winrt@@0@Z @ 0x1801A60F0 (--$-RUhstring@winrt@@U01@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equa.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1806117D4 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$h.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rdi
  _QWORD *v8; // r11
  _QWORD *v9; // rbx
  __int64 *v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // r11
  __int64 v13; // rbp
  __int64 v14; // r14
  _QWORD *v15; // rdi
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // r15
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  __int64 v26; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(v26) = 0;
  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v26) = 0;
  v3 = qword_1808CDE58;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>>>::_Assign_grow(
    &qword_1808CDE68,
    2 * v5,
    qword_1808CDE58);
  v7 = v5 - 1;
  qword_1808CDE88 = v5;
  qword_1808CDE80 = v5 - 1;
  v8 = *(_QWORD **)qword_1808CDE58;
  v9 = *(_QWORD **)qword_1808CDE58;
  while ( v8 != (_QWORD *)v3 )
  {
    v9 = (_QWORD *)*v9;
    v10 = v8 + 2;
    v11 = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
            (__int64)v6,
            v8 + 2);
    v13 = qword_1808CDE68;
    v14 = 2 * (v7 & v11);
    if ( *(_QWORD *)(qword_1808CDE68 + 16 * (v7 & v11)) == v3 )
    {
      *(_QWORD *)(qword_1808CDE68 + 16 * (v7 & v11)) = v12;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_16;
    }
    v15 = *(_QWORD **)(qword_1808CDE68 + 16 * (v7 & v11) + 8);
    if ( !std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring,winrt::hstring>(
            (__int64)v6,
            v10,
            v15 + 2) )
    {
      v16 = *v15;
      if ( *v15 != v12 )
      {
        v17 = *(_QWORD **)(v12 + 8);
        *v17 = v9;
        v6 = (_QWORD *)v9[1];
        *v6 = v16;
        v18 = *(_QWORD **)(v16 + 8);
        *v18 = v12;
        *(_QWORD *)(v16 + 8) = v6;
        v9[1] = v17;
        *(_QWORD *)(v12 + 8) = v18;
      }
      goto LABEL_7;
    }
    v19 = v15;
    while ( *(_QWORD **)(v13 + 8 * v14) != v19 )
    {
      v15 = (_QWORD *)v15[1];
      v19 = v15;
      if ( !std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring,winrt::hstring>(
              (__int64)v6,
              v10,
              v15 + 2) )
      {
        v20 = *v15;
        v21 = *(_QWORD **)(v12 + 8);
        *v21 = v9;
        v6 = (_QWORD *)v9[1];
        *v6 = v20;
        v22 = *(_QWORD **)(v20 + 8);
        *v22 = v12;
        *(_QWORD *)(v20 + 8) = v6;
        v9[1] = v21;
        *(_QWORD *)(v12 + 8) = v22;
        goto LABEL_16;
      }
    }
    v23 = *(_QWORD **)(v12 + 8);
    *v23 = v9;
    v6 = (_QWORD *)v9[1];
    *v6 = v15;
    v24 = (_QWORD *)v15[1];
    *v24 = v12;
    v15[1] = v6;
    v9[1] = v23;
    *(_QWORD *)(v12 + 8) = v24;
    *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_16:
    v7 = qword_1808CDE80;
    v8 = v9;
  }
  v26 = 0LL;
  return std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Clear_guard::~_Clear_guard(&v26);
}
