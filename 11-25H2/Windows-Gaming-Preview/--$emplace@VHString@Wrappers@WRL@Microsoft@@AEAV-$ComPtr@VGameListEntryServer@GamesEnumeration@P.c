/*
 * XREFs of ??$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@56@@Z @ 0x18000CA3C
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000F454 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000FB30 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shi.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180002240 (--2@YAPEAX_K@Z.c)
 *     ??$_Find_lower_bound@VHString@Wrappers@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@1@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18000C974 (--$_Find_lower_bound@VHString@Wrappers@WRL@Microsoft@@@-$_Tree@V-$_Tmap_traits@VHString@Wrappers.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001054C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180010EB8 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
        __int64 *a1,
        __int64 a2,
        HSTRING *a3,
        __int64 *a4)
{
  __int64 **v8; // rax
  __int128 v9; // xmm6
  char v10; // di
  __int64 inserted; // rbp
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // r8
  __int64 v16; // r9
  signed __int64 v17; // rcx
  bool v18; // zf
  signed __int64 v19; // rax
  signed __int32 v20; // eax
  __int128 v22; // [rsp+30h] [rbp-68h] BYREF
  __int128 v23; // [rsp+40h] [rbp-58h]
  __int64 *v24; // [rsp+50h] [rbp-48h]
  __int64 *v25; // [rsp+58h] [rbp-40h] BYREF

  v8 = std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Find_lower_bound<Microsoft::WRL::Wrappers::HString>(
         (__int64)a1,
         &v25,
         a3);
  v9 = *(_OWORD *)v8;
  v23 = *(_OWORD *)v8;
  v24 = v8[2];
  v10 = 0;
  inserted = (__int64)v24;
  if ( *((_BYTE *)v24 + 25)
    || (StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v24[4], 0LL),
        v13 = WindowsGetStringRawBuffer(*a3, 0LL),
        CompareStringOrdinal(v13, -1, StringRawBuffer, -1, 1) == 1) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v14 = *a1;
    *(_QWORD *)&v22 = a1;
    v15 = operator new(0x30uLL);
    *((_QWORD *)&v22 + 1) = v15;
    v15[4] = *a3;
    *a3 = 0LL;
    v16 = *a4;
    v15[5] = *a4;
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 136);
      while ( v17 >= 0 )
      {
        if ( (_DWORD)v17 != 0x7FFFFFFF )
        {
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 136), v17 + 1, v17);
          v18 = v17 == v19;
          v17 = v19;
          if ( !v18 )
            continue;
        }
        goto LABEL_12;
      }
      do
        v20 = *(_DWORD *)(2 * v17 + 0x10);
      while ( v20 != 0x7FFFFFFF
           && v20 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v17 + 16), v20 + 1, v20) );
LABEL_12:
      v9 = v23;
      v15 = (_QWORD *)*((_QWORD *)&v22 + 1);
    }
    *v15 = v14;
    v15[1] = v14;
    v15[2] = v14;
    *((_WORD *)v15 + 12) = 0;
    v22 = v9;
    inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>>::_Insert_node(
                 a1,
                 &v22);
    v10 = 1;
  }
  *(_QWORD *)a2 = inserted;
  *(_BYTE *)(a2 + 8) = v10;
  return a2;
}
