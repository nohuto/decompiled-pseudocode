/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800F41A4
 * Callers:
 *     ??$emplace@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@PEAX@1@@Z @ 0x1800ED4D0 (--$emplace@U-$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAX.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@2@@Z @ 0x18004CD94 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800EDADC (--1_Clear_guard@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T_LARGE_INTEGER@@.c)
 *     ??8@YA_NAEBT_LARGE_INTEGER@@0@Z @ 0x1800EDAFC (--8@YA_NAEBT_LARGE_INTEGER@@0@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Forced_rehash(
        const char *a1,
        unsigned __int64 a2)
{
  const char *v2; // r15
  char v3; // cl
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // r11
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // r9
  _QWORD *v14; // r8
  __int64 v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rbp
  _QWORD *v20; // rsi
  __int64 v21; // r9
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  __int64 v29; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v29) = 0;
  v2 = a1;
  _BitScanReverse64((unsigned __int64 *)&a1, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Dwm_Xlength_error(a1);
  LODWORD(v29) = 0;
  v4 = *((_QWORD *)v2 + 1);
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>>>>>::_Assign_grow(
    (_QWORD *)v2 + 3,
    2 * v6,
    v4);
  *((_QWORD *)v2 + 7) = v6;
  *((_QWORD *)v2 + 6) = v6 - 1;
  v7 = (_QWORD *)**((_QWORD **)v2 + 1);
  v8 = v7;
  while ( v7 != (_QWORD *)v4 )
  {
    v8 = (_QWORD *)*v8;
    v9 = v7 + 2;
    v10 = std::_Hash_representation<__int64>((const unsigned __int8 *)v7 + 16);
    v12 = *((_QWORD *)v2 + 3);
    v13 = 2 * (*((_QWORD *)v2 + 6) & v10);
    if ( *(_QWORD *)(v12 + 16 * (*((_QWORD *)v2 + 6) & v10)) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (*((_QWORD *)v2 + 6) & v10)) = v11;
LABEL_6:
      *(_QWORD *)(v12 + 8 * v13 + 8) = v11;
      goto LABEL_15;
    }
    if ( operator==(v9, (_QWORD *)(*(_QWORD *)(v12 + 16 * (*((_QWORD *)v2 + 6) & v10) + 8) + 16LL)) )
    {
      v15 = *v14;
      if ( v15 != v11 )
      {
        v16 = *(_QWORD **)(v11 + 8);
        *v16 = v8;
        v17 = (_QWORD *)v8[1];
        *v17 = v15;
        v18 = *(_QWORD **)(v15 + 8);
        *v18 = v11;
        *(_QWORD *)(v15 + 8) = v17;
        v8[1] = v16;
        *(_QWORD *)(v11 + 8) = v18;
      }
      goto LABEL_6;
    }
    v19 = v14;
    while ( 1 )
    {
      v20 = v14 + 1;
      if ( *(_QWORD **)(v12 + 8 * v13) == v19 )
        break;
      v19 = (_QWORD *)*v20;
      if ( operator==(v9, (_QWORD *)(*v20 + 16LL)) )
      {
        v21 = *v14;
        v22 = *(_QWORD **)(v11 + 8);
        *v22 = v8;
        v23 = (_QWORD *)v8[1];
        *v23 = v21;
        v24 = *(_QWORD **)(v21 + 8);
        *v24 = v11;
        *(_QWORD *)(v21 + 8) = v23;
        v8[1] = v22;
        *(_QWORD *)(v11 + 8) = v24;
        goto LABEL_15;
      }
    }
    v25 = *(_QWORD **)(v11 + 8);
    *v25 = v8;
    v26 = (_QWORD *)v8[1];
    *v26 = v14;
    v27 = (_QWORD *)*v20;
    *v27 = v11;
    *v20 = v26;
    v8[1] = v25;
    *(_QWORD *)(v11 + 8) = v27;
    *(_QWORD *)(v12 + 8 * v13) = v11;
LABEL_15:
    v7 = v8;
  }
  v29 = 0LL;
  return std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Clear_guard::~_Clear_guard(&v29);
}
