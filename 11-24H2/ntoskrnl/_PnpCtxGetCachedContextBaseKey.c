/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A0600 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140717BB4 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x140720AD4 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1407284F4 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x14072D5C8 (PnprGetPluginDriverImagePath.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140818718 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140818C3C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140819F7C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14081A88C (_CmGetDevicesInBaseContainerList.c)
 *     _CmGetMatchingDeviceContainerList @ 0x14081AAE4 (_CmGetMatchingDeviceContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081AEA0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14081C0AC (_CmGetMatchingCommonClassListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14081C3C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14081D374 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14081DEB0 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14081E290 (_CmRemovePanelDeviceWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14081FF04 (_CmSetInstallerClassMappedProperty.c)
 *     NtDisableLastKnownGood @ 0x14082AF30 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x14082B050 (NtEnableLastKnownGood.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1408B5110 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C679C (_CmOpenCommonClassRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x140927C38 (DrvDbLoadDatabaseNode.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14094C0C4 (_PnpCtxOpenContextBaseKey.c)
 *     PiCMEnumerateSubKeys @ 0x14097D49C (PiCMEnumerateSubKeys.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409AA8EC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140A4FA70 (PipMakeGloballyUniqueId.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A73AFC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A7C058 (_CmOpenDevicePanelRegKeyWorker.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A8DA98 (PiDevCfgConfigureDeviceLocation.c)
 *     PiCMDeleteDeviceKey @ 0x140AB7F94 (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigOpenKey @ 0x140ABA270 (PipHardwareConfigOpenKey.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     PipHardwareConfigInit @ 0x140C22B44 (PipHardwareConfigInit.c)
 *     PipMigratePnpState @ 0x140C235F4 (PipMigratePnpState.c)
 *     PnpOpenCCSPnpRegKey @ 0x140C25478 (PnpOpenCCSPnpRegKey.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C27790 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C279A0 (PipCommitPendingService.c)
 *     PipProcessPendingOsExtensionResources @ 0x140C27F94 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140C2803C (PipProcessPendingServices.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C5740 (_PnpCtxGetCachedNodeBaseKey.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v4; // rax
  int v6; // ecx
  __int64 v7; // rcx

  v4 = *(_QWORD **)(a1 + 8LL * a2 + 96);
  if ( !v4 )
  {
    if ( a2 > 10 )
    {
      if ( a2 != 11 )
      {
        if ( a2 == 12 || a2 == 13 )
          goto LABEL_17;
        v6 = a2 - 14;
        if ( a2 != 14 )
          goto LABEL_15;
      }
    }
    else if ( a2 != 10 )
    {
      if ( a2 == 4 )
        goto LABEL_17;
      if ( a2 != 5 )
      {
        if ( a2 == 6 )
          goto LABEL_17;
        if ( a2 == 7 )
          goto LABEL_17;
        v6 = a2 - 8;
        if ( a2 == 8 )
          goto LABEL_17;
LABEL_15:
        if ( v6 != 1 )
          goto LABEL_17;
      }
    }
    v7 = *(_QWORD *)(a1 + 56);
    v4 = (_QWORD *)(v7 - 16);
    if ( v7 != a1 + 56 )
    {
LABEL_18:
      *(_QWORD *)(a1 + 8LL * a2 + 96) = v4;
      return PnpCtxGetCachedNodeBaseKey(a1, v4, a2, a3);
    }
LABEL_17:
    v4 = *(_QWORD **)(a1 + 88);
    goto LABEL_18;
  }
  return PnpCtxGetCachedNodeBaseKey(a1, v4, a2, a3);
}
