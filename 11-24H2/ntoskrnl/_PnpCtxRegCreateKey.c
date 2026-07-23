/*
 * XREFs of _PnpCtxRegCreateKey @ 0x140A49664
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A0600 (PipUpdateDeviceProducts.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407350DC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140735670 (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x14081CD50 (_CmAddPanelDeviceWorker.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409273B0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140C235F4 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C27790 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C279A0 (PipCommitPendingService.c)
 * Callees:
 *     _SysCtxRegCreateKey @ 0x140A496BC (_SysCtxRegCreateKey.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // rax

  v6 = a1;
  LODWORD(a1) = 0;
  if ( v6 )
    a1 = *(_QWORD *)(v6 + 224);
  return SysCtxRegCreateKey(a1, a2, a3, a4, a5, a6);
}
