/*
 * XREFs of ?FxPoolFree@@YAXPEAX@Z @ 0x140034320
 * Callers:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140011E70 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ @ 0x140012BC4 (-Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x140015500 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x140019C10 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14002C3B0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     FxIoTargetSendIoctl @ 0x14002E630 (FxIoTargetSendIoctl.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x14002EF20 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x140032A20 (--1FxRequestBase@@MEAA@XZ.c)
 *     FxIoTargetSendIo @ 0x140032D90 (FxIoTargetSendIo.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x140033740 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x140034280 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1400343DC (--1FxIoContext@@UEAA@XZ.c)
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x140034510 (-FinalRelease@FxObject@@AEAAXXZ.c)
 *     imp_WdfObjectAllocateContext @ 0x140034B00 (imp_WdfObjectAllocateContext.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x140034F10 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1400401C0 (imp_WdfRegistryQueryMultiString.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x140044A20 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ??1FxDeviceInterface@@QEAA@XZ @ 0x14004A630 (--1FxDeviceInterface@@QEAA@XZ.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x14004A848 (--1FxDriver@@UEAA@XZ.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x14004A92C (--1FxUsbDevice@@MEAA@XZ.c)
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x14004B938 (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14004BB3C (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14004C320 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x14004C794 (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x14004C7E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x14004D238 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x14004D4A8 (--1FxDevice@@UEAA@XZ.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x14004D7F0 (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x14004F6F8 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1400515D4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x140051C00 (imp_WdfRegistryQueryUnicodeString.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x140053538 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     imp_WdfRegistryQueryString @ 0x140054630 (imp_WdfRegistryQueryString.c)
 *     FxGetDevicePropertyString @ 0x140054D6C (FxGetDevicePropertyString.c)
 *     imp_WdfRegistryQueryMemory @ 0x1400551D0 (imp_WdfRegistryQueryMemory.c)
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1400566BC (--1FxPagedObject@@UEAA@XZ.c)
 *     ??1FxString@@UEAA@XZ @ 0x140056768 (--1FxString@@UEAA@XZ.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140056A50 (--1FxObject@@UEAA@XZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x140057420 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14005A73C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x14005AEF8 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     imp_WdfCollectionRemove @ 0x140062F90 (imp_WdfCollectionRemove.c)
 *     imp_WdfDriverCreate @ 0x14006CBA0 (imp_WdfDriverCreate.c)
 *     ??1FxQueryInterface@@QEAA@XZ @ 0x140074498 (--1FxQueryInterface@@QEAA@XZ.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x140074908 (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x140074A30 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ??1Info@FxIrpPreprocessInfo@@QEAA@XZ @ 0x140078C10 (--1Info@FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x14007C774 (--1FxAutoString@@QEAA@XZ.c)
 *     LogDriverInfoStream @ 0x14007C9B0 (LogDriverInfoStream.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x14007F5F0 (--1FxUsbInterface@@MEAA@XZ.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1400827DC (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x140083284 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 *     ??1FxDeviceText@@QEAA@XZ @ 0x1400832AC (--1FxDeviceText@@QEAA@XZ.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x14008EC6C (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140094CF8 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140097D8C (-FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1400997A0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x140099A30 (imp_WdfRegistryAssignUnicodeString.c)
 *     ?_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z @ 0x14009A0EC (-_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z.c)
 *     ??1FxUsbDeviceStringContext@@UEAA@XZ @ 0x14009E770 (--1FxUsbDeviceStringContext@@UEAA@XZ.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x14009E828 (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009F3F4 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x14009F97C (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009FF84 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A02F0 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1400A13EC (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1400A2820 (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 *     AddEventHooksWdfDeviceCreate @ 0x1400E1A7C (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1400E1E00 (AddEventHooksWdfIoQueueCreate.c)
 *     VfAddContextToHandle @ 0x1400E2070 (VfAddContextToHandle.c)
 * Callees:
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x14008192C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1400959E8 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     memset @ 0x1400AC740 (memset.c)
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
