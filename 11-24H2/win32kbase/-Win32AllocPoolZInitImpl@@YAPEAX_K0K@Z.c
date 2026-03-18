/*
 * XREFs of ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0
 * Callers:
 *     ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x14000B584 (-CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ.c)
 *     ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x14000BA7C (-RemoveGaps@@YAHPEAUtagRECT@@I@Z.c)
 *     CreateCacheDC @ 0x14000E010 (CreateCacheDC.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1400161D4 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     DirectComposition::Memory::AllocateAndClear @ 0x140017890 (DirectComposition--Memory--AllocateAndClear.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x1400183A0 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     DrvEnumDisplayDevices @ 0x140018880 (DrvEnumDisplayDevices.c)
 *     CreateProp @ 0x14004135C (CreateProp.c)
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x14004A088 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     RIMStartPointerDeviceFrame @ 0x1400574B8 (RIMStartPointerDeviceFrame.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x14006041C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x140065A98 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x14007FA14 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     PostUpdateKeyStateEvent @ 0x140095730 (PostUpdateKeyStateEvent.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x140096178 (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     InitScancodeMap @ 0x14009E260 (InitScancodeMap.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400A5A10 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1400A6144 (-_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z.c)
 *     RIMGetMouseDeviceHardwareId @ 0x1400A7268 (RIMGetMouseDeviceHardwareId.c)
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1400A7F20 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1400A8638 (RIMApiSetValidateDeviceSignature.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1400A8DC0 (ReadPointerDeviceCfgDWORDSetting.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1400B0D94 (RIMSendLatencyMgtDeviceRequest.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400B3D28 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1400B4F78 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1400B5368 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1400B5F6C (-CitpStart@@YAJXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1400B612C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     rimProcessInput @ 0x1400BC820 (rimProcessInput.c)
 *     EtwInitializeAsyncKeyMonitor @ 0x1400C67DC (EtwInitializeAsyncKeyMonitor.c)
 *     RIMGetQDCActivePathsData @ 0x1400C7BC8 (RIMGetQDCActivePathsData.c)
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1400CE8D4 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1400CEA60 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1400CEC70 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     DirectComposition::Memory::AllocateAndClear_1 @ 0x1400CF0C8 (DirectComposition--Memory--AllocateAndClear_1.c)
 *     ?HashTableAllocator@@YAPEAX_KPEAX@Z @ 0x1400E1628 (-HashTableAllocator@@YAPEAX_KPEAX@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E2610 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     xxxUserChangeDisplaySettings @ 0x1400E4890 (xxxUserChangeDisplaySettings.c)
 *     QueuePowerRequest @ 0x1400E98F0 (QueuePowerRequest.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU?$Win32RawOptionalLockedItem@PEAUtagTHREADINFO@@$1?Win32FreePool@@YAXPEAX@Z@@PEAUtagKL@@@Z @ 0x1400F4850 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU-$Win32RawOptionalLockedItem@PEAUtagTHREADIN.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1400F5038 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14010C900 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ??$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z @ 0x14010CE4C (--$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x14010D16C (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x14010E2CC (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     Win32AllocPoolNonPagedZInit @ 0x1401119F0 (Win32AllocPoolNonPagedZInit.c)
 *     ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x140116504 (-GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x14011B4F8 (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 *     GetWindowsDirectoryDevicePath @ 0x14011B7CC (GetWindowsDirectoryDevicePath.c)
 *     ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x14011B944 (-GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RIMSyncWalkRimObjList @ 0x14011D9CC (RIMSyncWalkRimObjList.c)
 *     HMInitializeSecurityDescriptor @ 0x140124158 (HMInitializeSecurityDescriptor.c)
 *     ?AddCapabilityToDescriptor@@YAHPEAXK0@Z @ 0x14012485C (-AddCapabilityToDescriptor@@YAHPEAXK0@Z.c)
 *     HMAllocateObjectSecurity @ 0x1401249FC (HMAllocateObjectSecurity.c)
 *     RIMInitializeDeadzone @ 0x140124D60 (RIMInitializeDeadzone.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x140125418 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     UserPostNKAPCBuffer @ 0x140126740 (UserPostNKAPCBuffer.c)
 *     RIMAllocateHidConfigDesc @ 0x140127788 (RIMAllocateHidConfigDesc.c)
 *     RIMGetDeviceParent @ 0x140127E30 (RIMGetDeviceParent.c)
 *     RIMRetrieveLinkCollection @ 0x140129E5C (RIMRetrieveLinkCollection.c)
 *     RIMCacheAxisChildIndex @ 0x14012A1B4 (RIMCacheAxisChildIndex.c)
 *     RIMGetPropertyCount @ 0x14012A434 (RIMGetPropertyCount.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x14012EFF4 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x140131698 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ?UserCaptureSid@@YAJPEAXDPEAPEAX@Z @ 0x140131C10 (-UserCaptureSid@@YAJPEAXDPEAPEAX@Z.c)
 *     CreateKernelEvent @ 0x140131DB0 (CreateKernelEvent.c)
 *     CreateKernelSemaphore @ 0x140136430 (CreateKernelSemaphore.c)
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1401367C8 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 *     RIMAssignTouchType @ 0x14013B048 (RIMAssignTouchType.c)
 *     RIMGetProductString @ 0x14013B8BC (RIMGetProductString.c)
 *     RIMGetKbdExId @ 0x14013CBD8 (RIMGetKbdExId.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14013F790 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x14014037C (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CActivationObjectManager@@SAJXZ @ 0x140140414 (-Initialize@CActivationObjectManager@@SAJXZ.c)
 *     UserPostNKAPC @ 0x140144300 (UserPostNKAPC.c)
 *     ?Initialize@CInputGlobals@@SAJXZ @ 0x140145D80 (-Initialize@CInputGlobals@@SAJXZ.c)
 *     RIMCheckPressureDefaultSetting @ 0x140147638 (RIMCheckPressureDefaultSetting.c)
 *     RIMIsDeviceExcluded @ 0x14014C940 (RIMIsDeviceExcluded.c)
 *     CHidInput_CreateInstance @ 0x14014E430 (CHidInput_CreateInstance.c)
 *     ?Create@LegacyInputDispatcher@@SAJPEAPEAV1@@Z @ 0x14014F190 (-Create@LegacyInputDispatcher@@SAJPEAPEAV1@@Z.c)
 *     ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x14014F1FC (-InsertAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14014F6E0 (RIMRegisterForInputWithCallbacks.c)
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x140152914 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140152D6C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ @ 0x1401553E8 (-Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x14015691C (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?GetInstance@CContentRects@@CAPEAV1@XZ @ 0x1401587A0 (-GetInstance@CContentRects@@CAPEAV1@XZ.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x140159124 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     RIMAllocKernelMem @ 0x14015B0B0 (RIMAllocKernelMem.c)
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x14015B750 (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017A1BC (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     NtRIMDeviceIoControl @ 0x14017ACF0 (NtRIMDeviceIoControl.c)
 *     RIMOnDisplayStateChange @ 0x14017B684 (RIMOnDisplayStateChange.c)
 *     RIMSetDeviceIdleTimeout @ 0x14017C3B0 (RIMSetDeviceIdleTimeout.c)
 *     RIMAddToActiveDevices @ 0x14017C830 (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x14017CAC0 (RIMGetMaxCountFeatureDetails.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x14017EEEC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x14017F21C (rimStorePointersInHoldingFrame.c)
 *     rimStoreRawDataBlock @ 0x14017F78C (rimStoreRawDataBlock.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x140182918 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140182E00 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140183BB0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140184DFC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?Initialize@CDesktopInputSink@@SAJXZ @ 0x1401890C8 (-Initialize@CDesktopInputSink@@SAJXZ.c)
 *     ?Initialize@CFrameIdGenerator@@SAJXZ @ 0x140189444 (-Initialize@CFrameIdGenerator@@SAJXZ.c)
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 *     ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1401900C8 (-CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     ?CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1401901B0 (-CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     CMouseSensor_CreateInstance @ 0x140198980 (CMouseSensor_CreateInstance.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x140199058 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140199F58 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     RIMGetTouhpadClickForceSensitivityCaps @ 0x14019A684 (RIMGetTouhpadClickForceSensitivityCaps.c)
 *     SendShellClipChanged @ 0x14019ADE0 (SendShellClipChanged.c)
 *     CreatePTPEngine @ 0x14019C264 (CreatePTPEngine.c)
 *     ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x14019CD70 (-PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14019CF00 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     UserRtlAllocMem @ 0x14019EE20 (UserRtlAllocMem.c)
 *     RIMIDEAllocateInjectedInfo @ 0x14019FB00 (RIMIDEAllocateInjectedInfo.c)
 *     ?DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401A4940 (-DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z.c)
 *     ?Initialize@QualityOfService@@YAJXZ @ 0x1401A5348 (-Initialize@QualityOfService@@YAJXZ.c)
 *     ?Initialize@LastWokenThread@@YAJXZ @ 0x1401A72C0 (-Initialize@LastWokenThread@@YAJXZ.c)
 *     CreateKernelTimer @ 0x1401A7690 (CreateKernelTimer.c)
 *     ?Initialize@CoreMessagingKPort@@SAJXZ @ 0x1401A7EC0 (-Initialize@CoreMessagingKPort@@SAJXZ.c)
 *     Win32JobObject::_anonymous_namespace_::GetW32Job @ 0x1401A9E50 (Win32JobObject--_anonymous_namespace_--GetW32Job.c)
 *     ?GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z @ 0x1401A9F80 (-GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1401AB908 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ @ 0x1401B232C (-INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ.c)
 *     UserGetLoadedImageInformation @ 0x1401B35F0 (UserGetLoadedImageInformation.c)
 *     NtUserGetInputContainerId @ 0x1401BAB10 (NtUserGetInputContainerId.c)
 *     UserCreateBaseWindowHandle @ 0x1401BE720 (UserCreateBaseWindowHandle.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 *     NtRIMQueryDevicePath @ 0x1401D4C70 (NtRIMQueryDevicePath.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D5450 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1401D60A0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D65E0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1401D9FE0 (RIMCreatePointerDeviceDeadzone.c)
 *     rimUserMemAllocNodeAlloc @ 0x1401DAA30 (rimUserMemAllocNodeAlloc.c)
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
 *     RIMConfigureDeviceFeedback @ 0x1401DB3F0 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1401DB850 (RIMConfigureTouchpadClickForceSensitivity.c)
 *     RIMGetButtonsSupported @ 0x1401DD200 (RIMGetButtonsSupported.c)
 *     RIMHidGetCaps @ 0x1401DD328 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x1401DD6CC (RIMHidGetPreparsedData.c)
 *     RIMPopulatePointerDevice @ 0x1401DDEA4 (RIMPopulatePointerDevice.c)
 *     rimSetupPalmTelemetry @ 0x1401DE868 (rimSetupPalmTelemetry.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1401DE95C (RIMAddSimulatedPointerDeviceData.c)
 *     RIMAssignPreparsedData @ 0x1401DEC10 (RIMAssignPreparsedData.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 *     RIMExtractPointerPropertyValues @ 0x1401DFFB0 (RIMExtractPointerPropertyValues.c)
 *     RIMGetDeviceButtons @ 0x1401E05C8 (RIMGetDeviceButtons.c)
 *     RIMGetPointerDeviceProperties @ 0x1401E09D0 (RIMGetPointerDeviceProperties.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1401E1114 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1401E1B1C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1401E3074 (RIMAllocateAndLinkHidTLCInfo.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1401E3DC4 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x1401E3FA8 (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1401E6C48 (RIMIDEResetPointerDeviceMaxCount.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1401E7C64 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1401E7F80 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1401EA2B8 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1401EAA68 (-SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1401EBC98 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EC21C (RIMAllocateAsyncInputWorkItem.c)
 *     rimFindOtherQueuedFrames @ 0x1401ED5E8 (rimFindOtherQueuedFrames.c)
 *     rimObsDeliverInputToObserver @ 0x1401EFE74 (rimObsDeliverInputToObserver.c)
 *     rimObsPushInputMessage @ 0x1401F08B0 (rimObsPushInputMessage.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1401F19DC (RIMCmAllocPointerDeviceContacts.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1401F3A34 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F427C (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     _lambda_e1b7d727f4d9425d1205377adb72da73_::operator() @ 0x1401F6400 (_lambda_e1b7d727f4d9425d1205377adb72da73_--operator().c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1401F6D84 (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1401F6DFC (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401F7794 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1401F7FA0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z @ 0x1401F8F00 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401F906C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1401FEA6C (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140205FD0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x14020B3FC (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x14020CB20 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z.c)
 *     ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x14020D280 (-PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x140210670 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140210714 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 *     CKeyboardSensor_CreateInstance @ 0x140210AC0 (CKeyboardSensor_CreateInstance.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x140210D10 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x140210F84 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x140216094 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     InputInitialize @ 0x140218A5C (InputInitialize.c)
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x14021997C (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 *     ?FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PEAPEAVVPTPTouchpad@@@Z @ 0x140219B48 (-FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PE.c)
 *     ?MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA?AUReportDescriptor@1@AEBUtagRECT@@0@Z @ 0x140219C50 (-MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA-AUReportDescriptor@1@AEBUtagRECT@@0@Z.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x14021B2B0 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?CreateInputMessage@CButtonEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x14021C400 (-CreateInputMessage@CButtonEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@.c)
 *     ?CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x14021C470 (-CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AE.c)
 *     ?CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x14021C530 (-CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@A.c)
 *     ?AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z @ 0x14021F600 (-AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z.c)
 *     ?Initialize@CKernelSensorThread@@SAJXZ @ 0x14021FC9C (-Initialize@CKernelSensorThread@@SAJXZ.c)
 *     ?Initialize@CMasterInputThread@@SAJXZ @ 0x14021FD80 (-Initialize@CMasterInputThread@@SAJXZ.c)
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x14022012C (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x140230EE0 (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?InitializeInputGlobals@@YAJXZ @ 0x14023D618 (-InitializeInputGlobals@@YAJXZ.c)
 *     InitializePowerRequestList @ 0x1402E5290 (InitializePowerRequestList.c)
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall Win32AllocPoolZInitImpl(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rdi
  int v7; // eax
  __int64 Pool2; // rbx
  unsigned __int64 *v10; // rax
  _DWORD *v11; // rax
  unsigned __int64 i; // r14
  char v13; // r15
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a3;
  v6 = W32GetUserSessionState() + 72288;
  v7 = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(a1 & 0xFFFFFFFFFFFFFFFDuLL, a2, (unsigned int)v3);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 112));
    return Pool2;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      if ( ((unsigned int)v3 & *(_DWORD *)(v6 + 80)) != (_DWORD)v3 )
        goto LABEL_2;
      v11 = (_DWORD *)(v6 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v6 + 84) )
          goto LABEL_2;
        if ( *v11 == (_DWORD)v3 )
          break;
        ++v11;
      }
      v13 = 0;
      if ( a2 < 0x1000 || (a2 & 0xFFF) != 0 )
      {
        v13 = 1;
        a2 += 16LL;
      }
      Pool2 = ExAllocatePool2(a1 & 0xFFFFFFFFFFFFFFFDuLL, a2, (unsigned int)v3);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v13 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v6,
                                  Pool2,
                                  i,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v6,
                                     Pool2,
                                     i,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v6,
          v3)
    || a2 + 16 < a2 )
  {
    return 0LL;
  }
  v10 = (unsigned __int64 *)ExAllocatePool2(a1 & 0xFFFFFFFFFFFFFFFDuLL, a2 + 16, (unsigned int)v3);
  Pool2 = (__int64)v10;
  if ( !v10
    || (_InterlockedIncrement64((volatile signed __int64 *)(v6 + 112)),
        *v10 = v3,
        Pool2 = (__int64)(v10 + 2),
        v10 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v6 + 8),
      (const void *)v3);
  }
  return Pool2;
}
