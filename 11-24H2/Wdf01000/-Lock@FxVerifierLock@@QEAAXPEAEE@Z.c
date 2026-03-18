/*
 * XREFs of ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8
 * Callers:
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1400055F8 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1400070F4 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x14000747C (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?GetStatus@FxRequest@@QEAAJXZ @ 0x140007648 (-GetStatus@FxRequest@@QEAAJXZ.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x140008EFC (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14000A770 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     imp_WdfRequestSend @ 0x14000A850 (imp_WdfRequestSend.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14000AE60 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     imp_WdfDeviceGetFileObject @ 0x140012820 (imp_WdfDeviceGetFileObject.c)
 *     imp_WdfRequestGetFileObject @ 0x140013460 (imp_WdfRequestGetFileObject.c)
 *     imp_WdfCollectionGetCount @ 0x1400151C0 (imp_WdfCollectionGetCount.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140015A20 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x140017EF0 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140019480 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14001AD70 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x14001C510 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14001CA30 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x14001E6C8 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x14001EA20 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 *     imp_WdfCollectionRemoveItem @ 0x140020F40 (imp_WdfCollectionRemoveItem.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1400211F8 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x140021A60 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1400221F0 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1400228D0 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x140023560 (imp_WdfRequestForwardToIoQueue.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1400258C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x140026430 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x140028280 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x140029B9C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x14002A5A0 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14002B800 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x14002B930 (imp_WdfRequestMarkCancelableEx.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x14002C120 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     imp_WdfTimerStop @ 0x14002C8F0 (imp_WdfTimerStop.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x14002CE90 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x14002D490 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x14002E108 (-PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPE.c)
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x14002E3D0 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?Dispose@FxTimer@@UEAAEXZ @ 0x14002E900 (-Dispose@FxTimer@@UEAAEXZ.c)
 *     ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x14002E970 (-Dispose@FxSystemWorkItem@@EEAAEXZ.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x140032ACC (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StartPowerTransitionOn@FxIoQueue@@QEAAXXZ @ 0x140032D14 (-StartPowerTransitionOn@FxIoQueue@@QEAAXXZ.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x140033988 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x140033BE0 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x140033EB0 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1400366C0 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140036B90 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1400374F0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140038290 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140038A40 (-OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x140038ED8 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1400393A0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x140039648 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x14003AC7C (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x14003BB80 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?RemoveIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x14003BD6C (-RemoveIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14003BDFC (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14003C680 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x14003D5B0 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x14003DE30 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14003E590 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x140047868 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x140049500 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x14004A4E0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?_WorkItemThunk@FxDisposeList@@CAXPEAX@Z @ 0x14004A650 (-_WorkItemThunk@FxDisposeList@@CAXPEAX@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x14004BA58 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x14004BF68 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x14004C23C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x14004C30C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ @ 0x14004C49C (-DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ.c)
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x14004CD5C (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 *     ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x140051510 (-GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x140051C90 (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1400535B0 (imp_WdfRequestUnmarkCancelable.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x140054F34 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z @ 0x140055CEC (-AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x140056080 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfTimerStart @ 0x1400578F0 (imp_WdfTimerStart.c)
 *     ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x140057E0C (-WorkItemHandler@FxWorkItem@@AEAAXXZ.c)
 *     ?Enqueue@FxWorkItem@@QEAAXXZ @ 0x140058BAC (-Enqueue@FxWorkItem@@QEAAXXZ.c)
 *     ?WorkItemHandler@FxSystemWorkItem@@AEAAXXZ @ 0x14005B758 (-WorkItemHandler@FxSystemWorkItem@@AEAAXXZ.c)
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x14005C270 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 *     imp_WdfCollectionGetItem @ 0x14005C9D0 (imp_WdfCollectionGetItem.c)
 *     imp_WdfCollectionAdd @ 0x14005CBB0 (imp_WdfCollectionAdd.c)
 *     imp_WdfCollectionGetFirstItem @ 0x14005D260 (imp_WdfCollectionGetFirstItem.c)
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x14005E680 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?QueueStart@FxIoQueue@@QEAAXXZ @ 0x14005FCEC (-QueueStart@FxIoQueue@@QEAAXXZ.c)
 *     imp_WdfCollectionRemove @ 0x140060090 (imp_WdfCollectionRemove.c)
 *     ?GetDescriptor@FxCmResList@@QEAAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@K@Z @ 0x140060A30 (-GetDescriptor@FxCmResList@@QEAAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@K@Z.c)
 *     ?ClearCallbackFlags@FxDevice@@QEAAXE@Z @ 0x140061EC8 (-ClearCallbackFlags@FxDevice@@QEAAXE@Z.c)
 *     ?SetCallbackFlags@FxDevice@@QEAAXE@Z @ 0x140061FDC (-SetCallbackFlags@FxDevice@@QEAAXE@Z.c)
 *     ?Lock@FxCallbackMutexLock@@UEAAXPEAE@Z @ 0x140063FA0 (-Lock@FxCallbackMutexLock@@UEAAXPEAE@Z.c)
 *     ?Dispose@FxWorkItem@@UEAAEXZ @ 0x140066970 (-Dispose@FxWorkItem@@UEAAEXZ.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x140067EF8 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140069280 (-_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Lock@FxCallbackSpinLock@@UEAAXPEAE@Z @ 0x1400698C0 (-Lock@FxCallbackSpinLock@@UEAAXPEAE@Z.c)
 *     ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x140069EF0 (-GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 *     ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x14006A0C0 (-GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x14006A3C0 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x14006A540 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x14006A720 (-Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?Start@FxUsbDevice@@MEAAJXZ @ 0x14006A840 (-Start@FxUsbDevice@@MEAAJXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x14006DDA8 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x14006E17C (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     imp_WdfCollectionGetLastItem @ 0x14006FA00 (imp_WdfCollectionGetLastItem.c)
 *     ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x14006FAC0 (-_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z.c)
 *     ?Thread@FxSystemThread@@AEAAXXZ @ 0x140070210 (-Thread@FxSystemThread@@AEAAXXZ.c)
 *     ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1400703E0 (-_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x140070D2C (-DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ.c)
 *     ?_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA_COMPLETION_STATUS@@@Z @ 0x140071CE0 (-_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA.c)
 *     ?GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z @ 0x140072D20 (-GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x140073650 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?InitializeResources@FxDmaPacketTransaction@@UEAAJXZ @ 0x140073900 (-InitializeResources@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?QueueWorkItem@FxSystemThread@@QEAAEPEAU_WORK_QUEUE_ITEM@@@Z @ 0x14007398C (-QueueWorkItem@FxSystemThread@@QEAAEPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x140079754 (-RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x140079E5C (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x14007A0CC (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?GetVerifierFlags@FxRequestBase@@QEAAFXZ @ 0x14007E7E8 (-GetVerifierFlags@FxRequestBase@@QEAAFXZ.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1400827CC (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140082FF0 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1400DC24C (-Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1400DC37C (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 *     ?Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400DC4B4 (-Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DC600 (-Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1400DC714 (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DC7D8 (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DC8C4 (-Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DC97C (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     Vf_VerifyRequestComplete @ 0x1400DCAF4 (Vf_VerifyRequestComplete.c)
 *     Vf_VerifyWdfRequestIsCanceled @ 0x1400DCB9C (Vf_VerifyWdfRequestIsCanceled.c)
 *     ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1400E4014 (-Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z.c)
 *     ?Vf_VerifyForwardRequestToParent@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1400E440C (-Vf_VerifyForwardRequestToParent@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1400E4618 (-Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1400E4898 (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?GetObjectHandle@FxObject@@QEAAPEAXXZ @ 0x140053590 (-GetObjectHandle@FxObject@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqqq @ 0x140071B68 (WPP_IFR_SF_qqqq.c)
 *     ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x1400742D4 (-GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z @ 0x140097CE4 (-DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z.c)
 */

void __fastcall FxVerifierLock::Lock(FxVerifierLock *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *_a1; // rbp
  KIRQL v4; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  KIRQL v8; // al
  unsigned __int64 *p_m_Lock; // rdi
  unsigned __int64 *v10; // rcx
  FxVerifierThreadTableEntry *ThreadTableEntry; // rax
  unsigned __int8 m_UseMutex; // cl
  bool v13; // zf
  unsigned __int64 *v14; // rcx
  FxVerifierLock **p_PerThreadDispatchLockList; // r14
  FxVerifierLock **p_PerThreadPassiveLockList; // r15
  FxVerifierLock *v17; // rsi
  const void *_a4; // rax
  const void *_a3; // r8
  void *ObjectHandle; // rax
  _LARGE_INTEGER sleepTime; // [rsp+80h] [rbp+8h] BYREF

  _a1 = KeGetCurrentThread();
  v4 = 0;
  m_Globals = this->m_Globals;
  if ( this->m_OwningThread == _a1 )
  {
    _a4 = FxObject::GetObjectHandle(this->m_ParentObject);
    WPP_IFR_SF_qqqq(m_Globals, 1u, 0x12u, 0xAu, WPP_FxVerifierLock_cpp_Traceguids, _a1, this, _a3, _a4);
    ObjectHandle = FxObject::GetObjectHandle(this->m_ParentObject);
    FxVerifierBugCheckWorker(m_Globals, WDF_RECURSIVE_LOCK, (unsigned __int64)ObjectHandle, (unsigned __int64)this);
  }
  if ( this->m_UseMutex )
  {
    KeEnterCriticalRegion();
    ExAcquireFastMutexUnsafe(&this->m_Mutex.m_Lock);
    *PreviousIrql = KeGetCurrentIrql();
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      sleepTime.QuadPart = 0LL;
      KeDelayExecutionThread(0, 1u, &sleepTime);
    }
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
    *PreviousIrql = v8;
    this->m_OldIrql = v8;
  }
  p_m_Lock = &m_Globals->ThreadTableLock.m_Lock;
  v10 = &m_Globals->ThreadTableLock.m_Lock;
  if ( this->m_UseMutex )
    v4 = KeAcquireSpinLockRaiseToDpc(v10);
  else
    KeAcquireSpinLockAtDpcLevel(v10);
  this->m_OwningThread = _a1;
  ThreadTableEntry = FxVerifierLock::GetThreadTableEntry(_a1, this, 0);
  m_UseMutex = this->m_UseMutex;
  if ( ThreadTableEntry )
  {
    p_PerThreadDispatchLockList = &ThreadTableEntry->PerThreadDispatchLockList;
    p_PerThreadPassiveLockList = &ThreadTableEntry->PerThreadPassiveLockList;
    if ( m_UseMutex )
      v17 = *p_PerThreadPassiveLockList;
    else
      v17 = *p_PerThreadDispatchLockList;
    if ( v17 )
    {
      if ( this->m_Order < v17->m_Order )
      {
        FxVerifierLock::DumpDetails(this, _a1, v17);
        m_UseMutex = this->m_UseMutex;
      }
    }
    v13 = m_UseMutex == 0;
    this->m_OwnedLink = v17;
    v14 = p_m_Lock;
    if ( !v13 )
    {
      *p_PerThreadPassiveLockList = this;
LABEL_21:
      KeReleaseSpinLock(v14, v4);
      return;
    }
    *p_PerThreadDispatchLockList = this;
  }
  else
  {
    v13 = m_UseMutex == 0;
    v14 = &m_Globals->ThreadTableLock.m_Lock;
    if ( !v13 )
      goto LABEL_21;
  }
  KeReleaseSpinLockFromDpcLevel(v14);
}
