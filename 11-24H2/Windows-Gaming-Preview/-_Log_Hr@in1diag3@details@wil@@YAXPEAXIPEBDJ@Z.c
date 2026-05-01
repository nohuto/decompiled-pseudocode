/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001087C
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000F554 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000FC30 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shi.c)
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800108AC (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     _lambda_d5146fe69570c6dcc5cf92f3d06ab487_::operator() @ 0x180011ABC (_lambda_d5146fe69570c6dcc5cf92f3d06ab487_--operator().c)
 *     ?GetLogo@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x1800120B0 (-GetLogo@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foun.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Storage::FileProperties::StorageItemThumbnail___Windows::Storage::Streams::IRandomAccessStreamWithContentType_____::_)(Windows::Foundation::IAsyncOperation_Windows::Storage::FileProperties::StorageItemThumbnail______enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::FileProperties::StorageItemThumbnail_____lambda_f58f8da4eea7e22484edf0ed17ac24c6___1_Windows::Foundation::IAsyncOperation_Windows::Storage::FileProperties::StorageItemThumbnail______enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x180012380 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_180012380.c)
 *     ?get_DisplayName@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180013BF0 (-get_DisplayName@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPE.c)
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x18001448C (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180016388 (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     ??0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18001877C (--0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ??1GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180019534 (--1GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180021768 (-RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 *     ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x180022EE0 (-_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ??1GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@EEAA@XZ @ 0x180025BD4 (--1GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@EEAA@XZ.c)
 *     ?LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x18002B4D0 (-LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyncOpe.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002E874 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002EA28 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800300E8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180030FE0 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031F78 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032328 (-_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJ.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032520 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180034BE0 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     ?GetAllGameConfigStoreIds@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x180036820 (-GetAllGameConfigStoreIds@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@Q.c)
 *     ?GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x1800368F4 (-GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180036CE0 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ?GetKglDefaultsAsJson@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180036E3C (-GetKglDefaultsAsJson@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 *     ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037EB8 (-_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     ??0GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180039540 (--0GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     _lambda_e30f9dfe56fd89cbeec2250555549c57_::operator() @ 0x1800396C8 (_lambda_e30f9dfe56fd89cbeec2250555549c57_--operator().c)
 *     ?LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003B058 (-LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?LoadKglThreadProc@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003B450 (-LoadKglThreadProc@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INST.c)
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003BBA4 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003BFE0 (-PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CAL.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x18000387C (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((__int64)this, (int)a2, a3, 0LL, 0LL, retaddr, v4);
}
