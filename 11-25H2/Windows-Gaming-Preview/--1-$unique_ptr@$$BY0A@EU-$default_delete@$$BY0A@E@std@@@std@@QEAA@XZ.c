/*
 * XREFs of ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ @ 0x180013FE8
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues_::_1_::dtor$3 @ 0x1800437A2 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_LoadPropertyValues_--.c)
 *     _DoWorkOnGameConfigStore_::_1_::dtor$2 @ 0x1800437C6 (_DoWorkOnGameConfigStore_--_1_--dtor$2.c)
 *     _GetGameFromGameConfigStore_::_1_::dtor$0 @ 0x18004381A (_GetGameFromGameConfigStore_--_1_--dtor$0.c)
 *     __lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator()_::_1_::dtor$10 @ 0x180043A84 (__lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator()_--_1_--dtor$10.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry_::_1_::dtor$0 @ 0x180043C0F (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_AddGameCon_ea_180043C0F.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$0 @ 0x180043FF4 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryFromGameConfig_::_1_::dtor$0 @ 0x18004403C (_CQueryKnownGameList--GetGameEntryFromGameConfig_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<unsigned char [0]>::~unique_ptr<unsigned char [0]>(
        void **a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2, a2);
}
