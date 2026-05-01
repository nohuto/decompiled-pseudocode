/*
 * XREFs of ??$emplace@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@1@@Z @ 0x18003641C
 * Callers:
 *     ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x180024128 (--$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V1234.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002FF38 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180002240 (--2@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001054C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180010EB8 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Find_lower_bound@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@std@@@1@AEBU_GUID@@@Z @ 0x180036394 (--$_Find_lower_bound@U_GUID@@@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@Executio.c)
 *     memcmp_0 @ 0x180042EB4 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::emplace<_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3,
        __int64 *a4)
{
  __int64 **lower; // rax
  __int128 v9; // xmm6
  char v10; // si
  __int64 inserted; // rbx
  __int64 v12; // rbx
  _OWORD *v13; // r8
  __int64 v14; // rax
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v17; // [rsp+30h] [rbp-38h]

  lower = std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Find_lower_bound<_GUID>(
            (__int64)a1,
            (__int64 **)&v16,
            a3);
  v9 = *(_OWORD *)lower;
  v17 = lower[2];
  v10 = 0;
  inserted = (__int64)v17;
  if ( *((_BYTE *)v17 + 25) || memcmp_0(a3, v17 + 4, 0x10uLL) < 0 )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v12 = *a1;
    v16 = (unsigned __int64)a1;
    v13 = operator new(0x38uLL);
    v13[2] = *a3;
    v14 = *a4;
    *a4 = 0LL;
    *((_QWORD *)v13 + 6) = v14;
    *(_QWORD *)v13 = v12;
    *((_QWORD *)v13 + 1) = v12;
    *((_QWORD *)v13 + 2) = v12;
    *((_WORD *)v13 + 12) = 0;
    v16 = v9;
    inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>>::_Insert_node(
                 a1,
                 (__int64)&v16,
                 (__int64)v13);
    v10 = 1;
  }
  *(_QWORD *)a2 = inserted;
  *(_BYTE *)(a2 + 8) = v10;
  return a2;
}
