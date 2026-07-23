/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x140A7F11C
 * Callers:
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140818718 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140818C3C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140819F7C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081AEA0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14081D374 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14081E290 (_CmRemovePanelDeviceWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140821D0C (DrvDbDeleteObjectSubKey.c)
 *     PiDevCfgFreeVariable @ 0x14094C6B4 (PiDevCfgFreeVariable.c)
 *     PiDevCfgInitResolveContext @ 0x14094C71C (PiDevCfgInitResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x14094C890 (PiDevCfgConfigureSoftwareDevices.c)
 *     _PnpSetPropertyWorker @ 0x14097C9BC (_PnpSetPropertyWorker.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1409C94B4 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A73AFC (_CmDeleteDeviceRegKeyWorker.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A7EC90 (PpDevCfgProcessDeviceReset.c)
 *     PiDqDeleteUserObject @ 0x140A7EF78 (PiDqDeleteUserObject.c)
 *     PipHardwareConfigActivateService @ 0x140A7F050 (PipHardwareConfigActivateService.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A7F31C (PiDevCfgResetDeviceDriverSettings.c)
 *     PipMigrateCleanService @ 0x140C23494 (PipMigrateCleanService.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C27790 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C279A0 (PipCommitPendingService.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 * Callees:
 *     _RegRtlDeleteTreeInternal @ 0x14097C270 (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall PnpCtxRegDeleteTree(__int64 a1, __int64 a2, const WCHAR *a3)
{
  __int64 v4; // r8
  __int64 v5; // rax

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 224);
    if ( v5 )
      v4 = *(_QWORD *)(v5 + 8);
  }
  return RegRtlDeleteTreeInternal(a2, a3, v4, 0);
}
