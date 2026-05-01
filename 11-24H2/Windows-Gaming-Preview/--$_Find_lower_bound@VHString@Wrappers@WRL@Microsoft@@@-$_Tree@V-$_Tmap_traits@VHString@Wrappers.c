/*
 * XREFs of ??$_Find_lower_bound@VHString@Wrappers@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@1@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18000CA40
 * Callers:
 *     ??$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@56@@Z @ 0x18000CB08 (--$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV-$ComPtr@VGameListEntryServer@GamesEnumeration@P.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800110E0 (-find@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$ComPtr@VGameListEntryServer@Ga.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Find_lower_bound<Microsoft::WRL::Wrappers::HString>(
        __int64 a1,
        __int64 **a2,
        HSTRING *a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rsi
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v8; // rax

  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *((_DWORD *)a2 + 2) = 0;
  *a2 = v5;
  *((_DWORD *)a2 + 3) = 0;
  v6 = *a2;
  a2[2] = *(__int64 **)a1;
  while ( !*((_BYTE *)v6 + 25) )
  {
    *a2 = v6;
    StringRawBuffer = WindowsGetStringRawBuffer(*a3, 0LL);
    v8 = WindowsGetStringRawBuffer((HSTRING)v6[4], 0LL);
    if ( CompareStringOrdinal(v8, -1, StringRawBuffer, -1, 1) == 1 )
    {
      *((_DWORD *)a2 + 2) = 0;
      v6 = (__int64 *)v6[2];
    }
    else
    {
      *((_DWORD *)a2 + 2) = 1;
      a2[2] = v6;
      v6 = (__int64 *)*v6;
    }
  }
  return a2;
}
