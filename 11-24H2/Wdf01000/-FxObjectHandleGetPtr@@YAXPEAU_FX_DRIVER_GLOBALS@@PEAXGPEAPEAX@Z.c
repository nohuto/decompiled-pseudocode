/*
 * XREFs of ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0
 * Callers:
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140013910 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x140013A20 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14001F7DC (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     imp_WdfRequestProbeAndLockUserBufferForWrite @ 0x14001FFC0 (imp_WdfRequestProbeAndLockUserBufferForWrite.c)
 *     imp_WdfRequestProbeAndLockUserBufferForRead @ 0x1400203E0 (imp_WdfRequestProbeAndLockUserBufferForRead.c)
 *     imp_WdfStringGetUnicodeString @ 0x1400209A0 (imp_WdfStringGetUnicodeString.c)
 *     imp_WdfIoQueueFindRequest @ 0x14002DFB0 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x140032130 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceGetSystemPowerAction @ 0x140032E50 (imp_WdfDeviceGetSystemPowerAction.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x14003A924 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x14003CD40 (imp_WdfIoQueueStopAndPurge.c)
 *     imp_WdfIoQueuePurge @ 0x14003CDB0 (imp_WdfIoQueuePurge.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x140046010 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfInterruptQueueWorkItemForIsr @ 0x14004C3B0 (imp_WdfInterruptQueueWorkItemForIsr.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x14004D750 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x14004D9E0 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfWmiInstanceCreate @ 0x140055210 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfInterruptWdmGetInterrupt @ 0x14005C180 (imp_WdfInterruptWdmGetInterrupt.c)
 *     imp_WdfRegistryQueryString @ 0x14005DD10 (imp_WdfRegistryQueryString.c)
 *     imp_WdfCmResourceListGetDescriptor @ 0x1400609F0 (imp_WdfCmResourceListGetDescriptor.c)
 *     imp_WdfRegistryQueryMultiString @ 0x140062110 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfDmaTransactionDmaCompletedFinal @ 0x140064340 (imp_WdfDmaTransactionDmaCompletedFinal.c)
 *     imp_WdfDmaTransactionDmaCompleted @ 0x1400643B0 (imp_WdfDmaTransactionDmaCompleted.c)
 *     imp_WdfWorkItemFlush @ 0x140066A90 (imp_WdfWorkItemFlush.c)
 *     imp_WdfRequestGetCompletionParams @ 0x1400693E0 (imp_WdfRequestGetCompletionParams.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x140069770 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_WdfTimerGetParentObject @ 0x140069CA0 (imp_WdfTimerGetParentObject.c)
 *     imp_WdfWmiProviderIsEnabled @ 0x14006B360 (imp_WdfWmiProviderIsEnabled.c)
 *     imp_WdfRegistryAssignString @ 0x14006D2B0 (imp_WdfRegistryAssignString.c)
 *     imp_WdfWmiInstanceGetProvider @ 0x14006E2F0 (imp_WdfWmiInstanceGetProvider.c)
 *     imp_WdfCollectionGetLastItem @ 0x14006FA00 (imp_WdfCollectionGetLastItem.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x14006FFF0 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoTargetGetState @ 0x1400700D0 (imp_WdfIoTargetGetState.c)
 *     imp_WdfCommonBufferGetAlignedVirtualAddress @ 0x140070110 (imp_WdfCommonBufferGetAlignedVirtualAddress.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x140070750 (imp_WdfDeviceRetrieveDeviceName.c)
 *     imp_WdfDmaTransactionGetBytesTransferred @ 0x1400708C0 (imp_WdfDmaTransactionGetBytesTransferred.c)
 *     imp_WdfDeviceGetDevicePnpState @ 0x140070C00 (imp_WdfDeviceGetDevicePnpState.c)
 *     imp_WdfIoTargetStart @ 0x140071360 (imp_WdfIoTargetStart.c)
 *     imp_WdfDeviceWdmGetPhysicalDevice @ 0x140071540 (imp_WdfDeviceWdmGetPhysicalDevice.c)
 *     imp_WdfCommonBufferGetAlignedLogicalAddress @ 0x140071580 (imp_WdfCommonBufferGetAlignedLogicalAddress.c)
 *     imp_WdfMemoryCopyToBuffer @ 0x140072250 (imp_WdfMemoryCopyToBuffer.c)
 *     imp_WdfWmiInstanceFireEvent @ 0x140072B50 (imp_WdfWmiInstanceFireEvent.c)
 *     imp_WdfDriverWdmGetDriverObject @ 0x140073250 (imp_WdfDriverWdmGetDriverObject.c)
 *     imp_WdfDeviceGetDriver @ 0x1400735B0 (imp_WdfDeviceGetDriver.c)
 *     imp_WdfIoQueueReadyNotify @ 0x140073600 (imp_WdfIoQueueReadyNotify.c)
 *     imp_WdfDeviceGetSelfIoTarget @ 0x140074980 (imp_WdfDeviceGetSelfIoTarget.c)
 *     imp_WdfFdoAddStaticChild @ 0x1400789C0 (imp_WdfFdoAddStaticChild.c)
 *     imp_WdfWmiInstanceGetDevice @ 0x140079260 (imp_WdfWmiInstanceGetDevice.c)
 *     imp_WdfDeviceSetStaticStopRemove @ 0x140079830 (imp_WdfDeviceSetStaticStopRemove.c)
 *     imp_WdfUsbInterfaceGetNumConfiguredPipes @ 0x14007A4F0 (imp_WdfUsbInterfaceGetNumConfiguredPipes.c)
 *     imp_WdfUsbTargetPipeIsInEndpoint @ 0x14007D460 (imp_WdfUsbTargetPipeIsInEndpoint.c)
 *     imp_WdfWmiInstanceRegister @ 0x14007E600 (imp_WdfWmiInstanceRegister.c)
 *     imp_WdfDeviceGetDevicePowerState @ 0x140080780 (imp_WdfDeviceGetDevicePowerState.c)
 *     imp_WdfRegistryWdmGetHandle @ 0x1400807C0 (imp_WdfRegistryWdmGetHandle.c)
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x140080C80 (imp_WdfDeviceSetSpecialFileSupport.c)
 *     imp_WdfDmaTransactionGetDevice @ 0x140086B70 (imp_WdfDmaTransactionGetDevice.c)
 *     imp_WdfDmaTransactionGetRequest @ 0x140086BC0 (imp_WdfDmaTransactionGetRequest.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086C80 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfDmaTransactionSetMaximumLength @ 0x140087080 (imp_WdfDmaTransactionSetMaximumLength.c)
 *     imp_WdfDpcWdmGetDpc @ 0x14008B0A0 (imp_WdfDpcWdmGetDpc.c)
 *     imp_WdfWmiInstanceDeregister @ 0x14008D660 (imp_WdfWmiInstanceDeregister.c)
 *     imp_WdfWmiProviderCreate @ 0x14008D6B0 (imp_WdfWmiProviderCreate.c)
 *     imp_WdfWmiProviderGetDevice @ 0x14008D7E0 (imp_WdfWmiProviderGetDevice.c)
 *     imp_WdfWmiProviderGetTracingHandle @ 0x14008D830 (imp_WdfWmiProviderGetTracingHandle.c)
 *     ?NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z @ 0x14008F53C (-NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z.c)
 *     ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x14008FAB4 (-PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x14008FB94 (-PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x140091840 (imp_WdfDeviceConfigureRequestDispatching.c)
 *     imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x1400919E0 (imp_WdfDeviceConfigureWdmIrpDispatchCallback.c)
 *     imp_WdfDeviceGetAlignmentRequirement @ 0x140091B70 (imp_WdfDeviceGetAlignmentRequirement.c)
 *     imp_WdfDeviceGetCharacteristics @ 0x140091BB0 (imp_WdfDeviceGetCharacteristics.c)
 *     imp_WdfDeviceGetDevicePowerPolicyState @ 0x140091BF0 (imp_WdfDeviceGetDevicePowerPolicyState.c)
 *     imp_WdfDeviceSetAlignmentRequirement @ 0x140091ED0 (imp_WdfDeviceSetAlignmentRequirement.c)
 *     imp_WdfDeviceSetCharacteristics @ 0x140091F20 (imp_WdfDeviceSetCharacteristics.c)
 *     imp_WdfFileObjectGetFlags @ 0x140092230 (imp_WdfFileObjectGetFlags.c)
 *     imp_WdfFileObjectGetInitiatorProcessId @ 0x140092280 (imp_WdfFileObjectGetInitiatorProcessId.c)
 *     imp_WdfDeviceAddRemovalRelationsPhysicalDevice @ 0x140092380 (imp_WdfDeviceAddRemovalRelationsPhysicalDevice.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1400923E0 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     imp_WdfDeviceRemoveRemovalRelationsPhysicalDevice @ 0x1400924F0 (imp_WdfDeviceRemoveRemovalRelationsPhysicalDevice.c)
 *     imp_WdfDeviceRetrieveCompanionTarget @ 0x140092560 (imp_WdfDeviceRetrieveCompanionTarget.c)
 *     imp_WdfDeviceSetBusInformationForChildren @ 0x1400925E0 (imp_WdfDeviceSetBusInformationForChildren.c)
 *     imp_WdfRequestChangeTarget @ 0x140092B30 (imp_WdfRequestChangeTarget.c)
 *     imp_WdfDriverRetrieveVersionString @ 0x140093AE0 (imp_WdfDriverRetrieveVersionString.c)
 *     imp_WdfDriverMiniportUnload @ 0x1400941E0 (imp_WdfDriverMiniportUnload.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x140094220 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     imp_WdfObjectQuery @ 0x140095D50 (imp_WdfObjectQuery.c)
 *     FxCmResourceListInsertDescriptor @ 0x14009855C (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1400987B4 (FxIoResourceRequirementsListInsertIoResList.c)
 *     imp_WdfCmResourceListGetCount @ 0x140098890 (imp_WdfCmResourceListGetCount.c)
 *     imp_WdfIoResourceListGetCount @ 0x140098C40 (imp_WdfIoResourceListGetCount.c)
 *     imp_WdfIoResourceListGetDescriptor @ 0x140098CA0 (imp_WdfIoResourceListGetDescriptor.c)
 *     imp_WdfIoResourceRequirementsListGetCount @ 0x140099080 (imp_WdfIoResourceRequirementsListGetCount.c)
 *     imp_WdfIoResourceRequirementsListGetIoResList @ 0x1400990E0 (imp_WdfIoResourceRequirementsListGetIoResList.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x140099230 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 *     imp_WdfIoResourceRequirementsListSetInterfaceType @ 0x140099360 (imp_WdfIoResourceRequirementsListSetInterfaceType.c)
 *     imp_WdfIoResourceRequirementsListSetSlotNumber @ 0x1400993C0 (imp_WdfIoResourceRequirementsListSetSlotNumber.c)
 *     imp_WdfRegistryAssignMemory @ 0x140099600 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1400997E0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfIoTargetSelfAssignDefaultIoQueue @ 0x14009B380 (imp_WdfIoTargetSelfAssignDefaultIoQueue.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x14009C290 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 *     imp_WdfUsbTargetPipeFormatRequestForReset @ 0x14009C390 (imp_WdfUsbTargetPipeFormatRequestForReset.c)
 *     imp_WdfUsbTargetPipeIsOutEndpoint @ 0x14009C490 (imp_WdfUsbTargetPipeIsOutEndpoint.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForCyclePort @ 0x14009C770 (imp_WdfUsbTargetDeviceFormatRequestForCyclePort.c)
 *     imp_WdfUsbInterfaceGetNumEndpoints @ 0x14009C950 (imp_WdfUsbInterfaceGetNumEndpoints.c)
 *     imp_WdfUsbInterfaceGetNumSettings @ 0x14009C9C0 (imp_WdfUsbInterfaceGetNumSettings.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x14009D0C0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009D510 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     imp_WdfUsbTargetDeviceWdmGetConfigurationHandle @ 0x14009D920 (imp_WdfUsbTargetDeviceWdmGetConfigurationHandle.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A0054 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     imp_WdfIoQueueDrain @ 0x1400A08B0 (imp_WdfIoQueueDrain.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A1B10 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfDmaEnablerGetMaximumLength @ 0x1400A1FA0 (imp_WdfDmaEnablerGetMaximumLength.c)
 *     imp_WdfDmaEnablerGetMaximumScatterGatherElements @ 0x1400A1FE0 (imp_WdfDmaEnablerGetMaximumScatterGatherElements.c)
 *     imp_WdfCommonBufferGetLength @ 0x1400A20E0 (imp_WdfCommonBufferGetLength.c)
 *     imp_WdfInterruptCreate @ 0x1400A2120 (imp_WdfInterruptCreate.c)
 *     imp_WdfInterruptDisable @ 0x1400A24F0 (imp_WdfInterruptDisable.c)
 *     imp_WdfInterruptEnable @ 0x1400A2540 (imp_WdfInterruptEnable.c)
 *     imp_WdfInterruptTryToAcquireLock @ 0x1400A2820 (imp_WdfInterruptTryToAcquireLock.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400A9770 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
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
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
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
