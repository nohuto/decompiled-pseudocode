/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1804782C0
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXXZ @ 0x180478454 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@.c)
 * Callees:
 *     ??$?RH@?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@QEBA_KAEBH@Z @ 0x1800AB80C (--$-RH@-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@H@2@@std@@QEBA_KAEBH@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801CC44C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_v_ea_1801CC44C.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@HIV?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18046D1EC (--1_Clear_guard@-$_Hash@V-$_Umap_traits@HIV-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@H@2@@std.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // rax
  unsigned int *v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  __int64 v25; // [rsp+20h] [rbp-28h] BYREF

  LODWORD(v25) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v25) = 0;
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned int>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  v8 = *(_QWORD *)a1[1];
LABEL_4:
  while ( v8 != v4 )
  {
    v9 = std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>::operator()<int>(v7, v8 + 16);
    v12 = a1[3];
    v13 = 2 * (a1[6] & v9);
    if ( *(_QWORD *)(v12 + 16 * (a1[6] & v9)) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (a1[6] & v9)) = v11;
      goto LABEL_7;
    }
    v14 = *(__int64 **)(v12 + 16 * (a1[6] & v9) + 8);
    v7 = *v10;
    if ( (_DWORD)v7 == *((_DWORD *)v14 + 4) )
    {
      v15 = *v14;
      if ( *v14 != v11 )
      {
        v16 = *(_QWORD **)(v11 + 8);
        *v16 = v8;
        v7 = *(_QWORD *)(v8 + 8);
        *(_QWORD *)v7 = v15;
        v17 = *(_QWORD **)(v15 + 8);
        *v17 = v11;
        *(_QWORD *)(v15 + 8) = v7;
        *(_QWORD *)(v8 + 8) = v16;
        *(_QWORD *)(v11 + 8) = v17;
      }
LABEL_7:
      *(_QWORD *)(v12 + 8 * v13 + 8) = v11;
    }
    else
    {
      while ( 1 )
      {
        v18 = v14 + 1;
        if ( *(__int64 **)(v12 + 8 * v13) == v14 )
          break;
        v14 = (__int64 *)*v18;
        if ( (_DWORD)v7 == *(_DWORD *)(*v18 + 16) )
        {
          v19 = *v14;
          v20 = *(_QWORD **)(v11 + 8);
          *v20 = v8;
          v7 = *(_QWORD *)(v8 + 8);
          *(_QWORD *)v7 = v19;
          v21 = *(_QWORD **)(v19 + 8);
          *v21 = v11;
          *(_QWORD *)(v19 + 8) = v7;
          *(_QWORD *)(v8 + 8) = v20;
          *(_QWORD *)(v11 + 8) = v21;
          goto LABEL_4;
        }
      }
      v22 = *(_QWORD **)(v11 + 8);
      *v22 = v8;
      v7 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)v7 = v14;
      v23 = (_QWORD *)*v18;
      *v23 = v11;
      *v18 = v7;
      *(_QWORD *)(v8 + 8) = v22;
      *(_QWORD *)(v11 + 8) = v23;
      *(_QWORD *)(v12 + 8 * v13) = v11;
    }
  }
  v25 = 0LL;
  return std::_Hash<std::_Umap_traits<int,unsigned int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,unsigned int>>,0>>::_Clear_guard::~_Clear_guard(&v25);
}
