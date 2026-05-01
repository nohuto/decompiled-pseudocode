/*
 * XREFs of ??$_Try_emplace@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@$$V@?$map@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_KU?$less@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@@8@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@std@@_N@1@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@Z @ 0x180603FD4
 * Callers:
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x180605334 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18006B894 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800D519C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Find_lower_bound@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@?$_Tree@V?$_Tmap_traits@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_KU?$less@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@std@@@1@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@Z @ 0x1802172B8 (--$_Find_lower_bound@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@-$_Tree@V-$_Tmap_.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18022F59C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180319DF4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier,unsigned __int64>::_Try_emplace<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier const &,>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  _DWORD *v6; // r8
  __int64 v7; // rdi
  size_t size_of; // rax
  _DWORD *v9; // rbx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier,unsigned __int64,std::less<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier>,std::allocator<std::pair<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier const,unsigned __int64>>,0>>::_Find_lower_bound<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier>(
    a1,
    &v12,
    a3);
  if ( *(_BYTE *)(v13 + 25) || *v6 < *(_DWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    v11 = (unsigned __int64)a1;
    size_of = std::_Get_size_of_n<48>(1uLL);
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v9[8] = *a3;
    *((_QWORD *)v9 + 5) = 0LL;
    *(_QWORD *)v9 = v7;
    *((_QWORD *)v9 + 1) = v7;
    *((_QWORD *)v9 + 2) = v7;
    *((_WORD *)v9 + 12) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>((__int64)&v11);
    v11 = v12;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      a1,
                      (__int64)&v11,
                      (__int64)v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
