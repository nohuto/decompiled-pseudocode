/*
 * XREFs of _PnpCtxRegCreateKey @ 0x140A51DD4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407371AC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140737740 (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x14081C610 (_CmAddPanelDeviceWorker.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140925270 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1409254F0 (DrvDbOpenObjectRegKey.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140C215B4 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C25740 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C25950 (PipCommitPendingService.c)
 * Callees:
 *     _SysCtxRegCreateKey @ 0x140A51E2C (_SysCtxRegCreateKey.c)
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
