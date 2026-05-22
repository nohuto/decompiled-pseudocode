/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180028C40
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAAXXZ @ 0x180075E70 (-clear@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt.c)
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180027268 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIUWindow@WindowManagement@ApplicationModel@I.c)
 */

char *__fastcall std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        char *a2,
        char *a3)
{
  char *v6; // rdi
  char **v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  char *v12; // rdx
  char *v13; // rbx
  char **v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  char *v17; // r12
  char *v18; // rdx
  char *v19; // rbx
  char *v21; // [rsp+68h] [rbp+10h]
  char **v22; // [rsp+70h] [rbp+18h]
  char *v23; // [rsp+78h] [rbp+20h]

  if ( a2 != a3 )
  {
    v6 = a2;
    v7 = (char **)*((_QWORD *)a2 + 1);
    v8 = a1[3];
    v22 = (char **)a1[1];
    v9 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
           (__int64)a1,
           (__int64)(a2 + 16));
    v11 = 2 * (a1[6] & v9);
    v21 = *(char **)(v8 + 16 * (a1[6] & v9));
    v23 = *(char **)(v8 + 16 * (a1[6] & v9) + 8);
    while ( 1 )
    {
      v12 = v6;
      v13 = v6;
      v6 = *(char **)v6;
      std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,void *>>>(
        v10,
        v12);
      --a1[2];
      if ( v13 == v23 )
        break;
      if ( v6 == a3 )
      {
        if ( v21 == a2 )
          *(_QWORD *)(v8 + 8 * v11) = v6;
        goto LABEL_16;
      }
    }
    if ( v21 == a2 )
    {
      v14 = v22;
      *(_QWORD *)(v8 + 8 * v11) = v22;
    }
    else
    {
      v14 = v7;
    }
    *(_QWORD *)(v8 + 8 * v11 + 8) = v14;
    while ( v6 != a3 )
    {
      v15 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
              v10,
              (__int64)(v6 + 16));
      v16 = 2 * (a1[6] & v15);
      v17 = *(char **)(v8 + 16 * (a1[6] & v15) + 8);
      while ( 1 )
      {
        v18 = v6;
        v19 = v6;
        v6 = *(char **)v6;
        std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,void *>>>(
          v10,
          v18);
        --a1[2];
        if ( v19 == v17 )
          break;
        if ( v6 == a3 )
        {
          *(_QWORD *)(v8 + 8 * v16) = v6;
          goto LABEL_16;
        }
      }
      *(_QWORD *)(v8 + 8 * v16) = v22;
      *(_QWORD *)(v8 + 8 * v16 + 8) = v22;
    }
LABEL_16:
    *v7 = v6;
    *((_QWORD *)v6 + 1) = v7;
  }
  return a3;
}
