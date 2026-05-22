/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180054814
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAAXXZ @ 0x18006A788 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@.c)
 *     ??$emplace@AEBW4_Button@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@@std@@_N@1@AEBW4_Button@@@Z @ 0x1800D6A4C (--$emplace@AEBW4_Button@@@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$has.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000CC20 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // r11
  unsigned int *v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rbx
  _QWORD *v15; // rdx
  __int64 *v16; // rbx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  result = v6 - 1;
  a1[6] = v6 - 1;
  v9 = *(_QWORD *)a1[1];
LABEL_4:
  while ( v9 != v4 )
  {
    result = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
               v7,
               v9 + 16);
    v12 = a1[3];
    v13 = 2 * (a1[6] & result);
    if ( *(_QWORD *)(v12 + 16 * (a1[6] & result)) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (a1[6] & result)) = v11;
      goto LABEL_7;
    }
    result = *(_QWORD *)(v12 + 16 * (a1[6] & result) + 8);
    v7 = *v10;
    if ( (_DWORD)v7 == *(_DWORD *)(result + 16) )
    {
      v14 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v11 )
      {
        v15 = *(_QWORD **)(v11 + 8);
        *v15 = v9;
        v7 = *(_QWORD *)(v9 + 8);
        *(_QWORD *)v7 = v14;
        result = *(_QWORD *)(v14 + 8);
        *(_QWORD *)result = v11;
        *(_QWORD *)(v14 + 8) = v7;
        *(_QWORD *)(v9 + 8) = v15;
        *(_QWORD *)(v11 + 8) = result;
      }
LABEL_7:
      *(_QWORD *)(v12 + 8 * v13 + 8) = v11;
    }
    else
    {
      while ( 1 )
      {
        v16 = (__int64 *)(result + 8);
        if ( *(_QWORD *)(v12 + 8 * v13) == result )
          break;
        result = *v16;
        if ( (_DWORD)v7 == *(_DWORD *)(*v16 + 16) )
        {
          v17 = *(_QWORD *)result;
          v18 = *(_QWORD **)(v11 + 8);
          *v18 = v9;
          v7 = *(_QWORD *)(v9 + 8);
          *(_QWORD *)v7 = v17;
          result = *(_QWORD *)(v17 + 8);
          *(_QWORD *)result = v11;
          *(_QWORD *)(v17 + 8) = v7;
          *(_QWORD *)(v9 + 8) = v18;
          *(_QWORD *)(v11 + 8) = result;
          goto LABEL_4;
        }
      }
      v19 = *(_QWORD **)(v11 + 8);
      *v19 = v9;
      v7 = *(_QWORD *)(v9 + 8);
      *(_QWORD *)v7 = result;
      result = *v16;
      *(_QWORD *)result = v11;
      *v16 = v7;
      *(_QWORD *)(v9 + 8) = v19;
      *(_QWORD *)(v11 + 8) = result;
      *(_QWORD *)(v12 + 8 * v13) = v11;
    }
  }
  return result;
}
