/*
 * XREFs of ?Insert@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAXPEA_N@Z @ 0x18064DE50
 * Callers:
 *     <none>
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800537E8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??1?$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ @ 0x1802CF184 (--1-$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ.c)
 *     ??$assign@AEAUhstring@winrt@@@?$removed_value@Uhstring@winrt@@X@impl@winrt@@QEAAXAEAUhstring@2@@Z @ 0x18033CB80 (--$assign@AEAUhstring@winrt@@@-$removed_value@Uhstring@winrt@@X@impl@winrt@@QEAAXAEAUhstring@2@@.c)
 *     ??$_Emplace@AEBIAEBUhstring@winrt@@@?$_Tree@V?$_Tmap_traits@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@_N@1@AEBIAEBUhstring@winrt@@@Z @ 0x1806449E4 (--$_Emplace@AEBIAEBUhstring@winrt@@@-$_Tree@V-$_Tmap_traits@IUhstring@winrt@@U-$less@I@std@@V-$a.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>>::Insert(
        __int64 a1,
        int a2,
        __int64 a3,
        bool *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+28h] [rbp-20h]
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a2;
  v5 = (a1 - 16) & -(__int64)(a1 != 0);
  v11[8] = 0;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 40));
  std::_Tree<std::_Tmap_traits<unsigned int,winrt::hstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,winrt::hstring>>,0>>::_Emplace<unsigned int const &,winrt::hstring const &>(
    (__int64 *)((-(__int64)(v5 != -40) & v5) + 48),
    (__int64)&v9,
    &v12,
    (const struct winrt::hstring *)&v13);
  if ( !v10 )
  {
    v6 = v9;
    winrt::impl::removed_value<winrt::hstring,void>::assign<winrt::hstring &>((__int64)v11, (__int64 *)(v9 + 40));
    winrt::hstring::operator=((struct winrt::impl::hstring_header **)(v6 + 40), &v13, v7);
  }
  std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>((__int64)v11);
  *a4 = v10 == 0;
  return 0LL;
}
