/*
 * XREFs of ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0
 * Callers:
 *     imp_WdfDeviceQueryPropertyEx @ 0x140001940 (imp_WdfDeviceQueryPropertyEx.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x140001AC0 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfChildListUpdateChildDescriptionAsMissing @ 0x140001C10 (imp_WdfChildListUpdateChildDescriptionAsMissing.c)
 *     imp_WdfChildListRetrieveNextDevice @ 0x140001F00 (imp_WdfChildListRetrieveNextDevice.c)
 *     imp_WdfChildListEndIteration @ 0x140002420 (imp_WdfChildListEndIteration.c)
 *     imp_WdfChildListBeginIteration @ 0x140002550 (imp_WdfChildListBeginIteration.c)
 *     imp_WdfDeviceAssignS0IdleSettings @ 0x140003AB0 (imp_WdfDeviceAssignS0IdleSettings.c)
 *     imp_WdfRequestCancelSentRequest @ 0x140006E00 (imp_WdfRequestCancelSentRequest.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x140020A10 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfStringCreate @ 0x140020B30 (imp_WdfStringCreate.c)
 *     imp_WdfSpinLockCreate @ 0x140020CD0 (imp_WdfSpinLockCreate.c)
 *     imp_WdfChildListRetrievePdo @ 0x14002F670 (imp_WdfChildListRetrievePdo.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x140032130 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfIoQueueCreate @ 0x14003A680 (imp_WdfIoQueueCreate.c)
 *     imp_WdfTimerCreate @ 0x14003B7B0 (imp_WdfTimerCreate.c)
 *     imp_WdfIoQueuePurgeSynchronously @ 0x14003CCD0 (imp_WdfIoQueuePurgeSynchronously.c)
 *     imp_WdfIoQueueStopSynchronously @ 0x14003D2F0 (imp_WdfIoQueueStopSynchronously.c)
 *     imp_WdfRequestRequeue @ 0x14003D510 (imp_WdfRequestRequeue.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x140044EC0 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryQueryValue @ 0x140045130 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfRegistryQueryULong @ 0x140045250 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x140045C20 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfWaitLockCreate @ 0x140045D80 (imp_WdfWaitLockCreate.c)
 *     imp_WdfDeviceQueryProperty @ 0x1400467B0 (imp_WdfDeviceQueryProperty.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x140046D00 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDmaTransactionCreate @ 0x140047E60 (imp_WdfDmaTransactionCreate.c)
 *     imp_WdfDmaTransactionCancel @ 0x140048840 (imp_WdfDmaTransactionCancel.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x14004CF30 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x14004D4A0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x14004D750 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x14004D9E0 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x14004F4E0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfWmiInstanceCreate @ 0x140055210 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x14005551C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfRequestGetRequestorProcessId @ 0x1400566B0 (imp_WdfRequestGetRequestorProcessId.c)
 *     imp_WdfRegistryQueryString @ 0x14005DD10 (imp_WdfRegistryQueryString.c)
 *     imp_WdfDeviceSetPowerCapabilities @ 0x14005E200 (imp_WdfDeviceSetPowerCapabilities.c)
 *     imp_WdfDeviceSetPnpCapabilities @ 0x14005E3F0 (imp_WdfDeviceSetPnpCapabilities.c)
 *     imp_WdfIoTargetQueryForInterface @ 0x140061110 (imp_WdfIoTargetQueryForInterface.c)
 *     imp_WdfFdoQueryForInterface @ 0x140061480 (imp_WdfFdoQueryForInterface.c)
 *     imp_WdfRegistryQueryMultiString @ 0x140062110 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfUsbInterfaceGetConfiguredPipe @ 0x140065C70 (imp_WdfUsbInterfaceGetConfiguredPipe.c)
 *     imp_WdfUsbTargetPipeGetInformation @ 0x140065D90 (imp_WdfUsbTargetPipeGetInformation.c)
 *     imp_WdfRequestCreateFromIrp @ 0x1400662C0 (imp_WdfRequestCreateFromIrp.c)
 *     imp_WdfRequestRetrieveInputWdmMdl @ 0x140067E30 (imp_WdfRequestRetrieveInputWdmMdl.c)
 *     imp_WdfCommonBufferCreate @ 0x140069560 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x140069770 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_WdfObjectCreate @ 0x140069D00 (imp_WdfObjectCreate.c)
 *     imp_WdfObjectAcquireLock @ 0x14006AAD0 (imp_WdfObjectAcquireLock.c)
 *     imp_WdfObjectReleaseLock @ 0x14006AB90 (imp_WdfObjectReleaseLock.c)
 *     imp_WdfDpcCreate @ 0x14006ADB0 (imp_WdfDpcCreate.c)
 *     imp_WdfRegistryAssignString @ 0x14006D2B0 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x14006D3F0 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignValue @ 0x14006D4F0 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfFdoGetDefaultChildList @ 0x14006DA40 (imp_WdfFdoGetDefaultChildList.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x14006DF20 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     imp_WdfFileObjectGetFileName @ 0x14006E280 (imp_WdfFileObjectGetFileName.c)
 *     imp_WdfDeviceIndicateWakeStatus @ 0x14006E3E0 (imp_WdfDeviceIndicateWakeStatus.c)
 *     imp_WdfCollectionCreate @ 0x14006EC50 (imp_WdfCollectionCreate.c)
 *     imp_WdfCompanionTargetSendTaskSynchronously @ 0x14006EDE0 (imp_WdfCompanionTargetSendTaskSynchronously.c)
 *     imp_WdfDmaEnablerWdmGetDmaAdapter @ 0x14006F490 (imp_WdfDmaEnablerWdmGetDmaAdapter.c)
 *     imp_WdfRequestRetrieveUnsafeUserOutputBuffer @ 0x14006F560 (imp_WdfRequestRetrieveUnsafeUserOutputBuffer.c)
 *     imp_WdfInterruptGetInfo @ 0x14006F910 (imp_WdfInterruptGetInfo.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x14006FFF0 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoTargetWdmGetTargetFileObject @ 0x140070150 (imp_WdfIoTargetWdmGetTargetFileObject.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x140070750 (imp_WdfDeviceRetrieveDeviceName.c)
 *     imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x140070A10 (imp_WdfChildListAddOrUpdateChildDescriptionAsPresent.c)
 *     imp_WdfRequestIsFrom32BitProcess @ 0x140070BB0 (imp_WdfRequestIsFrom32BitProcess.c)
 *     imp_WdfIoTargetStop @ 0x140070C40 (imp_WdfIoTargetStop.c)
 *     imp_WdfDmaTransactionSetTransferCompleteCallback @ 0x140072360 (imp_WdfDmaTransactionSetTransferCompleteCallback.c)
 *     imp_WdfUsbTargetDeviceCreateIsochUrb @ 0x140072470 (imp_WdfUsbTargetDeviceCreateIsochUrb.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14007252C (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     imp_WdfDmaTransactionSetChannelConfigurationCallback @ 0x140072A40 (imp_WdfDmaTransactionSetChannelConfigurationCallback.c)
 *     imp_WdfChildListBeginScan @ 0x140073400 (imp_WdfChildListBeginScan.c)
 *     imp_WdfRequestRetrieveUnsafeUserInputBuffer @ 0x140073A80 (imp_WdfRequestRetrieveUnsafeUserInputBuffer.c)
 *     imp_WdfDmaTransactionSetDeviceAddressOffset @ 0x140073F00 (imp_WdfDmaTransactionSetDeviceAddressOffset.c)
 *     imp_WdfIoTargetWdmGetTargetFileHandle @ 0x140074650 (imp_WdfIoTargetWdmGetTargetFileHandle.c)
 *     imp_WdfChildListGetDevice @ 0x140075E40 (imp_WdfChildListGetDevice.c)
 *     imp_WdfDeviceAssignSxWakeSettings @ 0x140075EE0 (imp_WdfDeviceAssignSxWakeSettings.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x140076330 (imp_WdfDeviceAddQueryInterface.c)
 *     imp_WdfChildListEndScan @ 0x140077410 (imp_WdfChildListEndScan.c)
 *     imp_WdfIoTargetWdmGetTargetDeviceObject @ 0x1400786F0 (imp_WdfIoTargetWdmGetTargetDeviceObject.c)
 *     imp_WdfIoTargetWdmGetTargetPhysicalDevice @ 0x1400788C0 (imp_WdfIoTargetWdmGetTargetPhysicalDevice.c)
 *     imp_WdfRegistryQueryMemory @ 0x140078BE0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfPdoInitAllocate @ 0x140078E80 (imp_WdfPdoInitAllocate.c)
 *     imp_WdfUsbTargetDeviceRetrieveCurrentFrameNumber @ 0x1400795C0 (imp_WdfUsbTargetDeviceRetrieveCurrentFrameNumber.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x140079640 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfUsbTargetPipeSetNoMaximumPacketSizeCheck @ 0x140079940 (imp_WdfUsbTargetPipeSetNoMaximumPacketSizeCheck.c)
 *     imp_WdfIoTargetPurge @ 0x14007A5C0 (imp_WdfIoTargetPurge.c)
 *     imp_WdfDmaTransactionStopSystemTransfer @ 0x14007A780 (imp_WdfDmaTransactionStopSystemTransfer.c)
 *     imp_WdfUsbTargetDeviceRetrieveConfigDescriptor @ 0x14007D0C0 (imp_WdfUsbTargetDeviceRetrieveConfigDescriptor.c)
 *     imp_WdfDriverGetRegistryPath @ 0x14007D5A0 (imp_WdfDriverGetRegistryPath.c)
 *     imp_WdfDeviceSetDeviceState @ 0x14007DBE0 (imp_WdfDeviceSetDeviceState.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x14007E0D0 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfDpcCancel @ 0x14007E730 (imp_WdfDpcCancel.c)
 *     imp_WdfUsbTargetDeviceQueryUsbCapability @ 0x14007E8C0 (imp_WdfUsbTargetDeviceQueryUsbCapability.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F2E0 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x14007F9B0 (imp_WdfUsbInterfaceSelectSetting.c)
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x140080C80 (imp_WdfDeviceSetSpecialFileSupport.c)
 *     imp_WdfRegistryCreateKey @ 0x140080E20 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1400810E0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x140081370 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfRequestStopAcknowledge @ 0x140082500 (imp_WdfRequestStopAcknowledge.c)
 *     imp_WdfDmaTransactionAllocateResources @ 0x1400868F0 (imp_WdfDmaTransactionAllocateResources.c)
 *     imp_WdfDmaTransactionFreeResources @ 0x140086A80 (imp_WdfDmaTransactionFreeResources.c)
 *     imp_WdfDmaTransactionGetTransferInfo @ 0x140086C20 (imp_WdfDmaTransactionGetTransferInfo.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086C80 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x140086FC0 (imp_WdfDmaTransactionSetImmediateExecution.c)
 *     imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x1400870D0 (imp_WdfDmaTransactionSetSingleTransferRequirement.c)
 *     imp_WdfDmaTransactionWdmGetTransferContext @ 0x1400871E0 (imp_WdfDmaTransactionWdmGetTransferContext.c)
 *     imp_WdfChildListCreate @ 0x14008B1D0 (imp_WdfChildListCreate.c)
 *     imp_WdfChildListRequestChildEject @ 0x14008B3C0 (imp_WdfChildListRequestChildEject.c)
 *     imp_WdfChildListRetrieveAddressDescription @ 0x14008B560 (imp_WdfChildListRetrieveAddressDescription.c)
 *     imp_WdfChildListUpdateAllChildDescriptionsAsPresent @ 0x14008B6D0 (imp_WdfChildListUpdateAllChildDescriptionsAsPresent.c)
 *     imp_WdfCompanionTargetWdmGetCompanionProcess @ 0x14008EC00 (imp_WdfCompanionTargetWdmGetCompanionProcess.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x14008FD90 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfDeviceAssignProperty @ 0x140091710 (imp_WdfDeviceAssignProperty.c)
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x140091840 (imp_WdfDeviceConfigureRequestDispatching.c)
 *     imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x1400919E0 (imp_WdfDeviceConfigureWdmIrpDispatchCallback.c)
 *     imp_WdfDeviceGetDeviceState @ 0x140091C30 (imp_WdfDeviceGetDeviceState.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x140091CF0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceSetFailed @ 0x140091F70 (imp_WdfDeviceSetFailed.c)
 *     imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x140092060 (imp_WdfDeviceWdmAssignPowerFrameworkSettings.c)
 *     imp_WdfDeviceAddDependentUsageDeviceObject @ 0x140092310 (imp_WdfDeviceAddDependentUsageDeviceObject.c)
 *     imp_WdfDeviceRemoveDependentUsageDeviceObject @ 0x140092470 (imp_WdfDeviceRemoveDependentUsageDeviceObject.c)
 *     imp_WdfCxVerifierKeBugCheck @ 0x140092790 (imp_WdfCxVerifierKeBugCheck.c)
 *     imp_WdfRequestChangeTarget @ 0x140092B30 (imp_WdfRequestChangeTarget.c)
 *     imp_WdfRequestIsReserved @ 0x140092BA0 (imp_WdfRequestIsReserved.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x140093830 (imp_WdfDriverErrorReportApiMissing.c)
 *     imp_WdfDriverIsVersionAvailable @ 0x1400939E0 (imp_WdfDriverIsVersionAvailable.c)
 *     imp_WdfDriverRetrieveVersionString @ 0x140093AE0 (imp_WdfDriverRetrieveVersionString.c)
 *     imp_WdfControlFinishInitializing @ 0x140093B90 (imp_WdfControlFinishInitializing.c)
 *     imp_WdfLookasideListCreate @ 0x140093DD0 (imp_WdfLookasideListCreate.c)
 *     FxIoResourceListInsertDescriptor @ 0x140098650 (FxIoResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1400987B4 (FxIoResourceRequirementsListInsertIoResList.c)
 *     imp_WdfCmResourceListRemove @ 0x140098920 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfCmResourceListRemoveByDescriptor @ 0x1400989C0 (imp_WdfCmResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListCreate @ 0x140098B10 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfIoResourceListRemove @ 0x140098D50 (imp_WdfIoResourceListRemove.c)
 *     imp_WdfIoResourceListRemoveByDescriptor @ 0x140098E00 (imp_WdfIoResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x140098F40 (imp_WdfIoResourceListUpdateDescriptor.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x140099190 (imp_WdfIoResourceRequirementsListRemove.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x140099230 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 *     imp_WdfRegistryAssignMemory @ 0x140099600 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1400997E0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x140099A70 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryRemoveKey @ 0x140099C30 (imp_WdfRegistryRemoveKey.c)
 *     imp_WdfRegistryRemoveValue @ 0x140099CC0 (imp_WdfRegistryRemoveValue.c)
 *     imp_WdfIoTargetCloseForQueryRemove @ 0x14009B2E0 (imp_WdfIoTargetCloseForQueryRemove.c)
 *     imp_WdfIoTargetSelfAssignDefaultIoQueue @ 0x14009B380 (imp_WdfIoTargetSelfAssignDefaultIoQueue.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x14009B500 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfIoTargetQueryTargetProperty @ 0x14009B660 (imp_WdfIoTargetQueryTargetProperty.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x14009C010 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x14009C290 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 *     imp_WdfUsbTargetPipeFormatRequestForReset @ 0x14009C390 (imp_WdfUsbTargetPipeFormatRequestForReset.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x14009C4D0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceCyclePortSynchronously @ 0x14009C710 (imp_WdfUsbTargetDeviceCyclePortSynchronously.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForCyclePort @ 0x14009C770 (imp_WdfUsbTargetDeviceFormatRequestForCyclePort.c)
 *     imp_WdfUsbInterfaceGetDescriptor @ 0x14009C7E0 (imp_WdfUsbInterfaceGetDescriptor.c)
 *     imp_WdfUsbInterfaceGetEndpointInformation @ 0x14009C880 (imp_WdfUsbInterfaceGetEndpointInformation.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x14009CDD0 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceCreate @ 0x14009CF80 (imp_WdfUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceCreateWithParameters @ 0x14009CFF0 (imp_WdfUsbTargetDeviceCreateWithParameters.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x14009D0C0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     imp_WdfUsbTargetDeviceGetDeviceDescriptor @ 0x14009D2B0 (imp_WdfUsbTargetDeviceGetDeviceDescriptor.c)
 *     imp_WdfUsbTargetDeviceQueryString @ 0x14009D330 (imp_WdfUsbTargetDeviceQueryString.c)
 *     imp_WdfUsbTargetDeviceResetPortSynchronously @ 0x14009D3F0 (imp_WdfUsbTargetDeviceResetPortSynchronously.c)
 *     imp_WdfUsbTargetDeviceRetrieveInformation @ 0x14009D450 (imp_WdfUsbTargetDeviceRetrieveInformation.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009D510 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     imp_WdfIoQueueAssignForwardProgressPolicy @ 0x1400A0760 (imp_WdfIoQueueAssignForwardProgressPolicy.c)
 *     imp_WdfIoQueueDrainSynchronously @ 0x1400A0920 (imp_WdfIoQueueDrainSynchronously.c)
 *     imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1400A0990 (imp_WdfIoQueueStopAndPurgeSynchronously.c)
 *     imp_WdfDmaEnablerConfigureSystemProfile @ 0x1400A19B0 (imp_WdfDmaEnablerConfigureSystemProfile.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A1B10 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfDmaEnablerGetFragmentLength @ 0x1400A1ED0 (imp_WdfDmaEnablerGetFragmentLength.c)
 *     imp_WdfDmaEnablerSetMaximumScatterGatherElements @ 0x1400A2020 (imp_WdfDmaEnablerSetMaximumScatterGatherElements.c)
 *     imp_WdfInterruptCreate @ 0x1400A2120 (imp_WdfInterruptCreate.c)
 *     imp_WdfInterruptReportActive @ 0x1400A2590 (imp_WdfInterruptReportActive.c)
 *     imp_WdfInterruptReportInactive @ 0x1400A25E0 (imp_WdfInterruptReportInactive.c)
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1400A2630 (imp_WdfInterruptSetExtendedPolicy.c)
 *     imp_WdfInterruptSetPolicy @ 0x1400A2760 (imp_WdfInterruptSetPolicy.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxObjectHandleGetPtrAndGlobals(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        unsigned __int64 Handle,
        unsigned __int16 Type,
        void **PPObject,
        _FX_DRIVER_GLOBALS **ObjectGlobals)
{
  unsigned __int64 level; // rbp
  __int64 v8; // rcx
  _FX_DRIVER_GLOBALS **flags; // rbx
  _FX_DRIVER_GLOBALS *v10; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  const _GUID *v14; // [rsp+20h] [rbp-48h]
  void **v15; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int16 v16; // [rsp+58h] [rbp-10h]
  __int16 v17; // [rsp+5Ah] [rbp-Eh]
  int v18; // [rsp+5Ch] [rbp-Ch]

  level = Type;
  if ( !Handle )
    FxVerifierBugCheckWorker(CallersGlobals, WDF_INVALID_HANDLE, 0LL, Type);
  LOWORD(v8) = 0;
  flags = (_FX_DRIVER_GLOBALS **)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    v8 = *(unsigned __int16 *)flags;
    flags = (_FX_DRIVER_GLOBALS **)((char *)flags - v8);
  }
  if ( *((_WORD *)flags + 4) == Type )
  {
    *PPObject = flags;
  }
  else
  {
    *PPObject = 0LL;
    v18 = 0;
    v10 = *flags;
    v17 = v8;
    v15 = PPObject;
    v16 = Type;
    if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, void ***))v10->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           flags,
           &v15) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags[2],
        v11,
        v12,
        v13,
        v14,
        (const void *)Handle,
        level,
        flags,
        *((unsigned __int16 *)flags + 4));
      FxVerifierBugCheckWorker(flags[2], WDF_INVALID_HANDLE, Handle, level);
    }
  }
  *ObjectGlobals = (_FX_DRIVER_GLOBALS *)*((_QWORD *)*PPObject + 2);
}
