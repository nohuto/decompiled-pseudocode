/*
 * XREFs of _PnpCtxRegOpenKey @ 0x1408C7AFC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14069C160 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140719F50 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14071A708 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PnpCheckDriverDependencies @ 0x140722F44 (PnpCheckDriverDependencies.c)
 *     PnpRegCopyKeySecurity @ 0x14072362C (PnpRegCopyKeySecurity.c)
 *     PnpRegCopyKeySecurityTree @ 0x14072375C (PnpRegCopyKeySecurityTree.c)
 *     PiPnpRtlInit @ 0x140726C44 (PiPnpRtlInit.c)
 *     PiDevCfgCopyVariableData @ 0x1407293B8 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14072A318 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072AC78 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbCreateNode @ 0x1407368AC (PiDrvDbCreateNode.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407371AC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140737740 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x140737B8C (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbRegisterNode @ 0x140738408 (PiDrvDbRegisterNode.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407389B0 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140739154 (PiDrvDbResolveNodeFilePaths.c)
 *     _PnpCtxOpenContextNodeBaseKey @ 0x1408175F4 (_PnpCtxOpenContextNodeBaseKey.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140819D68 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14081A14C (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081A760 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmClassSubkeyCallback @ 0x14081AF10 (_CmClassSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B020 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14081B530 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14081BC80 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14081D090 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmRemovePanelDeviceWorker @ 0x14081DB50 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14081DE84 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x1408215CC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140824258 (DrvDbInitializeDatabaseNodeVersion.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B1A6C (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1408B77A0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C6A30 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C8D6C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408CAE98 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiDqOpenUserObjectRegKey @ 0x14090A064 (PiDqOpenUserObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092430C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140925270 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1409254F0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140925AF8 (DrvDbLoadDatabaseNode.c)
 *     PiDrvDbLoadNode @ 0x140925F40 (PiDrvDbLoadNode.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1409642EC (_PnpCtxOpenContextBaseKey.c)
 *     PiDevCfgMigrateDevice @ 0x14099A6AC (PiDevCfgMigrateDevice.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B355C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     PnpGetServiceStartType @ 0x1409C6184 (PnpGetServiceStartType.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A6A994 (PiDevCfgClearDeviceMigrationNode.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A815F8 (_CmOpenDevicePanelRegKeyWorker.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A88D94 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiCMDeleteDeviceKey @ 0x140ABCF28 (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigOpenKey @ 0x140ABF208 (PipHardwareConfigOpenKey.c)
 *     PipHardwareConfigExists @ 0x140C209C4 (PipHardwareConfigExists.c)
 *     PipMigratePnpState @ 0x140C215B4 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x140C21C40 (PipMigrateServiceCallback.c)
 *     PipResetDevices @ 0x140C21F70 (PipResetDevices.c)
 *     PipResetMatchingFilteredDevices @ 0x140C22040 (PipResetMatchingFilteredDevices.c)
 *     PpDevCfgInit @ 0x140C24F94 (PpDevCfgInit.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C25740 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C25950 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140C25CE0 (PipProcessPendingObjects.c)
 *     PipProcessPendingOsExtensionResources @ 0x140C25F44 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140C25FEC (PipProcessPendingServices.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x1408C7B60 (_RegRtlOpenKeyTransacted.c)
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
