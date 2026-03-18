/*
 * XREFs of ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70
 * Callers:
 *     FxGetDevicePropertyString @ 0x140001D20 (FxGetDevicePropertyString.c)
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x140008D40 (-FinalRelease@FxObject@@AEAAXXZ.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14000BC50 (--1FxRequestBase@@MEAA@XZ.c)
 *     FxIoTargetSendIo @ 0x14000BF50 (FxIoTargetSendIo.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x14000C900 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x14000D440 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     FxIoTargetSendIoctl @ 0x14000D490 (FxIoTargetSendIoctl.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x14000DD80 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x14000EBB8 (--1FxIoContext@@UEAA@XZ.c)
 *     imp_WdfObjectAllocateContext @ 0x14000ED30 (imp_WdfObjectAllocateContext.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x14000F140 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14001CA30 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x14002A5A0 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ @ 0x14002B2F4 (-Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x140031530 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x14003BB80 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ??1FxDeviceInterface@@QEAA@XZ @ 0x14003E810 (--1FxDeviceInterface@@QEAA@XZ.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x14003EA28 (--1FxDriver@@UEAA@XZ.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x14003EB0C (--1FxUsbDevice@@MEAA@XZ.c)
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x14003FB18 (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14003FD1C (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x140040500 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x140040974 (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1400409C0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x140041418 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x140041688 (--1FxDevice@@UEAA@XZ.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1400419D0 (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x140043B58 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x140044EC0 (imp_WdfRegistryQueryUnicodeString.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1400455FC (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x14004A2C0 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x14004F8DC (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14004FC24 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x140050338 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x140050644 (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1400526CC (--1FxPagedObject@@UEAA@XZ.c)
 *     ??1FxString@@UEAA@XZ @ 0x140052778 (--1FxString@@UEAA@XZ.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140052A60 (--1FxObject@@UEAA@XZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x140053430 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     imp_WdfRegistryQueryString @ 0x14005DD10 (imp_WdfRegistryQueryString.c)
 *     imp_WdfCollectionRemove @ 0x140060090 (imp_WdfCollectionRemove.c)
 *     imp_WdfRegistryQueryMultiString @ 0x140062110 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfDriverCreate @ 0x14006B960 (imp_WdfDriverCreate.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14006D5F4 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??1FxQueryInterface@@QEAA@XZ @ 0x140073EC8 (--1FxQueryInterface@@QEAA@XZ.c)
 *     ??1Info@FxIrpPreprocessInfo@@QEAA@XZ @ 0x140078490 (--1Info@FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     imp_WdfRegistryQueryMemory @ 0x140078BE0 (imp_WdfRegistryQueryMemory.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x14007C414 (--1FxAutoString@@QEAA@XZ.c)
 *     LogDriverInfoStream @ 0x14007C650 (LogDriverInfoStream.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x14007F220 (--1FxUsbInterface@@MEAA@XZ.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1400827CC (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x140083274 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 *     ??1FxDeviceText@@QEAA@XZ @ 0x14008329C (--1FxDeviceText@@QEAA@XZ.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x14008ECCC (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140094D58 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140097DCC (-FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1400997E0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x140099A70 (imp_WdfRegistryAssignUnicodeString.c)
 *     ?_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z @ 0x14009A1C8 (-_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z.c)
 *     ??1FxUsbDeviceStringContext@@UEAA@XZ @ 0x14009E840 (--1FxUsbDeviceStringContext@@UEAA@XZ.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x14009E8F8 (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009F4C4 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x14009FA4C (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A0054 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A03C0 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1400A14BC (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1400A28F0 (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 *     AddEventHooksWdfDeviceCreate @ 0x1400E1A7C (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1400E1E00 (AddEventHooksWdfIoQueueCreate.c)
 *     VfAddContextToHandle @ 0x1400E2070 (VfAddContextToHandle.c)
 * Callees:
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x14008191C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x140095A48 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

void __fastcall FxPoolFree(_QWORD *ptr)
{
  __int64 v1; // rbx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( !ptr )
    KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
  if ( ((unsigned __int16)ptr & 0xFFF) != 0 )
  {
    v1 = *(ptr - 2);
    if ( *(_BYTE *)(*(ptr - 1) + 272LL) )
    {
      if ( (*(_DWORD *)(v1 + 40) & 0xFFFFFEFF) == 1 || (*(_DWORD *)(v1 + 40) & 0xFFFFFEFF) == 5 )
        FxPoolRemovePagedAllocateTracker((FX_POOL_TRACKER *)v1);
      else
        FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v1);
      memset((void *)v1, 0, *(_QWORD *)(v1 + 32) + 64LL);
    }
    ExFreePoolWithTag((PVOID)v1, 0);
  }
  else
  {
    ExFreePoolWithTag(ptr, 0);
  }
}
