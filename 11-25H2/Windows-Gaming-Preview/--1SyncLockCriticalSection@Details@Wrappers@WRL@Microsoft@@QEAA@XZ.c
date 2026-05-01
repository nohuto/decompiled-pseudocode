/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180025E70
 * Callers:
 *     __lambda_75b78523e3da460933f50e5d76bfa16b_::operator()_::_1_::dtor$4 @ 0x180043D7E (__lambda_75b78523e3da460933f50e5d76bfa16b_--operator()_--_1_--dtor$4.c)
 *     __lambda_ef8eb52c9e6883c3173b82c9be862a9c_::operator()_::_1_::dtor$2 @ 0x180043DA2 (__lambda_ef8eb52c9e6883c3173b82c9be862a9c_--operator()_--_1_--dtor$2.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName_::_1_::dtor$0 @ 0x180043E0E (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializePackageFamilyName_-.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId_::_1_::dtor$0 @ 0x180043E7A (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeTitleId_--_1_--dtor.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$0 @ 0x180043ED4 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGa_ea_180043ED4.c)
 *     __lambda_e30f9dfe56fd89cbeec2250555549c57_::operator()_::_1_::dtor$0 @ 0x180043EE6 (__lambda_e30f9dfe56fd89cbeec2250555549c57_--operator()_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync_::_1_::dtor$0 @ 0x180043F76 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateAsync_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
