/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318
 * Callers:
 *     IsSidebandIrp @ 0x140002ED0 (IsSidebandIrp.c)
 *     USBType1CompleteCallback @ 0x1400032F0 (USBType1CompleteCallback.c)
 *     USBCaptureCompleteCallback @ 0x140003820 (USBCaptureCompleteCallback.c)
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1400052F4 (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1400057E0 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x14000597C (-GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x140005CB8 (-GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z.c)
 *     SidebandDispatchIrp @ 0x140006098 (SidebandDispatchIrp.c)
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x140006504 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140006AA8 (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x140006FA0 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007130 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007508 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?IrpMJIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1400078B0 (-IrpMJIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007FD8 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140009420 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000A52C (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x14000B144 (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 *     DeInitSideband @ 0x14000B398 (DeInitSideband.c)
 *     PowerSettingCallback @ 0x14000C050 (PowerSettingCallback.c)
 *     InitializeSideband @ 0x14000E32C (InitializeSideband.c)
 *     IsDeviceInSidebandMode @ 0x14000E674 (IsDeviceInSidebandMode.c)
 *     ?AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x14000EA94 (-AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelPendingIrps@CSidebandDevice@@UEAAJXZ @ 0x14000EC10 (-CancelPendingIrps@CSidebandDevice@@UEAAJXZ.c)
 *     ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x14000ED30 (-CloseAllPinInstances@CSidebandDevice@@UEAAJXZ.c)
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x14000EFC4 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 *     ?CsqCompleteCanceledIrp@CSidebandDevice@@AEAAXPEAU_IO_CSQ@@PEAU_IRP@@@Z @ 0x14000F5A4 (-CsqCompleteCanceledIrp@CSidebandDevice@@AEAAXPEAU_IO_CSQ@@PEAU_IRP@@@Z.c)
 *     ?DeInitIoQueue@CSidebandDevice@@UEAAJXZ @ 0x14000F650 (-DeInitIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x14000F7CC (-EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x14000FCB0 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400102B0 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x140010800 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140010B7C (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x140010FF4 (-GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1400113A4 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x14001178C (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x140011B10 (-InitializeIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140011D00 (-IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140011E60 (-IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140011FC0 (-IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z @ 0x1400121A0 (-IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z.c)
 *     ?PublishInterface@CSidebandDevice@@UEAAJXZ @ 0x140012B20 (-PublishInterface@CSidebandDevice@@UEAAJXZ.c)
 *     ?RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x140012DE0 (-RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x140013040 (-StopIoQueueThread@CSidebandDevice@@AEAAJXZ.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400148E4 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400168CC (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140016E5C (-SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140016FD0 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017588 (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400179EC (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017F7C (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400182C4 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     IsClassDriverOnly @ 0x14002F324 (IsClassDriverOnly.c)
 *     IsSidebandSupported @ 0x14002F5D4 (IsSidebandSupported.c)
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x14002F8D0 (SidebandCapableDeferredFilterFactoryCreate.c)
 *     USBDeviceGetControllerInfo @ 0x140034E30 (USBDeviceGetControllerInfo.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035B24 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwSetTransportResources @ 0x140036500 (USBHwSetTransportResources.c)
 *     USBCntrlGetSetGEQ @ 0x140039470 (USBCntrlGetSetGEQ.c)
 *     UsbAudioIrpDispatcher @ 0x14003A500 (UsbAudioIrpDispatcher.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003BBEC (USBHwSelectStreamingAudioInterface.c)
 *     USBCntrlGetSetDbLevel @ 0x14003E570 (USBCntrlGetSetDbLevel.c)
 *     PinReset @ 0x140040150 (PinReset.c)
 *     USBCntrlGetSetBoolean @ 0x1400413A0 (USBCntrlGetSetBoolean.c)
 *     PinCreate @ 0x1400416B0 (PinCreate.c)
 *     USBHwGetTransportResources @ 0x140041E80 (USBHwGetTransportResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318
 * Reason: Hex-Rays returned no pseudocode for 0x14000B318
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000B318: mov     [rsp+arg_0], rbx
 * 000000014000B31D: mov     [rsp+arg_8], rsi
 * 000000014000B322: push    rdi
 * 000000014000B323: sub     rsp, 30h
 * 000000014000B327: movzx   ebx, [rsp+38h+arg_30]
 * 000000014000B32C: mov     rsi, r9
 * 000000014000B32F: mov     dil, r8b
 * 000000014000B332: test    dl, dl
 * 000000014000B334: jz      short loc_14000B355
 * 000000014000B336: mov     rax, cs:pfnWppTraceMessage
 * 000000014000B33D: mov     r9d, ebx
 * 000000014000B340: and     [rsp+38h+var_18], 0
 * 000000014000B346: mov     edx, 2Bh ; '+'
 * 000000014000B34B: mov     r8, [rsp+38h+arg_38]
 * 000000014000B350: call    _guard_dispatch_icall
 * 000000014000B355: test    dil, dil
 * 000000014000B358: jz      short loc_14000B380
 * 000000014000B35A: and     [rsp+38h+var_10], 0
 * 000000014000B360: xor     edx, edx
 * 000000014000B362: mov     r9, [rsp+38h+arg_38]
 * 000000014000B367: mov     rcx, rsi
 * 000000014000B36A: mov     r8d, [rsp+38h+arg_28]
 * 000000014000B36F: mov     word ptr [rsp+38h+var_18], bx
 * 000000014000B374: call    cs:__imp_WppAutoLogTrace
 * 000000014000B37B: nop     dword ptr [rax+rax+00h]
 * 000000014000B380: mov     rbx, [rsp+38h+arg_0]
 * 000000014000B385: mov     rsi, [rsp+38h+arg_8]
 * 000000014000B38A: add     rsp, 30h
 * 000000014000B38E: pop     rdi
 * 000000014000B38F: retn
 */
