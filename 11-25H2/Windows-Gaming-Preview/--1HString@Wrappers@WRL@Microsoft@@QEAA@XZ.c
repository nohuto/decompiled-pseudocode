/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18000D340
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetAllLastRunProcessPaths_::_1_::dtor$1 @ 0x18004351A (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetAllLastRunProcessPa.c)
 *     _SetRelatedProcessesToGameConfigStore_::_1_::dtor$1 @ 0x18004352C (_SetRelatedProcessesToGameConfigStore_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig_::_1_::dtor$4 @ 0x18004353E (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_AttachGameModeConfig_--_1_--d.c)
 *     __lambda_e30f9dfe56fd89cbeec2250555549c57_::operator()_::_1_::dtor$1 @ 0x180043550 (__lambda_e30f9dfe56fd89cbeec2250555549c57_--operator()_--_1_--dtor$1.c)
 *     __lambda_e30f9dfe56fd89cbeec2250555549c57_::operator()_::_1_::dtor$7 @ 0x1800435D7 (__lambda_e30f9dfe56fd89cbeec2250555549c57_--operator()_--_1_--dtor$7.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::dtor$11 @ 0x1800435FB (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterTile_--_1_--dtor$11.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$14 @ 0x180043790 (_JsonDocumentFromGameConfigValues_--_1_--dtor$14.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$3 @ 0x1800438A1 (_SerializeRelatedProcessArray_--_1_--dtor$3.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$4 @ 0x1800438B3 (_SerializeRelatedProcessArray_--_1_--dtor$4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$1 @ 0x180043C69 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDisplayInfo_--_1.c)
 *     __lambda_75b78523e3da460933f50e5d76bfa16b_::operator()_::_1_::dtor$5 @ 0x180043D6C (__lambda_75b78523e3da460933f50e5d76bfa16b_--operator()_--_1_--dtor$5.c)
 *     __lambda_75b78523e3da460933f50e5d76bfa16b_::operator()_::_1_::dtor$6 @ 0x180043D90 (__lambda_75b78523e3da460933f50e5d76bfa16b_--operator()_--_1_--dtor$6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$8 @ 0x180043DFC (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180043DFC.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$1 @ 0x180043E44 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGameConfigStore.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$16 @ 0x180043E68 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180043E68.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_SetTitleIdInternal_::_1_::dtor$0 @ 0x180043E8C (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_SetTitleIdInternal_--_1_--dto.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues_::_1_::dtor$1 @ 0x180043EC2 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_LoadProp_ea_180043EC2.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
