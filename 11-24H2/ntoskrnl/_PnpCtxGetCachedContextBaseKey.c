/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1408C7E7C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14071A024 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x140722F44 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14072A8A4 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x14072F5B8 (PnprGetPluginDriverImagePath.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140817FD8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408184FC (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14081983C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14081A14C (_CmGetDevicesInBaseContainerList.c)
 *     _CmGetMatchingDeviceContainerList @ 0x14081A3A4 (_CmGetMatchingDeviceContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081A760 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14081B96C (_CmGetMatchingCommonClassListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14081BC80 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14081CC34 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14081D770 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14081DB50 (_CmRemovePanelDeviceWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14081F7C4 (_CmSetInstallerClassMappedProperty.c)
 *     NtDisableLastKnownGood @ 0x14082A700 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x14082A820 (NtEnableLastKnownGood.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1408B77A0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C8D6C (_CmOpenCommonClassRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x140925AF8 (DrvDbLoadDatabaseNode.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1409642EC (_PnpCtxOpenContextBaseKey.c)
 *     PiCMEnumerateSubKeys @ 0x14099245C (PiCMEnumerateSubKeys.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B355C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140A582C0 (PipMakeGloballyUniqueId.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A797FC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A815F8 (_CmOpenDevicePanelRegKeyWorker.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A912F4 (PiDevCfgConfigureDeviceLocation.c)
 *     PiCMDeleteDeviceKey @ 0x140ABCF28 (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigOpenKey @ 0x140ABF208 (PipHardwareConfigOpenKey.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     PipHardwareConfigInit @ 0x140C20B04 (PipHardwareConfigInit.c)
 *     PipMigratePnpState @ 0x140C215B4 (PipMigratePnpState.c)
 *     PnpOpenCCSPnpRegKey @ 0x140C23448 (PnpOpenCCSPnpRegKey.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C25740 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C25950 (PipCommitPendingService.c)
 *     PipProcessPendingOsExtensionResources @ 0x140C25F44 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140C25FEC (PipProcessPendingServices.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C7D10 (_PnpCtxGetCachedNodeBaseKey.c)
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
