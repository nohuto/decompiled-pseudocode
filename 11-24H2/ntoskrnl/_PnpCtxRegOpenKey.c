/*
 * XREFs of _PnpCtxRegOpenKey @ 0x1408C552C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A0600 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14069D1E0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140717AE0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140718298 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PnpCheckDriverDependencies @ 0x140720AD4 (PnpCheckDriverDependencies.c)
 *     PnpRegCopyKeySecurity @ 0x1407211BC (PnpRegCopyKeySecurity.c)
 *     PnpRegCopyKeySecurityTree @ 0x1407212EC (PnpRegCopyKeySecurityTree.c)
 *     PiPnpRtlInit @ 0x1407247D4 (PiPnpRtlInit.c)
 *     PiDevCfgCopyVariableData @ 0x140726FB8 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x140727F68 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140728A48 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbCreateNode @ 0x1407347DC (PiDrvDbCreateNode.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407350DC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140735670 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x140735ABC (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbRegisterNode @ 0x140736338 (PiDrvDbRegisterNode.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407368E0 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140737084 (PiDrvDbResolveNodeFilePaths.c)
 *     _PnpCtxOpenContextNodeBaseKey @ 0x140817D34 (_PnpCtxOpenContextNodeBaseKey.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x14081A4A8 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14081A88C (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081AEA0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmClassSubkeyCallback @ 0x14081B650 (_CmClassSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B760 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14081BC70 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14081C3C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14081D7D0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmRemovePanelDeviceWorker @ 0x14081E290 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14081E5C4 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x140821D0C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140824998 (DrvDbInitializeDatabaseNodeVersion.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1408AF360 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1408B5110 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C4460 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C679C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408C88C8 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiDqOpenUserObjectRegKey @ 0x1408E1780 (PiDqOpenUserObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409273B0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140927C38 (DrvDbLoadDatabaseNode.c)
 *     PiDrvDbLoadNode @ 0x140928080 (PiDrvDbLoadNode.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14094C0C4 (_PnpCtxOpenContextBaseKey.c)
 *     PnpGetServiceStartType @ 0x140983428 (PnpGetServiceStartType.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409AA8EC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A640A4 (PiDevCfgClearDeviceMigrationNode.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A7C058 (_CmOpenDevicePanelRegKeyWorker.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A85194 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiCMDeleteDeviceKey @ 0x140AB7F94 (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigOpenKey @ 0x140ABA270 (PipHardwareConfigOpenKey.c)
 *     PipHardwareConfigExists @ 0x140C22A04 (PipHardwareConfigExists.c)
 *     PipMigratePnpState @ 0x140C235F4 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x140C23C80 (PipMigrateServiceCallback.c)
 *     PipResetDevices @ 0x140C23FB0 (PipResetDevices.c)
 *     PipResetMatchingFilteredDevices @ 0x140C24080 (PipResetMatchingFilteredDevices.c)
 *     PpDevCfgInit @ 0x140C26FC4 (PpDevCfgInit.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C27790 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C279A0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140C27D30 (PipProcessPendingObjects.c)
 *     PipProcessPendingOsExtensionResources @ 0x140C27F94 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140C2803C (PipProcessPendingServices.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rcx

  v6 = 0LL;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 224);
    if ( v7 )
      v6 = *(_QWORD *)(v7 + 8);
  }
  return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, v6);
}
