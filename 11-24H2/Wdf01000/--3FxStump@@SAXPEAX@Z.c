/*
 * XREFs of ??3FxStump@@SAXPEAX@Z @ 0x1400216E4
 * Callers:
 *     ??_EFxUsbPipeTransferContext@@UEAAPEAXI@Z @ 0x140020AF0 (--_EFxUsbPipeTransferContext@@UEAAPEAXI@Z.c)
 *     ??_EFxUsbRequestContext@@UEAAPEAXI@Z @ 0x140020F10 (--_EFxUsbRequestContext@@UEAAPEAXI@Z.c)
 *     imp_WdfCollectionRemoveItem @ 0x140020F40 (imp_WdfCollectionRemoveItem.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1400211C0 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1400216BC (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400313F4 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1400356AC (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x14003E7E8 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x14003EC78 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ??_EFxCallbackSpinLock@@UEAAPEAXI@Z @ 0x14003F420 (--_EFxCallbackSpinLock@@UEAAPEAXI@Z.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x14003F798 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14003FD1C (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxPkgGeneral@@UEAA@XZ @ 0x14003FF84 (--1FxPkgGeneral@@UEAA@XZ.c)
 *     ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x14004081C (--1FxPowerPolicyMachine@@QEAA@XZ.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1400409C0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x140041688 (--1FxDevice@@UEAA@XZ.c)
 *     ??_EFxUsbDeviceControlContext@@UEAAPEAXI@Z @ 0x140062D70 (--_EFxUsbDeviceControlContext@@UEAAPEAXI@Z.c)
 *     ??_EFxInternalIoctlOthersContext@@UEAAPEAXI@Z @ 0x14006B650 (--_EFxInternalIoctlOthersContext@@UEAAPEAXI@Z.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x140073EA0 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x14007CE60 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x14007D840 (--_GFxEnumerationInfo@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x14007E7C0 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1400823DC (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ??_EFxCallbackLock@@UEAAPEAXI@Z @ 0x140094800 (--_EFxCallbackLock@@UEAAPEAXI@Z.c)
 *     ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x140094830 (--_GFxCallbackMutexLock@@UEAAPEAXI@Z.c)
 *     ??1FxCxDeviceInfo@@QEAA@XZ @ 0x140095350 (--1FxCxDeviceInfo@@QEAA@XZ.c)
 *     ??1FxTagTrackingBlock@@QEAA@XZ @ 0x140096FA0 (--1FxTagTrackingBlock@@QEAA@XZ.c)
 *     ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1400977E0 (--_GFxTagTrackingBlock@@QEAAPEAXI@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x14009A4D4 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 *     ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x14009DB58 (--_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z.c)
 *     ??_EFxUsbPipeRequestContext@@UEAAPEAXI@Z @ 0x14009DB80 (--_EFxUsbPipeRequestContext@@UEAAPEAXI@Z.c)
 *     ??_GFxUsbDeviceStringContext@@UEAAPEAXI@Z @ 0x14009E8C0 (--_GFxUsbDeviceStringContext@@UEAAPEAXI@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1400A7068 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1400A7A2C (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1400A91E8 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxStump::operator delete(_QWORD *pointer)
{
  if ( pointer )
    FxPoolFree(pointer);
}
