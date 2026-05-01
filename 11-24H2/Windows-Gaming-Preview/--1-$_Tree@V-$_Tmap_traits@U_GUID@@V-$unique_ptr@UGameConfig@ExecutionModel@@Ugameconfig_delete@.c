/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180019154
 * Callers:
 *     ??1?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x180019258 (--1-$map@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess.c)
 *     _lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator() @ 0x180019678 (_lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator().c)
 *     ??1GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180025E38 (--1GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@@Z @ 0x180017FA4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$unique_ptr@UGameConfig@Executio.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::~_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>(
        void **a1)
{
  __int64 *v2; // rbx
  const struct std::nothrow_t *v3; // rdx
  _QWORD *v4; // rsi
  void *v5; // rcx

  v2 = (__int64 *)*((_QWORD *)*a1 + 1);
  while ( !*((_BYTE *)v2 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      (__int64 *)v2[2]);
    v4 = v2;
    v2 = (__int64 *)*v2;
    v5 = (void *)v4[6];
    if ( v5 )
      operator delete(v5, v3);
    operator delete(v4, (const struct std::nothrow_t *)0x38);
  }
  operator delete(*a1, (const struct std::nothrow_t *)0x38);
}
