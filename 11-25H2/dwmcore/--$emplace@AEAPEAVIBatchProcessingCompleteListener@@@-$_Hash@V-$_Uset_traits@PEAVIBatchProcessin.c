/*
 * XREFs of ??$emplace@AEAPEAVIBatchProcessingCompleteListener@@@?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVIBatchProcessingCompleteListener@@@std@@@std@@@std@@_N@1@AEAPEAVIBatchProcessingCompleteListener@@@Z @ 0x180112DF4
 * Callers:
 *     ??0CAnimationController@@QEAA@PEAVCComposition@@@Z @ 0x180112D58 (--0CAnimationController@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800F6730 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180113C60 (-_Forced_rehash@-$_Hash@V-$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V-$_Uhash_compare@.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::emplace<IBatchProcessingCompleteListener * &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbp
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  float v15; // xmm0_4
  __int64 v16; // rcx
  float v17; // xmm1_4
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // [rsp+20h] [rbp-28h]

  v5 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
  {
    v8 = *((unsigned __int8 *)a3 + v5++);
    v7 = 0x100000001B3LL * (v8 ^ v7);
  }
  while ( v5 < 8 );
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD **)(a1 + 8);
  v11 = *(_QWORD **)(v9 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
  if ( v11 == v10 )
  {
    v11 = *(_QWORD **)(a1 + 8);
  }
  else
  {
    while ( *a3 != v11[2] )
    {
      if ( v11 == *(_QWORD **)(v9 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
      {
        v10 = v11;
        v12 = 0LL;
        goto LABEL_8;
      }
      v11 = (_QWORD *)v11[1];
    }
    v10 = (_QWORD *)*v11;
    v12 = v11;
    v11 = (_QWORD *)*v11;
LABEL_8:
    if ( v12 )
    {
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("unordered_map/set too long");
  v13 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  v13[2] = *a3;
  v14 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v14 < 0 )
    v15 = (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1))
        + (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1));
  else
    v15 = (float)(int)v14;
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 < 0 )
  {
    v27 = *(_QWORD *)(a1 + 56) & 1LL | (*(_QWORD *)(a1 + 56) >> 1);
    v17 = (float)(int)v27 + (float)(int)v27;
  }
  else
  {
    v17 = (float)(int)v16;
  }
  if ( (float)(v15 / v17) > *(float *)a1 )
  {
    v23 = std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Desired_grow_bucket_count(
            a1,
            v14);
    std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::_Forced_rehash(
      a1,
      v23);
    v24 = *(_QWORD *)(a1 + 24);
    v11 = *(_QWORD **)(a1 + 8);
    v25 = *(_QWORD **)(v24 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
    if ( v25 != v11 )
    {
      v26 = *(_QWORD **)(v24 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
      while ( 1 )
      {
        v11 = v25;
        if ( v13[2] == v25[2] )
          break;
        if ( v25 == v26 )
        {
          v28 = v25;
          goto LABEL_34;
        }
        v25 = (_QWORD *)v25[1];
      }
      v11 = (_QWORD *)*v25;
    }
    v28 = v11;
LABEL_34:
    v10 = v28;
  }
  v18 = (_QWORD *)v11[1];
  ++*(_QWORD *)(a1 + 16);
  *v13 = v10;
  v13[1] = v18;
  *v18 = v13;
  v11[1] = v13;
  v19 = *(_QWORD *)(a1 + 24);
  v20 = 2 * (v7 & *(_QWORD *)(a1 + 48));
  v21 = *(_QWORD **)(v19 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
  if ( v21 == *(_QWORD **)(a1 + 8) )
  {
    *(_QWORD *)(v19 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v13;
  }
  else
  {
    if ( v21 == v10 )
    {
      *(_QWORD *)(v19 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v13;
      goto LABEL_18;
    }
    if ( *(_QWORD **)(v19 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8) != v18 )
      goto LABEL_18;
  }
  *(_QWORD *)(v19 + 8 * v20 + 8) = v13;
LABEL_18:
  *(_QWORD *)a2 = v13;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
