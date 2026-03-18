/*
 * XREFs of _PnpCtxRegDeleteKey @ 0x1406F8D28
 * Callers:
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140817FD8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408184FC (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14081983C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x14081C610 (_CmAddPanelDeviceWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14081CC34 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x1408215CC (DrvDbDeleteObjectSubKey.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1409095F0 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmAddDeviceToContainerWorker @ 0x140A547D0 (_CmAddDeviceToContainerWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A797FC (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x140A84438 (PiDqDeleteUserObject.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C25740 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C25950 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlDeleteKeyTransacted @ 0x140A6AF3C (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegDeleteKey(__int64 a1, __int64 a2, __int64 a3)
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
  return RegRtlDeleteKeyTransacted(a2, a3, v4);
}
