/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180113C60
 * Callers:
 *     ??$emplace@AEAPEAVIBatchProcessingCompleteListener@@@?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVIBatchProcessingCompleteListener@@@std@@@std@@@std@@_N@1@AEAPEAVIBatchProcessingCompleteListener@@@Z @ 0x180112DF4 (--$emplace@AEAPEAVIBatchProcessingCompleteListener@@@-$_Hash@V-$_Uset_traits@PEAVIBatchProcessin.c)
 * Callees:
 *     ??$?RPEAVCInteractionTracker@@@?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@QEBA_KAEBQEAVCInteractionTracker@@@Z @ 0x1800C149C (--$-RPEAVCInteractionTracker@@@-$_Uhash_compare@PEAVCInteractionTracker@@U-$hash@PEAVCInteractio.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800F6FB8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 *v7; // rcx
  __int64 result; // rax
  __int64 i; // r10
  __int64 **v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 *v15; // rdi
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rdi
  _QWORD *v20; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    a1 + 3,
    2 * v6,
    v4);
  a1[7] = v6;
  result = v6 - 1;
  a1[6] = v6 - 1;
  for ( i = *(_QWORD *)a1[1]; i != v4; i = v12 )
  {
    result = std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>::operator()<CInteractionTracker *>(
               (__int64)v7,
               i + 16);
    v13 = a1[3];
    v14 = 2 * (a1[6] & result);
    if ( *(_QWORD *)(v13 + 16 * (a1[6] & result)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (a1[6] & result)) = v11;
LABEL_6:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v11;
      continue;
    }
    result = *(_QWORD *)(v13 + 16 * (a1[6] & result) + 8);
    v7 = *v10;
    if ( *v10 == *(__int64 **)(result + 16) )
    {
      v19 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v11 )
      {
        v20 = *(_QWORD **)(v11 + 8);
        *v20 = v12;
        v7 = *(__int64 **)(v12 + 8);
        *v7 = v19;
        result = *(_QWORD *)(v19 + 8);
        *(_QWORD *)result = v11;
        *(_QWORD *)(v19 + 8) = v7;
        *(_QWORD *)(v12 + 8) = v20;
        *(_QWORD *)(v11 + 8) = result;
      }
      goto LABEL_6;
    }
    do
    {
      v15 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v13 + 8 * v14) == result )
      {
        v16 = *(_QWORD **)(v11 + 8);
        *v16 = v12;
        v7 = *(__int64 **)(v12 + 8);
        *v7 = result;
        result = *v15;
        *(_QWORD *)result = v11;
        *v15 = (__int64)v7;
        *(_QWORD *)(v12 + 8) = v16;
        *(_QWORD *)(v11 + 8) = result;
        *(_QWORD *)(v13 + 8 * v14) = v11;
        goto LABEL_7;
      }
      result = *v15;
    }
    while ( v7 != *(__int64 **)(*v15 + 16) );
    v17 = *(_QWORD *)result;
    v18 = *(_QWORD **)(v11 + 8);
    *v18 = v12;
    v7 = *(__int64 **)(v12 + 8);
    *v7 = v17;
    result = *(_QWORD *)(v17 + 8);
    *(_QWORD *)result = v11;
    *(_QWORD *)(v17 + 8) = v7;
    *(_QWORD *)(v12 + 8) = v18;
    *(_QWORD *)(v11 + 8) = result;
LABEL_7:
    ;
  }
  return result;
}
