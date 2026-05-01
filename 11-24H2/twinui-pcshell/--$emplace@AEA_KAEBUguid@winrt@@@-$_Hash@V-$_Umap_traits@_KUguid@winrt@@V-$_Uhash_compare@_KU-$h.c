/*
 * XREFs of ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x180126548
 * Callers:
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1801261FC (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1801E92D4 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$e.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180223670 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1802CB4A0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$eq.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::emplace<unsigned __int64 &,winrt::guid const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _OWORD *a4)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rbp
  char *v14; // rbx
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD v26[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0LL;
  v9 = 0xCBF29CE484222325uLL;
  do
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v8++) ^ (unsigned __int64)v9);
  while ( v8 < 8 );
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD **)(v10 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8);
  v12 = a1 + 8;
  v13 = *(_QWORD **)(a1 + 8);
  if ( v11 != v13 )
  {
    while ( 1 )
    {
      if ( *a3 == v11[2] )
      {
        v13 = (_QWORD *)*v11;
        goto LABEL_18;
      }
      if ( v11 == *(_QWORD **)(v10 + 16 * (v9 & *(_QWORD *)(a1 + 48))) )
        break;
      v11 = (_QWORD *)v11[1];
    }
    v13 = v11;
    v11 = 0LL;
LABEL_18:
    if ( v11 )
    {
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
    v12 = a1 + 8;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x666666666666666LL )
    std::_Xlength_error("unordered_map/set too long");
  v26[0] = v12;
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  v26[1] = v14;
  *((_QWORD *)v14 + 2) = *a3;
  *(_OWORD *)(v14 + 24) = *a4;
  v15 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v15 < 0 )
    v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
        + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
  else
    v16 = (float)(int)v15;
  v17 = *(_QWORD *)(a1 + 56);
  if ( v17 < 0 )
  {
    v24 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v17 >> 1);
    v18 = (float)(int)v24 + (float)(int)v24;
  }
  else
  {
    v18 = (float)(int)v17;
  }
  if ( (float)(v16 / v18) > *(float *)a1 )
  {
    v25 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Forced_rehash(
      a1,
      v25);
    v13 = *(_QWORD **)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Find_last<unsigned __int64>(
                        a1,
                        v26,
                        v14 + 16,
                        v9);
  }
  v19 = (_QWORD *)v13[1];
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v14 = v13;
  *((_QWORD *)v14 + 1) = v19;
  *v19 = v14;
  v13[1] = v14;
  v20 = *(_QWORD *)(a1 + 24);
  v21 = 2 * (v9 & *(_QWORD *)(a1 + 48));
  v22 = *(_QWORD **)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48)));
  if ( v22 == *(_QWORD **)(a1 + 8) )
  {
    *(_QWORD *)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48))) = v14;
LABEL_23:
    *(_QWORD *)(v20 + 8 * v21 + 8) = v14;
    goto LABEL_14;
  }
  if ( v22 != v13 )
  {
    if ( *(_QWORD **)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8) != v19 )
      goto LABEL_14;
    goto LABEL_23;
  }
  *(_QWORD *)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48))) = v14;
LABEL_14:
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
