/*
 * XREFs of VerifyIrqlExit @ 0x14008FCDC
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1400E2390 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1400E24C0 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1400E2560 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1400E2690 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1400E2730 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1400E2860 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1400E28F0 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1400E2980 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1400E2A20 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1400E2B50 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1400E2BE0 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1400E2C70 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1400E2D00 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1400E2D90 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1400E2E20 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1400E2EB0 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1400E2F60 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1400E3010 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1400E30A0 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1400E3260 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1400E3440 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1400E3620 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1400E37F0 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1400E3880 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1400E3970 (VfEvtIoWrite.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall VerifyIrqlExit(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int8 PrevIrql)
{
  unsigned int v2; // ebx
  KIRQL CurrentIrql; // al

  v2 = PrevIrql;
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)v2 != CurrentIrql )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_VERIFIER_IRQL_MISMATCH, v2, CurrentIrql);
}
