/*
 * XREFs of ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8
 * Callers:
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x140004800 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x140004A10 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x140005054 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1400053DC (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?GetStatus@FxRequest@@QEAAJXZ @ 0x1400055A8 (-GetStatus@FxRequest@@QEAAJXZ.c)
 *     imp_WdfCollectionRemoveItem @ 0x140008810 (imp_WdfCollectionRemoveItem.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x140008AC8 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x140009330 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x140009AC0 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x14000A1A0 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x14000AE30 (imp_WdfRequestForwardToIoQueue.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x14000D190 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x14000DD00 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14000FB50 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x14001146C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140011E70 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x140013260 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     imp_WdfTimerStop @ 0x140013A50 (imp_WdfTimerStop.c)
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x14001445C (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x140015084 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x140015500 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?RemoveIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1400156EC (-RemoveIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14001577C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Dispose@FxTimer@@UEAAEXZ @ 0x140016850 (-Dispose@FxTimer@@UEAAEXZ.c)
 *     ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x1400168C0 (-Dispose@FxSystemWorkItem@@EEAAEXZ.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x140016AB0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x14001B1AC (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StartPowerTransitionOn@FxIoQueue@@QEAAXXZ @ 0x14001B3F4 (-StartPowerTransitionOn@FxIoQueue@@QEAAXXZ.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x14001C068 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x14001C2C0 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x14001C590 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x14001EEA0 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14001F370 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x14001FCD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140020A70 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140021220 (-OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1400216B8 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x140021B80 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x140021E28 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x140022500 (imp_WdfRequestMarkCancelableEx.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     imp_WdfCollectionGetCount @ 0x140024B00 (imp_WdfCollectionGetCount.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140025360 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x140027830 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140028E00 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14002A6F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x14002BE90 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14002C3B0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x14002FCD4 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x140031540 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     imp_WdfRequestSend @ 0x140031620 (imp_WdfRequestSend.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x140031C30 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     imp_WdfDeviceGetFileObject @ 0x140038500 (imp_WdfDeviceGetFileObject.c)
 *     imp_WdfRequestGetFileObject @ 0x140039140 (imp_WdfRequestGetFileObject.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x14003C1F8 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z @ 0x14003F0F0 (-AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x14003F590 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x14003FAC8 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?ClearCallbackFlags@FxDevice@@QEAAXE@Z @ 0x1400414A8 (-ClearCallbackFlags@FxDevice@@QEAAXE@Z.c)
 *     ?SetCallbackFlags@FxDevice@@QEAAXE@Z @ 0x1400415BC (-SetCallbackFlags@FxDevice@@QEAAXE@Z.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x140041AC8 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x140042BF0 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x140043C60 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x140044C40 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?_WorkItemThunk@FxDisposeList@@CAXPEAX@Z @ 0x140044DB0 (-_WorkItemThunk@FxDisposeList@@CAXPEAX@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1400461B8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1400466C8 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x14004699C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x140046A6C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ @ 0x140046BFC (-DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x140047730 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x140047FB0 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x140048DB0 (-GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x140049530 (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x140049F60 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1400575A0 (imp_WdfRequestUnmarkCancelable.c)
 *     ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x140058628 (-PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPE.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x140058E10 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     imp_WdfTimerStart @ 0x14005BA90 (imp_WdfTimerStart.c)
 *     ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x14005BFAC (-WorkItemHandler@FxWorkItem@@AEAAXXZ.c)
 *     ?Enqueue@FxWorkItem@@QEAAXXZ @ 0x14005CD4C (-Enqueue@FxWorkItem@@QEAAXXZ.c)
 *     ?WorkItemHandler@FxSystemWorkItem@@AEAAXXZ @ 0x14005EFA8 (-WorkItemHandler@FxSystemWorkItem@@AEAAXXZ.c)
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x14005F490 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 *     imp_WdfCollectionGetItem @ 0x14005FBF0 (imp_WdfCollectionGetItem.c)
 *     imp_WdfCollectionAdd @ 0x14005FDD0 (imp_WdfCollectionAdd.c)
 *     imp_WdfCollectionGetFirstItem @ 0x140060480 (imp_WdfCollectionGetFirstItem.c)
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x140061580 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?QueueStart@FxIoQueue@@QEAAXXZ @ 0x140062BEC (-QueueStart@FxIoQueue@@QEAAXXZ.c)
 *     imp_WdfCollectionRemove @ 0x140062F90 (imp_WdfCollectionRemove.c)
 *     ?GetDescriptor@FxCmResList@@QEAAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@K@Z @ 0x140063930 (-GetDescriptor@FxCmResList@@QEAAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@K@Z.c)
 *     ?Lock@FxCallbackMutexLock@@UEAAXPEAE@Z @ 0x140065410 (-Lock@FxCallbackMutexLock@@UEAAXPEAE@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x140065D1C (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x140065EA0 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x140066080 (-Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?Dispose@FxWorkItem@@UEAAEXZ @ 0x140068530 (-Dispose@FxWorkItem@@UEAAEXZ.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1400698B8 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14006A560 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14006ADC0 (-_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Lock@FxCallbackSpinLock@@UEAAXPEAE@Z @ 0x14006B400 (-Lock@FxCallbackSpinLock@@UEAAXPEAE@Z.c)
 *     ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x14006B9D0 (-GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 *     ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x14006BBA0 (-GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 *     ?Start@FxUsbDevice@@MEAAJXZ @ 0x14006BEA0 (-Start@FxUsbDevice@@MEAAJXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x14006EA28 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x14006EDFC (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     imp_WdfCollectionGetLastItem @ 0x140070660 (imp_WdfCollectionGetLastItem.c)
 *     ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x140070720 (-_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z.c)
 *     ?Thread@FxSystemThread@@AEAAXXZ @ 0x140070E10 (-Thread@FxSystemThread@@AEAAXXZ.c)
 *     ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x140070FE0 (-_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x140071AB8 (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 *     ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x140071CCC (-DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ.c)
 *     ?_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA_COMPLETION_STATUS@@@Z @ 0x140072920 (-_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA.c)
 *     ?GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z @ 0x140073460 (-GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x140073C20 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?InitializeResources@FxDmaPacketTransaction@@UEAAJXZ @ 0x140073ED0 (-InitializeResources@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?QueueWorkItem@FxSystemThread@@QEAAEPEAU_WORK_QUEUE_ITEM@@@Z @ 0x140073F5C (-QueueWorkItem@FxSystemThread@@QEAAEPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x140079C34 (-RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x14007A2CC (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x14007A4FC (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?GetVerifierFlags@FxRequestBase@@QEAAFXZ @ 0x14007EBB8 (-GetVerifierFlags@FxRequestBase@@QEAAFXZ.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1400827DC (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
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
 *     ?GetObjectHandle@FxObject@@QEAAPEAXXZ @ 0x140057580 (-GetObjectHandle@FxObject@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqqq @ 0x1400727A8 (WPP_IFR_SF_qqqq.c)
 *     ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x140074834 (-GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z @ 0x140097CA4 (-DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z.c)
 */

void __fastcall FxVerifierLock::Lock(FxVerifierLock *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *_a1; // rsi
  KIRQL v4; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  KIRQL v8; // al
  unsigned __int64 *p_m_Lock; // rdi
  unsigned __int64 *v10; // rcx
  FxVerifierThreadTableEntry *ThreadTableEntry; // rax
  unsigned __int8 m_UseMutex; // cl
  bool v13; // zf
  unsigned __int64 *v14; // rcx
  FxVerifierLock **p_PerThreadDispatchLockList; // r14
  FxVerifierLock **p_PerThreadPassiveLockList; // r15
  FxVerifierLock *v17; // rbp
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
