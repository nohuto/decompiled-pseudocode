/*
 * XREFs of ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x180036D98
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800300E8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032328 (-_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJ.c)
 * Callees:
 *     ??$_Find_lower_bound@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@std@@@1@AEBU_GUID@@@Z @ 0x180036544 (--$_Find_lower_bound@U_GUID@@@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@Executio.c)
 *     memcmp_0 @ 0x180043064 (memcmp_0.c)
 */

const struct ExecutionModel::GameConfig *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        struct _GUID *a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rdi
  __int64 *v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  if ( !*(_QWORD *)&a2->Data1 && !*(_QWORD *)a2->Data4 && *((_QWORD *)this + 11) )
    return *(const struct ExecutionModel::GameConfig **)(**((_QWORD **)this + 10) + 48LL);
  v5 = (_QWORD *)((char *)this + 80);
  std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Find_lower_bound<_GUID>(
    (__int64)this + 80,
    &v7,
    a2);
  v6 = v8;
  if ( !*(_BYTE *)(v8 + 25) && memcmp_0(a2, (const void *)(v8 + 32), 0x10uLL) >= 0 && v6 != *v5 )
    return *(const struct ExecutionModel::GameConfig **)(v6 + 48);
  return (const struct ExecutionModel::GameConfig *)v2;
}
