/*
 * XREFs of ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530
 * Callers:
 *     imp_WdfUsbTargetDeviceCreateIsochUrb @ 0x1400017F0 (imp_WdfUsbTargetDeviceCreateIsochUrb.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1400018AC (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x140001EE0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1400020F0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1400023A0 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x140002630 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfRequestCancelSentRequest @ 0x140004D60 (imp_WdfRequestCancelSentRequest.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1400082E0 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfStringCreate @ 0x140008400 (imp_WdfStringCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1400085A0 (imp_WdfSpinLockCreate.c)
 *     imp_WdfIoQueueCreate @ 0x140013E60 (imp_WdfIoQueueCreate.c)
 *     imp_WdfIoQueuePurgeSynchronously @ 0x140017100 (imp_WdfIoQueuePurgeSynchronously.c)
 *     imp_WdfChildListRetrievePdo @ 0x140017D50 (imp_WdfChildListRetrievePdo.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x14001A810 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceAssignS0IdleSettings @ 0x14003A650 (imp_WdfDeviceAssignS0IdleSettings.c)
 *     imp_WdfWmiInstanceCreate @ 0x14003E060 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x14003E36C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1400401C0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfIoTargetQueryForInterface @ 0x1400406C0 (imp_WdfIoTargetQueryForInterface.c)
 *     imp_WdfFdoQueryForInterface @ 0x140040A60 (imp_WdfFdoQueryForInterface.c)
 *     imp_WdfDmaTransactionCreate @ 0x1400420C0 (imp_WdfDmaTransactionCreate.c)
 *     imp_WdfDmaTransactionCancel @ 0x140042FA0 (imp_WdfDmaTransactionCancel.c)
 *     imp_WdfRequestRequeue @ 0x140047690 (imp_WdfRequestRequeue.c)
 *     imp_WdfDpcCreate @ 0x14004F950 (imp_WdfDpcCreate.c)
 *     imp_WdfTimerCreate @ 0x14004FD30 (imp_WdfTimerCreate.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x140051C00 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x140051E30 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfWaitLockCreate @ 0x140051F90 (imp_WdfWaitLockCreate.c)
 *     imp_WdfRegistryQueryValue @ 0x140052700 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfRegistryOpenKey @ 0x140052930 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryQueryULong @ 0x140052B80 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfDeviceQueryProperty @ 0x140052FC0 (imp_WdfDeviceQueryProperty.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x140053AA0 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfRegistryAssignValue @ 0x1400540A0 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfRegistryQueryString @ 0x140054630 (imp_WdfRegistryQueryString.c)
 *     imp_WdfRegistryCreateKey @ 0x140054A10 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryAssignULong @ 0x140054C70 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignString @ 0x140054F40 (imp_WdfRegistryAssignString.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x140055080 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfRegistryQueryMemory @ 0x1400551D0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfChildListRetrieveNextDevice @ 0x140055470 (imp_WdfChildListRetrieveNextDevice.c)
 *     imp_WdfChildListEndIteration @ 0x140055990 (imp_WdfChildListEndIteration.c)
 *     imp_WdfChildListBeginIteration @ 0x140055AC0 (imp_WdfChildListBeginIteration.c)
 *     imp_WdfChildListUpdateChildDescriptionAsMissing @ 0x140055E20 (imp_WdfChildListUpdateChildDescriptionAsMissing.c)
 *     imp_WdfDeviceQueryPropertyEx @ 0x140055F30 (imp_WdfDeviceQueryPropertyEx.c)
 *     imp_WdfRequestGetRequestorProcessId @ 0x140059560 (imp_WdfRequestGetRequestorProcessId.c)
 *     imp_WdfDeviceSetPowerCapabilities @ 0x140061100 (imp_WdfDeviceSetPowerCapabilities.c)
 *     imp_WdfDeviceSetPnpCapabilities @ 0x1400612F0 (imp_WdfDeviceSetPnpCapabilities.c)
 *     imp_WdfUsbInterfaceGetConfiguredPipe @ 0x140067780 (imp_WdfUsbInterfaceGetConfiguredPipe.c)
 *     imp_WdfUsbTargetPipeGetInformation @ 0x1400678A0 (imp_WdfUsbTargetPipeGetInformation.c)
 *     imp_WdfRequestCreateFromIrp @ 0x140067DD0 (imp_WdfRequestCreateFromIrp.c)
 *     imp_WdfRequestRetrieveInputWdmMdl @ 0x1400697F0 (imp_WdfRequestRetrieveInputWdmMdl.c)
 *     imp_WdfCommonBufferCreate @ 0x14006B0A0 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x14006B2B0 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_WdfObjectCreate @ 0x14006B7E0 (imp_WdfObjectCreate.c)
 *     imp_WdfObjectAcquireLock @ 0x14006C130 (imp_WdfObjectAcquireLock.c)
 *     imp_WdfObjectReleaseLock @ 0x14006C1F0 (imp_WdfObjectReleaseLock.c)
 *     imp_WdfFdoGetDefaultChildList @ 0x14006E6C0 (imp_WdfFdoGetDefaultChildList.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x14006EBA0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     imp_WdfFileObjectGetFileName @ 0x14006EF00 (imp_WdfFileObjectGetFileName.c)
 *     imp_WdfDeviceIndicateWakeStatus @ 0x14006F060 (imp_WdfDeviceIndicateWakeStatus.c)
 *     imp_WdfCollectionCreate @ 0x14006F840 (imp_WdfCollectionCreate.c)
 *     imp_WdfCompanionTargetSendTaskSynchronously @ 0x14006F9D0 (imp_WdfCompanionTargetSendTaskSynchronously.c)
 *     imp_WdfDmaEnablerWdmGetDmaAdapter @ 0x1400700F0 (imp_WdfDmaEnablerWdmGetDmaAdapter.c)
 *     imp_WdfRequestRetrieveUnsafeUserOutputBuffer @ 0x1400701C0 (imp_WdfRequestRetrieveUnsafeUserOutputBuffer.c)
 *     imp_WdfInterruptGetInfo @ 0x140070570 (imp_WdfInterruptGetInfo.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x140070BF0 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoTargetWdmGetTargetFileObject @ 0x140070D50 (imp_WdfIoTargetWdmGetTargetFileObject.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x140071300 (imp_WdfDeviceRetrieveDeviceName.c)
 *     imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x1400715C0 (imp_WdfChildListAddOrUpdateChildDescriptionAsPresent.c)
 *     imp_WdfRequestIsFrom32BitProcess @ 0x140071760 (imp_WdfRequestIsFrom32BitProcess.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1400717F0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfIoTargetStop @ 0x140071BE0 (imp_WdfIoTargetStop.c)
 *     imp_WdfDmaTransactionSetTransferCompleteCallback @ 0x140072FA0 (imp_WdfDmaTransactionSetTransferCompleteCallback.c)
 *     imp_WdfDmaTransactionSetChannelConfigurationCallback @ 0x140073180 (imp_WdfDmaTransactionSetChannelConfigurationCallback.c)
 *     imp_WdfChildListBeginScan @ 0x1400739D0 (imp_WdfChildListBeginScan.c)
 *     imp_WdfRequestRetrieveUnsafeUserInputBuffer @ 0x140074050 (imp_WdfRequestRetrieveUnsafeUserInputBuffer.c)
 *     imp_WdfDmaTransactionSetDeviceAddressOffset @ 0x1400744D0 (imp_WdfDmaTransactionSetDeviceAddressOffset.c)
 *     imp_WdfIoTargetWdmGetTargetFileHandle @ 0x140075100 (imp_WdfIoTargetWdmGetTargetFileHandle.c)
 *     imp_WdfIoQueueStopSynchronously @ 0x140075510 (imp_WdfIoQueueStopSynchronously.c)
 *     imp_WdfChildListGetDevice @ 0x1400765C0 (imp_WdfChildListGetDevice.c)
 *     imp_WdfDeviceAssignSxWakeSettings @ 0x140076660 (imp_WdfDeviceAssignSxWakeSettings.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x140076AB0 (imp_WdfDeviceAddQueryInterface.c)
 *     imp_WdfChildListEndScan @ 0x140077B90 (imp_WdfChildListEndScan.c)
 *     imp_WdfIoTargetWdmGetTargetDeviceObject @ 0x140078E70 (imp_WdfIoTargetWdmGetTargetDeviceObject.c)
 *     imp_WdfIoTargetWdmGetTargetPhysicalDevice @ 0x140079040 (imp_WdfIoTargetWdmGetTargetPhysicalDevice.c)
 *     imp_WdfPdoInitAllocate @ 0x140079360 (imp_WdfPdoInitAllocate.c)
 *     imp_WdfUsbTargetDeviceRetrieveCurrentFrameNumber @ 0x140079AA0 (imp_WdfUsbTargetDeviceRetrieveCurrentFrameNumber.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x140079B20 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfUsbTargetPipeSetNoMaximumPacketSizeCheck @ 0x140079E20 (imp_WdfUsbTargetPipeSetNoMaximumPacketSizeCheck.c)
 *     imp_WdfIoTargetPurge @ 0x14007AA70 (imp_WdfIoTargetPurge.c)
 *     imp_WdfDmaTransactionStopSystemTransfer @ 0x14007AC30 (imp_WdfDmaTransactionStopSystemTransfer.c)
 *     imp_WdfUsbTargetDeviceRetrieveConfigDescriptor @ 0x14007D450 (imp_WdfUsbTargetDeviceRetrieveConfigDescriptor.c)
 *     imp_WdfDriverGetRegistryPath @ 0x14007D8E0 (imp_WdfDriverGetRegistryPath.c)
 *     imp_WdfDeviceSetDeviceState @ 0x14007DF20 (imp_WdfDeviceSetDeviceState.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x14007E460 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfDpcCancel @ 0x14007EB00 (imp_WdfDpcCancel.c)
 *     imp_WdfUsbTargetDeviceQueryUsbCapability @ 0x14007EC90 (imp_WdfUsbTargetDeviceQueryUsbCapability.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F6B0 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x14007FEF0 (imp_WdfUsbInterfaceSelectSetting.c)
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x1400811C0 (imp_WdfDeviceSetSpecialFileSupport.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1400813D0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfRequestStopAcknowledge @ 0x140082510 (imp_WdfRequestStopAcknowledge.c)
 *     imp_WdfDmaTransactionAllocateResources @ 0x140086900 (imp_WdfDmaTransactionAllocateResources.c)
 *     imp_WdfDmaTransactionFreeResources @ 0x140086A90 (imp_WdfDmaTransactionFreeResources.c)
 *     imp_WdfDmaTransactionGetTransferInfo @ 0x140086C30 (imp_WdfDmaTransactionGetTransferInfo.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086C90 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x140086FD0 (imp_WdfDmaTransactionSetImmediateExecution.c)
 *     imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x1400870E0 (imp_WdfDmaTransactionSetSingleTransferRequirement.c)
 *     imp_WdfDmaTransactionWdmGetTransferContext @ 0x1400871F0 (imp_WdfDmaTransactionWdmGetTransferContext.c)
 *     imp_WdfChildListCreate @ 0x14008B170 (imp_WdfChildListCreate.c)
 *     imp_WdfChildListRequestChildEject @ 0x14008B360 (imp_WdfChildListRequestChildEject.c)
 *     imp_WdfChildListRetrieveAddressDescription @ 0x14008B500 (imp_WdfChildListRetrieveAddressDescription.c)
 *     imp_WdfChildListUpdateAllChildDescriptionsAsPresent @ 0x14008B670 (imp_WdfChildListUpdateAllChildDescriptionsAsPresent.c)
 *     imp_WdfCompanionTargetWdmGetCompanionProcess @ 0x14008EBA0 (imp_WdfCompanionTargetWdmGetCompanionProcess.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x14008FD30 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfDeviceAssignProperty @ 0x1400916B0 (imp_WdfDeviceAssignProperty.c)
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x1400917E0 (imp_WdfDeviceConfigureRequestDispatching.c)
 *     imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x140091980 (imp_WdfDeviceConfigureWdmIrpDispatchCallback.c)
 *     imp_WdfDeviceGetDeviceState @ 0x140091BD0 (imp_WdfDeviceGetDeviceState.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x140091C90 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceSetFailed @ 0x140091F10 (imp_WdfDeviceSetFailed.c)
 *     imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x140092000 (imp_WdfDeviceWdmAssignPowerFrameworkSettings.c)
 *     imp_WdfDeviceAddDependentUsageDeviceObject @ 0x1400922B0 (imp_WdfDeviceAddDependentUsageDeviceObject.c)
 *     imp_WdfDeviceRemoveDependentUsageDeviceObject @ 0x140092410 (imp_WdfDeviceRemoveDependentUsageDeviceObject.c)
 *     imp_WdfCxVerifierKeBugCheck @ 0x140092730 (imp_WdfCxVerifierKeBugCheck.c)
 *     imp_WdfRequestChangeTarget @ 0x140092AD0 (imp_WdfRequestChangeTarget.c)
 *     imp_WdfRequestIsReserved @ 0x140092B40 (imp_WdfRequestIsReserved.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x1400937D0 (imp_WdfDriverErrorReportApiMissing.c)
 *     imp_WdfDriverIsVersionAvailable @ 0x140093980 (imp_WdfDriverIsVersionAvailable.c)
 *     imp_WdfDriverRetrieveVersionString @ 0x140093A80 (imp_WdfDriverRetrieveVersionString.c)
 *     imp_WdfControlFinishInitializing @ 0x140093B30 (imp_WdfControlFinishInitializing.c)
 *     imp_WdfLookasideListCreate @ 0x140093D70 (imp_WdfLookasideListCreate.c)
 *     FxIoResourceListInsertDescriptor @ 0x140098610 (FxIoResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x140098774 (FxIoResourceRequirementsListInsertIoResList.c)
 *     imp_WdfCmResourceListRemove @ 0x1400988E0 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfCmResourceListRemoveByDescriptor @ 0x140098980 (imp_WdfCmResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListCreate @ 0x140098AD0 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfIoResourceListRemove @ 0x140098D10 (imp_WdfIoResourceListRemove.c)
 *     imp_WdfIoResourceListRemoveByDescriptor @ 0x140098DC0 (imp_WdfIoResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x140098F00 (imp_WdfIoResourceListUpdateDescriptor.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x140099150 (imp_WdfIoResourceRequirementsListRemove.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1400991F0 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 *     imp_WdfRegistryAssignMemory @ 0x1400995C0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1400997A0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x140099A30 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryRemoveKey @ 0x140099BF0 (imp_WdfRegistryRemoveKey.c)
 *     imp_WdfRegistryRemoveValue @ 0x140099C80 (imp_WdfRegistryRemoveValue.c)
 *     imp_WdfIoTargetCloseForQueryRemove @ 0x14009B210 (imp_WdfIoTargetCloseForQueryRemove.c)
 *     imp_WdfIoTargetSelfAssignDefaultIoQueue @ 0x14009B2B0 (imp_WdfIoTargetSelfAssignDefaultIoQueue.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x14009B430 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfIoTargetQueryTargetProperty @ 0x14009B590 (imp_WdfIoTargetQueryTargetProperty.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x14009BF40 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x14009C1C0 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 *     imp_WdfUsbTargetPipeFormatRequestForReset @ 0x14009C2C0 (imp_WdfUsbTargetPipeFormatRequestForReset.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x14009C400 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceCyclePortSynchronously @ 0x14009C640 (imp_WdfUsbTargetDeviceCyclePortSynchronously.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForCyclePort @ 0x14009C6A0 (imp_WdfUsbTargetDeviceFormatRequestForCyclePort.c)
 *     imp_WdfUsbInterfaceGetDescriptor @ 0x14009C710 (imp_WdfUsbInterfaceGetDescriptor.c)
 *     imp_WdfUsbInterfaceGetEndpointInformation @ 0x14009C7B0 (imp_WdfUsbInterfaceGetEndpointInformation.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x14009CD00 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceCreate @ 0x14009CEB0 (imp_WdfUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceCreateWithParameters @ 0x14009CF20 (imp_WdfUsbTargetDeviceCreateWithParameters.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x14009CFF0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     imp_WdfUsbTargetDeviceGetDeviceDescriptor @ 0x14009D1E0 (imp_WdfUsbTargetDeviceGetDeviceDescriptor.c)
 *     imp_WdfUsbTargetDeviceQueryString @ 0x14009D260 (imp_WdfUsbTargetDeviceQueryString.c)
 *     imp_WdfUsbTargetDeviceResetPortSynchronously @ 0x14009D320 (imp_WdfUsbTargetDeviceResetPortSynchronously.c)
 *     imp_WdfUsbTargetDeviceRetrieveInformation @ 0x14009D380 (imp_WdfUsbTargetDeviceRetrieveInformation.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009D440 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     imp_WdfIoQueueAssignForwardProgressPolicy @ 0x1400A0690 (imp_WdfIoQueueAssignForwardProgressPolicy.c)
 *     imp_WdfIoQueueDrainSynchronously @ 0x1400A0850 (imp_WdfIoQueueDrainSynchronously.c)
 *     imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1400A08C0 (imp_WdfIoQueueStopAndPurgeSynchronously.c)
 *     imp_WdfDmaEnablerConfigureSystemProfile @ 0x1400A18E0 (imp_WdfDmaEnablerConfigureSystemProfile.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A1A40 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfDmaEnablerGetFragmentLength @ 0x1400A1E00 (imp_WdfDmaEnablerGetFragmentLength.c)
 *     imp_WdfDmaEnablerSetMaximumScatterGatherElements @ 0x1400A1F50 (imp_WdfDmaEnablerSetMaximumScatterGatherElements.c)
 *     imp_WdfInterruptCreate @ 0x1400A2050 (imp_WdfInterruptCreate.c)
 *     imp_WdfInterruptReportActive @ 0x1400A24C0 (imp_WdfInterruptReportActive.c)
 *     imp_WdfInterruptReportInactive @ 0x1400A2510 (imp_WdfInterruptReportInactive.c)
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1400A2560 (imp_WdfInterruptSetExtendedPolicy.c)
 *     imp_WdfInterruptSetPolicy @ 0x1400A2690 (imp_WdfInterruptSetPolicy.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
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
