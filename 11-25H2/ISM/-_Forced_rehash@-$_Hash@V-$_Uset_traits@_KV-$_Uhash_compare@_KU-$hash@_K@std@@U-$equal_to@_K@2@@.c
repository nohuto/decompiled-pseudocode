/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800B0D78
 * Callers:
 *     ??$emplace@AEB_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180023450 (--$emplace@AEB_K@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800209D0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??$?RPEAUIInputTarget@@@?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@std@@QEBA_KAEBQEAUIInputTarget@@@Z @ 0x18002360C (--$-RPEAUIInputTarget@@@-$_Uhash_compare@PEAUIInputTarget@@U-$hash@PEAUIInputTarget@@@std@@U-$eq.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800ADD8C (--1_Clear_guard@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISyste.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 **v7; // rcx
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 ***v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 *v15; // rbx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 **v18; // rbx
  __int64 *v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  __int64 *v23; // rax
  __int64 v25; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v25) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v25) = 0;
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  v8 = *(_QWORD *)a1[1];
LABEL_4:
  while ( v8 != v4 )
  {
    v9 = std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>::operator()<IInputTarget *>(
           (__int64)v7,
           v8 + 16);
    v12 = a1[3];
    v13 = 2 * (a1[6] & v9);
    if ( *(_QWORD *)(v12 + 16 * (a1[6] & v9)) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (a1[6] & v9)) = v11;
      goto LABEL_7;
    }
    v14 = *(__int64 **)(v12 + 16 * (a1[6] & v9) + 8);
    v7 = *v10;
    if ( *v10 == (__int64 **)v14[2] )
    {
      v15 = (__int64 *)*v14;
      if ( *v14 != v11 )
      {
        v16 = *(_QWORD **)(v11 + 8);
        *v16 = v8;
        v7 = *(__int64 ***)(v8 + 8);
        *v7 = v15;
        v17 = (_QWORD *)v15[1];
        *v17 = v11;
        v15[1] = (__int64)v7;
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
        v18 = (__int64 **)(v14 + 1);
        if ( *(__int64 **)(v12 + 8 * v13) == v14 )
          break;
        v14 = *v18;
        if ( v7 == (__int64 **)(*v18)[2] )
        {
          v19 = (__int64 *)*v14;
          v20 = *(_QWORD **)(v11 + 8);
          *v20 = v8;
          v7 = *(__int64 ***)(v8 + 8);
          *v7 = v19;
          v21 = (_QWORD *)v19[1];
          *v21 = v11;
          v19[1] = (__int64)v7;
          *(_QWORD *)(v8 + 8) = v20;
          *(_QWORD *)(v11 + 8) = v21;
          goto LABEL_4;
        }
      }
      v22 = *(_QWORD **)(v11 + 8);
      *v22 = v8;
      v7 = *(__int64 ***)(v8 + 8);
      *v7 = v14;
      v23 = *v18;
      *v23 = v11;
      *v18 = (__int64 *)v7;
      *(_QWORD *)(v8 + 8) = v22;
      *(_QWORD *)(v11 + 8) = v23;
      *(_QWORD *)(v12 + 8 * v13) = v11;
    }
  }
  v25 = 0LL;
  return std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Clear_guard::~_Clear_guard(&v25);
}
