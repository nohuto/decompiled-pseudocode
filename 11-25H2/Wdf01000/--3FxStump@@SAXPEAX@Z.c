/*
 * XREFs of ??3FxStump@@SAXPEAX@Z @ 0x140008FB4
 * Callers:
 *     ??_EFxUsbPipeTransferContext@@UEAAPEAXI@Z @ 0x1400083C0 (--_EFxUsbPipeTransferContext@@UEAAPEAXI@Z.c)
 *     ??_EFxUsbRequestContext@@UEAAPEAXI@Z @ 0x1400087E0 (--_EFxUsbRequestContext@@UEAAPEAXI@Z.c)
 *     imp_WdfCollectionRemoveItem @ 0x140008810 (imp_WdfCollectionRemoveItem.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x140008A90 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x140008F8C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140019AD4 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x14001DE8C (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x14004A608 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x14004AA98 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ??_EFxCallbackSpinLock@@UEAAPEAXI@Z @ 0x14004B240 (--_EFxCallbackSpinLock@@UEAAPEAXI@Z.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x14004B5B8 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14004BB3C (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxPkgGeneral@@UEAA@XZ @ 0x14004BDA4 (--1FxPkgGeneral@@UEAA@XZ.c)
 *     ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x14004C63C (--1FxPowerPolicyMachine@@QEAA@XZ.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x14004C7E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x14004D4A8 (--1FxDevice@@UEAA@XZ.c)
 *     ??_EFxUsbDeviceControlContext@@UEAAPEAXI@Z @ 0x140064410 (--_EFxUsbDeviceControlContext@@UEAAPEAXI@Z.c)
 *     ??_EFxInternalIoctlOthersContext@@UEAAPEAXI@Z @ 0x14006C830 (--_EFxInternalIoctlOthersContext@@UEAAPEAXI@Z.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x140074470 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x14007D194 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x14007DB80 (--_GFxEnumerationInfo@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x14007EB90 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1400823EC (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ??_EFxCallbackLock@@UEAAPEAXI@Z @ 0x1400947A0 (--_EFxCallbackLock@@UEAAPEAXI@Z.c)
 *     ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x1400947D0 (--_GFxCallbackMutexLock@@UEAAPEAXI@Z.c)
 *     ??1FxCxDeviceInfo@@QEAA@XZ @ 0x1400952F0 (--1FxCxDeviceInfo@@QEAA@XZ.c)
 *     ??1FxTagTrackingBlock@@QEAA@XZ @ 0x140096F60 (--1FxTagTrackingBlock@@QEAA@XZ.c)
 *     ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1400977A0 (--_GFxTagTrackingBlock@@QEAAPEAXI@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x14009A3F8 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 *     ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x14009DA88 (--_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z.c)
 *     ??_EFxUsbPipeRequestContext@@UEAAPEAXI@Z @ 0x14009DAB0 (--_EFxUsbPipeRequestContext@@UEAAPEAXI@Z.c)
 *     ??_GFxUsbDeviceStringContext@@UEAAPEAXI@Z @ 0x14009E7F0 (--_GFxUsbDeviceStringContext@@UEAAPEAXI@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1400A6F98 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1400A795C (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1400A9118 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxStump::operator delete(void *pointer)
{
  if ( pointer )
    FxPoolFree(pointer);
}
