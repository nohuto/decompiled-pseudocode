/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18002371C
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001CD30 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800238F0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??$?RPEAUIInputTarget@@@?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@std@@QEBA_KAEBQEAUIInputTarget@@@Z @ 0x180023BDC (--$-RPEAUIInputTarget@@@-$_Uhash_compare@PEAUIInputTarget@@U-$hash@PEAUIInputTarget@@@std@@U-$eq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

char *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        char *a2,
        char *a3)
{
  char *v5; // rsi
  char **v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  char *v12; // rbx
  __int64 v13; // rcx
  char **v14; // rax
  __int64 v16; // rax
  __int64 v17; // r10
  char *v18; // rbx
  char *v20; // [rsp+78h] [rbp+10h]
  char *v21; // [rsp+78h] [rbp+10h]
  char **v22; // [rsp+80h] [rbp+18h]
  char *v23; // [rsp+88h] [rbp+20h]

  if ( a2 != a3 )
  {
    v5 = a2;
    v6 = (char **)*((_QWORD *)a2 + 1);
    v7 = 0xCBF29CE484222325uLL;
    v8 = a1[3];
    v9 = 0LL;
    v22 = (char **)a1[1];
    do
    {
      v10 = (unsigned __int8)a2[v9 + 16];
      ++v9;
      v7 = 0x100000001B3LL * (v10 ^ v7);
    }
    while ( v9 < 8 );
    v11 = 2 * (a1[6] & v7);
    v20 = *(char **)(v8 + 8 * v11);
    v23 = *(char **)(v8 + 8 * v11 + 8);
    do
    {
      v12 = v5;
      v5 = *(char **)v5;
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v12 + 24);
      operator delete(v12, (const struct std::nothrow_t *)0x30);
      --a1[2];
      if ( v12 == v23 )
      {
        if ( v20 == a2 )
        {
          *(_QWORD *)(v8 + 8 * v11) = v22;
          v14 = v22;
        }
        else
        {
          v14 = v6;
        }
        *(_QWORD *)(v8 + 8 * v11 + 8) = v14;
        while ( v5 != a3 )
        {
          v16 = std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>::operator()<IInputTarget *>(
                  v13,
                  v5 + 16);
          v11 = 2 * (*(_QWORD *)(v17 + 48) & v16);
          v21 = *(char **)(v8 + 16 * (*(_QWORD *)(v17 + 48) & v16) + 8);
          while ( 1 )
          {
            v18 = v5;
            v5 = *(char **)v5;
            std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v18 + 24);
            std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)0x30);
            --a1[2];
            if ( v18 == v21 )
              break;
            if ( v5 == a3 )
              goto LABEL_15;
          }
          *(_QWORD *)(v8 + 8 * v11) = v22;
          *(_QWORD *)(v8 + 8 * v11 + 8) = v22;
        }
        goto LABEL_10;
      }
    }
    while ( v5 != a3 );
    if ( v20 == a2 )
LABEL_15:
      *(_QWORD *)(v8 + 8 * v11) = v5;
LABEL_10:
    *v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
  }
  return a3;
}
