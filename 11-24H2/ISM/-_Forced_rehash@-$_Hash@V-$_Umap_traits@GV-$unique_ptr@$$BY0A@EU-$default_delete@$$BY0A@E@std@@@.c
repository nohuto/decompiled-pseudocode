/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18018F6CC
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18018F85C (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@s.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000D380 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$?RG@?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@QEBA_KAEBG@Z @ 0x180055868 (--$-RG@-$_Uhash_compare@GU-$hash@G@std@@U-$equal_to@G@2@@std@@QEBA_KAEBG@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18018E968 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 i; // r10
  __int64 v9; // rax
  unsigned __int16 *v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 *v19; // rdi
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  __int64 v26; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v26) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v26) = 0;
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  for ( i = *(_QWORD *)a1[1]; i != v4; i = v12 )
  {
    v9 = std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>::operator()<unsigned short>(
           v7,
           i + 16);
    v13 = a1[3];
    v14 = 2 * (a1[6] & v9);
    if ( *(_QWORD *)(v13 + 16 * (a1[6] & v9)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (a1[6] & v9)) = v11;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v11;
      continue;
    }
    v15 = *(__int64 **)(v13 + 16 * (a1[6] & v9) + 8);
    v7 = *v10;
    if ( (_WORD)v7 == *((_WORD *)v15 + 8) )
    {
      v16 = *v15;
      if ( *v15 != v11 )
      {
        v17 = *(_QWORD **)(v11 + 8);
        *v17 = v12;
        v7 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)v7 = v16;
        v18 = *(_QWORD **)(v16 + 8);
        *v18 = v11;
        *(_QWORD *)(v16 + 8) = v7;
        *(_QWORD *)(v12 + 8) = v17;
        *(_QWORD *)(v11 + 8) = v18;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v19 = v15 + 1;
      if ( *(__int64 **)(v13 + 8 * v14) == v15 )
        break;
      v15 = (__int64 *)*v19;
      if ( (_WORD)v7 == *(_WORD *)(*v19 + 16) )
      {
        v20 = *v15;
        v21 = *(_QWORD **)(v11 + 8);
        *v21 = v12;
        v7 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)v7 = v20;
        v22 = *(_QWORD **)(v20 + 8);
        *v22 = v11;
        *(_QWORD *)(v20 + 8) = v7;
        *(_QWORD *)(v12 + 8) = v21;
        *(_QWORD *)(v11 + 8) = v22;
        goto LABEL_15;
      }
    }
    v23 = *(_QWORD **)(v11 + 8);
    *v23 = v12;
    v7 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)v7 = v15;
    v24 = (_QWORD *)*v19;
    *v24 = v11;
    *v19 = v7;
    *(_QWORD *)(v12 + 8) = v23;
    *(_QWORD *)(v11 + 8) = v24;
    *(_QWORD *)(v13 + 8 * v14) = v11;
LABEL_15:
    ;
  }
  v26 = 0LL;
  return std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Clear_guard::~_Clear_guard(&v26);
}
