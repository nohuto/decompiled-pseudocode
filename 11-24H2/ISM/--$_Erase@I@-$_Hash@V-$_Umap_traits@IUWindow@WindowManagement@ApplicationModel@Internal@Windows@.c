/*
 * XREFs of ??$_Erase@I@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@AEAA_KAEBI@Z @ 0x180027560
 * Callers:
 *     ?OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x180026D10 (-OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@Applicatio.c)
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180027828 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIUWindow@WindowManagement@ApplicationModel@I.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_Erase<unsigned int>(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r11
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 *v7; // rax
  __int64 v8; // r10
  __int64 *v9; // rdx
  __int64 v10; // rcx

  v3 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         a1,
         (__int64)a2);
  v5 = v4[3];
  v6 = v4[6] & v3;
  v7 = (__int64 *)v4[1];
  v8 = 2 * v6;
  v9 = *(__int64 **)(v5 + 8 * v8 + 8);
  if ( v9 == v7 )
  {
LABEL_2:
    v9 = 0LL;
  }
  else
  {
    while ( *a2 != *((_DWORD *)v9 + 4) )
    {
      if ( v9 == *(__int64 **)(v5 + 8 * v8) )
        goto LABEL_2;
      v9 = (__int64 *)v9[1];
    }
  }
  if ( !v9 )
    return 0LL;
  if ( *(__int64 **)(v5 + 8 * v8 + 8) == v9 )
  {
    if ( *(__int64 **)(v5 + 8 * v8) == v9 )
      *(_QWORD *)(v5 + 8 * v8) = v7;
    else
      v7 = (__int64 *)v9[1];
    *(_QWORD *)(v5 + 8 * v8 + 8) = v7;
  }
  else if ( *(__int64 **)(v5 + 8 * v8) == v9 )
  {
    *(_QWORD *)(v5 + 8 * v8) = *v9;
  }
  v10 = *v9;
  --v4[2];
  *(_QWORD *)v9[1] = v10;
  *(_QWORD *)(v10 + 8) = v9[1];
  std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,void *>>>();
  return 1LL;
}
