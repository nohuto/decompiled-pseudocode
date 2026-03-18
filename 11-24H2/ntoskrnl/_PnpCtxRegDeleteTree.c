/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x140A845DC
 * Callers:
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140817FD8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408184FC (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14081983C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081A760 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14081CC34 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14081DB50 (_CmRemovePanelDeviceWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x1408215CC (DrvDbDeleteObjectSubKey.c)
 *     PiDevCfgFreeVariable @ 0x1409648DC (PiDevCfgFreeVariable.c)
 *     PiDevCfgInitResolveContext @ 0x140964944 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140964AB8 (PiDevCfgConfigureSoftwareDevices.c)
 *     _PnpSetPropertyWorker @ 0x14099197C (_PnpSetPropertyWorker.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140996D60 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x14099BA04 (PiDevCfgCopyDeviceKey.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A797FC (_CmDeleteDeviceRegKeyWorker.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A84170 (PpDevCfgProcessDeviceReset.c)
 *     PiDqDeleteUserObject @ 0x140A84438 (PiDqDeleteUserObject.c)
 *     PipHardwareConfigActivateService @ 0x140A84510 (PipHardwareConfigActivateService.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A847DC (PiDevCfgResetDeviceDriverSettings.c)
 *     PipMigrateCleanService @ 0x140C21454 (PipMigrateCleanService.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C25740 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C25950 (PipCommitPendingService.c)
 *     PipInitComputerIds @ 0x140C63B74 (PipInitComputerIds.c)
 * Callees:
 *     _RegRtlDeleteTreeInternal @ 0x140991230 (_RegRtlDeleteTreeInternal.c)
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
