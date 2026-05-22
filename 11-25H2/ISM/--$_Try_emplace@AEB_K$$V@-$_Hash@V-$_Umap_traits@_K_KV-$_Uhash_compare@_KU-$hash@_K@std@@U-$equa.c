/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18004F6B8
 * Callers:
 *     NotifyInputSinkParented @ 0x18004F310 (NotifyInputSinkParented.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x180021B78 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_.c)
 *     ?_Check_max_size@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEBAXXZ @ 0x18004FB34 (-_Check_max_size@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18006144C (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180081558 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64 const &,>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rbp
  unsigned __int64 i; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // r8
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v6);
  v8 = a1[3];
  v9 = *(_QWORD **)(v8 + 16 * (v6 & a1[6]) + 8);
  v10 = (_QWORD *)a1[1];
  if ( v9 == v10 )
    goto LABEL_7;
  while ( 1 )
  {
    if ( *a3 == v9[2] )
    {
      v10 = (_QWORD *)*v9;
      goto LABEL_6;
    }
    if ( v9 == *(_QWORD **)(v8 + 16 * (v6 & a1[6])) )
      break;
    v9 = (_QWORD *)v9[1];
  }
  v10 = v9;
  v9 = 0LL;
LABEL_6:
  if ( !v9 )
  {
LABEL_7:
    std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Check_max_size(a1);
    v17[0] = a1 + 1;
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v17[1] = v11;
    v11[2] = *a3;
    v11[3] = 0LL;
    if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Check_rehash_required_1((__int64)a1) )
    {
      std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Rehash_for_1(a1);
      v10 = *(_QWORD **)((__int64 (__fastcall *)(_QWORD *, _QWORD *, _QWORD *, __int64))std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Find_last<unsigned __int64>)(
                          a1,
                          v17,
                          v11 + 2,
                          v6);
    }
    v12 = (_QWORD *)v10[1];
    ++a1[2];
    *v11 = v10;
    v11[1] = v12;
    *v12 = v11;
    v10[1] = v11;
    v13 = a1[3];
    v14 = 2 * (v6 & a1[6]);
    v15 = *(_QWORD **)(v13 + 16 * (v6 & a1[6]));
    if ( v15 == (_QWORD *)a1[1] )
    {
      *(_QWORD *)(v13 + 16 * (v6 & a1[6])) = v11;
    }
    else
    {
      if ( v15 == v10 )
      {
        *(_QWORD *)(v13 + 16 * (v6 & a1[6])) = v11;
        goto LABEL_18;
      }
      if ( *(_QWORD **)(v13 + 16 * (v6 & a1[6]) + 8) != v12 )
        goto LABEL_18;
    }
    *(_QWORD *)(v13 + 8 * v14 + 8) = v11;
LABEL_18:
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
