/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18000D410
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetAllLastRunProcessPaths_::_1_::dtor$1 @ 0x1800436CA (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetAllLastRunProcessPa.c)
 *     _SetRelatedProcessesToGameConfigStore_::_1_::dtor$1 @ 0x1800436DC (_SetRelatedProcessesToGameConfigStore_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig_::_1_::dtor$4 @ 0x1800436EE (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_AttachGameModeConfig_--_1_--d.c)
 *     __lambda_e30f9dfe56fd89cbeec2250555549c57_::operator()_::_1_::dtor$1 @ 0x180043700 (__lambda_e30f9dfe56fd89cbeec2250555549c57_--operator()_--_1_--dtor$1.c)
 *     __lambda_e30f9dfe56fd89cbeec2250555549c57_::operator()_::_1_::dtor$7 @ 0x180043787 (__lambda_e30f9dfe56fd89cbeec2250555549c57_--operator()_--_1_--dtor$7.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::dtor$11 @ 0x1800437AB (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterTile_--_1_--dtor$11.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$14 @ 0x180043940 (_JsonDocumentFromGameConfigValues_--_1_--dtor$14.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$3 @ 0x180043A51 (_SerializeRelatedProcessArray_--_1_--dtor$3.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$4 @ 0x180043A63 (_SerializeRelatedProcessArray_--_1_--dtor$4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$1 @ 0x180043E07 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDisplayInfo_--_1.c)
 *     __lambda_75b78523e3da460933f50e5d76bfa16b_::operator()_::_1_::dtor$5 @ 0x180043F0A (__lambda_75b78523e3da460933f50e5d76bfa16b_--operator()_--_1_--dtor$5.c)
 *     __lambda_75b78523e3da460933f50e5d76bfa16b_::operator()_::_1_::dtor$6 @ 0x180043F2E (__lambda_75b78523e3da460933f50e5d76bfa16b_--operator()_--_1_--dtor$6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$8 @ 0x180043F9A (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180043F9A.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$1 @ 0x180043FE2 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGameConfigStore.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$16 @ 0x180044006 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180044006.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_SetTitleIdInternal_::_1_::dtor$0 @ 0x18004402A (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_SetTitleIdInternal_--_1_--dto.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues_::_1_::dtor$1 @ 0x180044072 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_LoadProp_ea_180044072.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
