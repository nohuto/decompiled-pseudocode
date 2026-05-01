/*
 * XREFs of ?HasKey@?$map_view_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@IUhstring@3@Ucollection_version@23@@winrt@@QEBA_NAEBI@Z @ 0x18064DBA8
 * Callers:
 *     ?HasKey@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEA_N@Z @ 0x18064DC40 (-HasKey@-$produce@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$allocat.c)
 *     ?HasKey@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEA_N@Z @ 0x18064DC80 (-HasKey@-$produce@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@st_ea_18064DC80.c)
 * Callees:
 *     ??$_Find@I@?$_Tree@V?$_Tmap_traits@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@AEBI@Z @ 0x180644F5C (--$_Find@I@-$_Tree@V-$_Tmap_traits@IUhstring@winrt@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUhs.c)
 */

bool __fastcall winrt::map_view_base<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned int,winrt::hstring,winrt::impl::collection_version>::HasKey(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  v4 = std::_Tree<std::_Tmap_traits<unsigned int,winrt::hstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,winrt::hstring>>,0>>::_Find<unsigned int>(
         (__int64 *)v3,
         a2);
  v5 = a1 + 8;
  if ( !a1 )
    v5 = 48LL;
  return v4 != *(_QWORD *)v5;
}
