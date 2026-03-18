/*
 * XREFs of ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1400023A0 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x140002630 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfStringGetUnicodeString @ 0x1400059E0 (imp_WdfStringGetUnicodeString.c)
 *     imp_WdfRequestProbeAndLockUserBufferForWrite @ 0x140005A50 (imp_WdfRequestProbeAndLockUserBufferForWrite.c)
 *     imp_WdfRequestProbeAndLockUserBufferForRead @ 0x140007DD0 (imp_WdfRequestProbeAndLockUserBufferForRead.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x140014104 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x140017170 (imp_WdfIoQueueStopAndPurge.c)
 *     imp_WdfIoQueuePurge @ 0x1400171E0 (imp_WdfIoQueuePurge.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x14001A810 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceGetSystemPowerAction @ 0x14001B530 (imp_WdfDeviceGetSystemPowerAction.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140023128 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1400395F0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x140039700 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     imp_WdfWmiInstanceCreate @ 0x14003E060 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1400401C0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfInterruptQueueWorkItemForIsr @ 0x140046B10 (imp_WdfInterruptQueueWorkItemForIsr.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x140052260 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfRegistryQueryString @ 0x140054630 (imp_WdfRegistryQueryString.c)
 *     imp_WdfRegistryAssignString @ 0x140054F40 (imp_WdfRegistryAssignString.c)
 *     imp_WdfIoQueueFindRequest @ 0x1400584D0 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfInterruptWdmGetInterrupt @ 0x14005F3A0 (imp_WdfInterruptWdmGetInterrupt.c)
 *     imp_WdfCmResourceListGetDescriptor @ 0x1400638F0 (imp_WdfCmResourceListGetDescriptor.c)
 *     imp_WdfDmaTransactionDmaCompletedFinal @ 0x1400657B0 (imp_WdfDmaTransactionDmaCompletedFinal.c)
 *     imp_WdfDmaTransactionDmaCompleted @ 0x140065820 (imp_WdfDmaTransactionDmaCompleted.c)
 *     imp_WdfWorkItemFlush @ 0x140068650 (imp_WdfWorkItemFlush.c)
 *     imp_WdfRequestGetCompletionParams @ 0x14006AF20 (imp_WdfRequestGetCompletionParams.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x14006B2B0 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_WdfTimerGetParentObject @ 0x14006B780 (imp_WdfTimerGetParentObject.c)
 *     imp_WdfWmiProviderIsEnabled @ 0x14006C540 (imp_WdfWmiProviderIsEnabled.c)
 *     imp_WdfWmiInstanceGetProvider @ 0x14006EF70 (imp_WdfWmiInstanceGetProvider.c)
 *     imp_WdfCollectionGetLastItem @ 0x140070660 (imp_WdfCollectionGetLastItem.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x140070BF0 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoTargetGetState @ 0x140070CD0 (imp_WdfIoTargetGetState.c)
 *     imp_WdfCommonBufferGetAlignedVirtualAddress @ 0x140070D10 (imp_WdfCommonBufferGetAlignedVirtualAddress.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x140071300 (imp_WdfDeviceRetrieveDeviceName.c)
 *     imp_WdfDmaTransactionGetBytesTransferred @ 0x140071470 (imp_WdfDmaTransactionGetBytesTransferred.c)
 *     imp_WdfDeviceGetDevicePnpState @ 0x1400717B0 (imp_WdfDeviceGetDevicePnpState.c)
 *     imp_WdfIoTargetStart @ 0x140071FA0 (imp_WdfIoTargetStart.c)
 *     imp_WdfDeviceWdmGetPhysicalDevice @ 0x140072180 (imp_WdfDeviceWdmGetPhysicalDevice.c)
 *     imp_WdfCommonBufferGetAlignedLogicalAddress @ 0x1400721C0 (imp_WdfCommonBufferGetAlignedLogicalAddress.c)
 *     imp_WdfMemoryCopyToBuffer @ 0x140072E90 (imp_WdfMemoryCopyToBuffer.c)
 *     imp_WdfWmiInstanceFireEvent @ 0x140073290 (imp_WdfWmiInstanceFireEvent.c)
 *     imp_WdfDriverWdmGetDriverObject @ 0x140073990 (imp_WdfDriverWdmGetDriverObject.c)
 *     imp_WdfDeviceGetDriver @ 0x140073B80 (imp_WdfDeviceGetDriver.c)
 *     imp_WdfIoQueueReadyNotify @ 0x140073BD0 (imp_WdfIoQueueReadyNotify.c)
 *     imp_WdfDeviceGetSelfIoTarget @ 0x140075430 (imp_WdfDeviceGetSelfIoTarget.c)
 *     imp_WdfFdoAddStaticChild @ 0x140079140 (imp_WdfFdoAddStaticChild.c)
 *     imp_WdfWmiInstanceGetDevice @ 0x140079740 (imp_WdfWmiInstanceGetDevice.c)
 *     imp_WdfDeviceSetStaticStopRemove @ 0x140079D10 (imp_WdfDeviceSetStaticStopRemove.c)
 *     imp_WdfUsbInterfaceGetNumConfiguredPipes @ 0x14007A920 (imp_WdfUsbInterfaceGetNumConfiguredPipes.c)
 *     imp_WdfUsbTargetPipeIsInEndpoint @ 0x14007D7A0 (imp_WdfUsbTargetPipeIsInEndpoint.c)
 *     imp_WdfWmiInstanceRegister @ 0x14007E9D0 (imp_WdfWmiInstanceRegister.c)
 *     imp_WdfDeviceGetDevicePowerState @ 0x140080CC0 (imp_WdfDeviceGetDevicePowerState.c)
 *     imp_WdfRegistryWdmGetHandle @ 0x140080D00 (imp_WdfRegistryWdmGetHandle.c)
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x1400811C0 (imp_WdfDeviceSetSpecialFileSupport.c)
 *     imp_WdfDmaTransactionGetDevice @ 0x140086B80 (imp_WdfDmaTransactionGetDevice.c)
 *     imp_WdfDmaTransactionGetRequest @ 0x140086BD0 (imp_WdfDmaTransactionGetRequest.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086C90 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfDmaTransactionSetMaximumLength @ 0x140087090 (imp_WdfDmaTransactionSetMaximumLength.c)
 *     imp_WdfDpcWdmGetDpc @ 0x14008B040 (imp_WdfDpcWdmGetDpc.c)
 *     imp_WdfWmiInstanceDeregister @ 0x14008D600 (imp_WdfWmiInstanceDeregister.c)
 *     imp_WdfWmiProviderCreate @ 0x14008D650 (imp_WdfWmiProviderCreate.c)
 *     imp_WdfWmiProviderGetDevice @ 0x14008D780 (imp_WdfWmiProviderGetDevice.c)
 *     imp_WdfWmiProviderGetTracingHandle @ 0x14008D7D0 (imp_WdfWmiProviderGetTracingHandle.c)
 *     ?NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z @ 0x14008F4DC (-NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z.c)
 *     ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x14008FA54 (-PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x14008FB34 (-PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x1400917E0 (imp_WdfDeviceConfigureRequestDispatching.c)
 *     imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x140091980 (imp_WdfDeviceConfigureWdmIrpDispatchCallback.c)
 *     imp_WdfDeviceGetAlignmentRequirement @ 0x140091B10 (imp_WdfDeviceGetAlignmentRequirement.c)
 *     imp_WdfDeviceGetCharacteristics @ 0x140091B50 (imp_WdfDeviceGetCharacteristics.c)
 *     imp_WdfDeviceGetDevicePowerPolicyState @ 0x140091B90 (imp_WdfDeviceGetDevicePowerPolicyState.c)
 *     imp_WdfDeviceSetAlignmentRequirement @ 0x140091E70 (imp_WdfDeviceSetAlignmentRequirement.c)
 *     imp_WdfDeviceSetCharacteristics @ 0x140091EC0 (imp_WdfDeviceSetCharacteristics.c)
 *     imp_WdfFileObjectGetFlags @ 0x1400921D0 (imp_WdfFileObjectGetFlags.c)
 *     imp_WdfFileObjectGetInitiatorProcessId @ 0x140092220 (imp_WdfFileObjectGetInitiatorProcessId.c)
 *     imp_WdfDeviceAddRemovalRelationsPhysicalDevice @ 0x140092320 (imp_WdfDeviceAddRemovalRelationsPhysicalDevice.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x140092380 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     imp_WdfDeviceRemoveRemovalRelationsPhysicalDevice @ 0x140092490 (imp_WdfDeviceRemoveRemovalRelationsPhysicalDevice.c)
 *     imp_WdfDeviceRetrieveCompanionTarget @ 0x140092500 (imp_WdfDeviceRetrieveCompanionTarget.c)
 *     imp_WdfDeviceSetBusInformationForChildren @ 0x140092580 (imp_WdfDeviceSetBusInformationForChildren.c)
 *     imp_WdfRequestChangeTarget @ 0x140092AD0 (imp_WdfRequestChangeTarget.c)
 *     imp_WdfDriverRetrieveVersionString @ 0x140093A80 (imp_WdfDriverRetrieveVersionString.c)
 *     imp_WdfDriverMiniportUnload @ 0x140094180 (imp_WdfDriverMiniportUnload.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1400941C0 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     imp_WdfObjectQuery @ 0x140095D30 (imp_WdfObjectQuery.c)
 *     FxCmResourceListInsertDescriptor @ 0x14009851C (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x140098774 (FxIoResourceRequirementsListInsertIoResList.c)
 *     imp_WdfCmResourceListGetCount @ 0x140098850 (imp_WdfCmResourceListGetCount.c)
 *     imp_WdfIoResourceListGetCount @ 0x140098C00 (imp_WdfIoResourceListGetCount.c)
 *     imp_WdfIoResourceListGetDescriptor @ 0x140098C60 (imp_WdfIoResourceListGetDescriptor.c)
 *     imp_WdfIoResourceRequirementsListGetCount @ 0x140099040 (imp_WdfIoResourceRequirementsListGetCount.c)
 *     imp_WdfIoResourceRequirementsListGetIoResList @ 0x1400990A0 (imp_WdfIoResourceRequirementsListGetIoResList.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1400991F0 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 *     imp_WdfIoResourceRequirementsListSetInterfaceType @ 0x140099320 (imp_WdfIoResourceRequirementsListSetInterfaceType.c)
 *     imp_WdfIoResourceRequirementsListSetSlotNumber @ 0x140099380 (imp_WdfIoResourceRequirementsListSetSlotNumber.c)
 *     imp_WdfRegistryAssignMemory @ 0x1400995C0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1400997A0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfIoTargetSelfAssignDefaultIoQueue @ 0x14009B2B0 (imp_WdfIoTargetSelfAssignDefaultIoQueue.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x14009C1C0 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 *     imp_WdfUsbTargetPipeFormatRequestForReset @ 0x14009C2C0 (imp_WdfUsbTargetPipeFormatRequestForReset.c)
 *     imp_WdfUsbTargetPipeIsOutEndpoint @ 0x14009C3C0 (imp_WdfUsbTargetPipeIsOutEndpoint.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForCyclePort @ 0x14009C6A0 (imp_WdfUsbTargetDeviceFormatRequestForCyclePort.c)
 *     imp_WdfUsbInterfaceGetNumEndpoints @ 0x14009C880 (imp_WdfUsbInterfaceGetNumEndpoints.c)
 *     imp_WdfUsbInterfaceGetNumSettings @ 0x14009C8F0 (imp_WdfUsbInterfaceGetNumSettings.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x14009CFF0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009D440 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     imp_WdfUsbTargetDeviceWdmGetConfigurationHandle @ 0x14009D850 (imp_WdfUsbTargetDeviceWdmGetConfigurationHandle.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009FF84 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     imp_WdfIoQueueDrain @ 0x1400A07E0 (imp_WdfIoQueueDrain.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A1A40 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfDmaEnablerGetMaximumLength @ 0x1400A1ED0 (imp_WdfDmaEnablerGetMaximumLength.c)
 *     imp_WdfDmaEnablerGetMaximumScatterGatherElements @ 0x1400A1F10 (imp_WdfDmaEnablerGetMaximumScatterGatherElements.c)
 *     imp_WdfCommonBufferGetLength @ 0x1400A2010 (imp_WdfCommonBufferGetLength.c)
 *     imp_WdfInterruptCreate @ 0x1400A2050 (imp_WdfInterruptCreate.c)
 *     imp_WdfInterruptDisable @ 0x1400A2420 (imp_WdfInterruptDisable.c)
 *     imp_WdfInterruptEnable @ 0x1400A2470 (imp_WdfInterruptEnable.c)
 *     imp_WdfInterruptTryToAcquireLock @ 0x1400A2750 (imp_WdfInterruptTryToAcquireLock.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400A96A0 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1400DF0A0 (imp_VfWdfIoQueueRetrieveFoundRequest.c)
 *     imp_VfWdfIoQueueRetrieveNextRequest @ 0x1400DF1F0 (imp_VfWdfIoQueueRetrieveNextRequest.c)
 *     imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1400DF340 (imp_VfWdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_VfWdfRequestComplete @ 0x1400E05A0 (imp_VfWdfRequestComplete.c)
 *     imp_VfWdfRequestCompleteWithInformation @ 0x1400E0700 (imp_VfWdfRequestCompleteWithInformation.c)
 *     imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1400E0860 (imp_VfWdfRequestCompleteWithPriorityBoost.c)
 *     VfEvtIoDefault @ 0x1400E30A0 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1400E3260 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1400E3440 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1400E3620 (VfEvtIoRead.c)
 *     VfEvtIoWrite @ 0x1400E3970 (VfEvtIoWrite.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxObjectHandleGetPtr(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Handle,
        unsigned __int16 Type,
        void **PPObject)
{
  unsigned __int64 level; // rsi
  __int64 v6; // rcx
  _FX_DRIVER_GLOBALS **flags; // rbx
  _FX_DRIVER_GLOBALS *v8; // rax
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  const _GUID *v12; // [rsp+20h] [rbp-48h]
  void **v13; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int16 v14; // [rsp+58h] [rbp-10h]
  __int16 v15; // [rsp+5Ah] [rbp-Eh]
  int v16; // [rsp+5Ch] [rbp-Ch]

  level = Type;
  if ( !Handle )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, Type);
  LOWORD(v6) = 0;
  flags = (_FX_DRIVER_GLOBALS **)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    v6 = *(unsigned __int16 *)flags;
    flags = (_FX_DRIVER_GLOBALS **)((char *)flags - v6);
  }
  if ( *((_WORD *)flags + 4) == Type )
  {
    *PPObject = flags;
  }
  else
  {
    *PPObject = 0LL;
    v16 = 0;
    v8 = *flags;
    v15 = v6;
    v13 = PPObject;
    v14 = Type;
    if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, void ***))v8->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           flags,
           &v13) < 0 )
    {
      WPP_IFR_SF_qDqD(flags[2], v9, v10, v11, v12, (const void *)Handle, level, flags, *((unsigned __int16 *)flags + 4));
      FxVerifierBugCheckWorker(flags[2], WDF_INVALID_HANDLE, Handle, level);
    }
  }
}
