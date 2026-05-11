/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328
 * Callers:
 *     IsSidebandIrp @ 0x140003100 (IsSidebandIrp.c)
 *     USBType1CompleteCallback @ 0x140003520 (USBType1CompleteCallback.c)
 *     USBCaptureCompleteCallback @ 0x140003A50 (USBCaptureCompleteCallback.c)
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x140005524 (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x140005B44 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x140005CE0 (-GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x14000601C (-GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z.c)
 *     SidebandDispatchIrp @ 0x1400063FC (SidebandDispatchIrp.c)
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x140006868 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140006E0C (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x140007304 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007494 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007868 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?IrpMJIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140007C10 (-IrpMJIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140008528 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400092C8 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000A3DC (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x14000B154 (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 *     DeInitSideband @ 0x14000B3A8 (DeInitSideband.c)
 *     PowerSettingCallback @ 0x14000BF30 (PowerSettingCallback.c)
 *     InitializeSideband @ 0x14000EC3C (InitializeSideband.c)
 *     IsDeviceInSidebandMode @ 0x14000EF84 (IsDeviceInSidebandMode.c)
 *     ?AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x14000F3A4 (-AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelPendingIrps@CSidebandDevice@@UEAAJXZ @ 0x14000F520 (-CancelPendingIrps@CSidebandDevice@@UEAAJXZ.c)
 *     ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x14000F640 (-CloseAllPinInstances@CSidebandDevice@@UEAAJXZ.c)
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x14000F944 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 *     ?CsqCompleteCanceledIrp@CSidebandDevice@@AEAAXPEAU_IO_CSQ@@PEAU_IRP@@@Z @ 0x14000FF24 (-CsqCompleteCanceledIrp@CSidebandDevice@@AEAAXPEAU_IO_CSQ@@PEAU_IRP@@@Z.c)
 *     ?DeInitIoQueue@CSidebandDevice@@UEAAJXZ @ 0x14000FFD0 (-DeInitIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x14001014C (-EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x140010630 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140010C30 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x140011180 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400114FC (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x140011974 (-GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x140011D24 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x14001210C (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x140012490 (-InitializeIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140012680 (-IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1400127E0 (-IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140012940 (-IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z @ 0x140012B20 (-IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z.c)
 *     ?PublishInterface@CSidebandDevice@@UEAAJXZ @ 0x140013550 (-PublishInterface@CSidebandDevice@@UEAAJXZ.c)
 *     ?RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x140013810 (-RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x140013A70 (-StopIoQueueThread@CSidebandDevice@@AEAAJXZ.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140015410 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400173F8 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017988 (-SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017AFC (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400180B4 (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140018518 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140018AA8 (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140018DF0 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     IsClassDriverOnly @ 0x14002F474 (IsClassDriverOnly.c)
 *     IsSidebandSupported @ 0x14002F724 (IsSidebandSupported.c)
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x14002FA20 (SidebandCapableDeferredFilterFactoryCreate.c)
 *     USBDeviceGetControllerInfo @ 0x140035150 (USBDeviceGetControllerInfo.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035E44 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwSetTransportResources @ 0x140036820 (USBHwSetTransportResources.c)
 *     USBCntrlGetSetGEQ @ 0x140039790 (USBCntrlGetSetGEQ.c)
 *     UsbAudioIrpDispatcher @ 0x14003A810 (UsbAudioIrpDispatcher.c)
 *     PinCreate @ 0x14003B320 (PinCreate.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003C34C (USBHwSelectStreamingAudioInterface.c)
 *     USBCntrlGetSetDbLevel @ 0x14003ED30 (USBCntrlGetSetDbLevel.c)
 *     PinReset @ 0x140040910 (PinReset.c)
 *     USBCntrlGetSetBoolean @ 0x140041B60 (USBCntrlGetSetBoolean.c)
 *     USBHwGetTransportResources @ 0x1400421D0 (USBHwGetTransportResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328
 * Reason: Hex-Rays returned no pseudocode for 0x14000B328
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000B328: mov     [rsp+arg_0], rbx
 * 000000014000B32D: mov     [rsp+arg_8], rsi
 * 000000014000B332: push    rdi
 * 000000014000B333: sub     rsp, 30h
 * 000000014000B337: movzx   ebx, [rsp+38h+arg_30]
 * 000000014000B33C: mov     rsi, r9
 * 000000014000B33F: mov     dil, r8b
 * 000000014000B342: test    dl, dl
 * 000000014000B344: jz      short loc_14000B365
 * 000000014000B346: mov     rax, cs:pfnWppTraceMessage
 * 000000014000B34D: mov     r9d, ebx
 * 000000014000B350: and     [rsp+38h+var_18], 0
 * 000000014000B356: mov     edx, 2Bh ; '+'
 * 000000014000B35B: mov     r8, [rsp+38h+arg_38]
 * 000000014000B360: call    _guard_dispatch_icall
 * 000000014000B365: test    dil, dil
 * 000000014000B368: jz      short loc_14000B390
 * 000000014000B36A: and     [rsp+38h+var_10], 0
 * 000000014000B370: xor     edx, edx
 * 000000014000B372: mov     r9, [rsp+38h+arg_38]
 * 000000014000B377: mov     rcx, rsi
 * 000000014000B37A: mov     r8d, [rsp+38h+arg_28]
 * 000000014000B37F: mov     word ptr [rsp+38h+var_18], bx
 * 000000014000B384: call    cs:__imp_WppAutoLogTrace
 * 000000014000B38B: nop     dword ptr [rax+rax+00h]
 * 000000014000B390: mov     rbx, [rsp+38h+arg_0]
 * 000000014000B395: mov     rsi, [rsp+38h+arg_8]
 * 000000014000B39A: add     rsp, 30h
 * 000000014000B39E: pop     rdi
 * 000000014000B39F: retn
 */
