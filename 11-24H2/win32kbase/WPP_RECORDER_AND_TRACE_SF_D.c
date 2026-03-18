/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560
 * Callers:
 *     rimSignalReadComplete @ 0x14005D0F0 (rimSignalReadComplete.c)
 *     xxxInternalToUnicode @ 0x140097BA0 (xxxInternalToUnicode.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400A5A10 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     ?_VerifyTHQBlob@@YAHGGPEAE0@Z @ 0x1400A5DAC (-_VerifyTHQBlob@@YAHGGPEAE0@Z.c)
 *     ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1400A6144 (-_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z.c)
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400A6A4C (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1400A6D28 (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1400A7F20 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1400A8638 (RIMApiSetValidateDeviceSignature.c)
 *     rimExtractPointerDeviceUsages @ 0x1400AE898 (rimExtractPointerDeviceUsages.c)
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400BFA00 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D4090 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1400D4370 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     ProcessKeyboardInputWorker @ 0x1400FA4E4 (ProcessKeyboardInputWorker.c)
 *     NtUserInjectGenericHidInput @ 0x14011CB70 (NtUserInjectGenericHidInput.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMAllocateHidConfigDesc @ 0x140127788 (RIMAllocateHidConfigDesc.c)
 *     RIMIDEValidateMouseInputStruct @ 0x14012D5B0 (RIMIDEValidateMouseInputStruct.c)
 *     NtUserInjectDeviceInput @ 0x140139390 (NtUserInjectDeviceInput.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14013F790 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     RIMIDECreateDeviceInstancePath @ 0x14014B610 (RIMIDECreateDeviceInstancePath.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14014F6E0 (RIMRegisterForInputWithCallbacks.c)
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x140164430 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxUserProcessCallout @ 0x140167490 (xxxUserProcessCallout.c)
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 *     NtUserInjectKeyboardInput @ 0x14016E210 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x14016EBE0 (NtUserInjectMouseInput.c)
 *     NtUserReportInertia @ 0x14016FA40 (NtUserReportInertia.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x140180484 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140183BB0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140184DFC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x14019B144 (RIMIDEValidateKeybdInputStruct.c)
 *     ?SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401A369C (-SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401A521C (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 *     NtMapVisualRelativePoints @ 0x1401AB4D0 (NtMapVisualRelativePoints.c)
 *     ?DeboostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401AC0F4 (-DeboostAllProcesses@ForegroundBoost@@YAXXZ.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401AC8F8 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy @ 0x1401ACAE4 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClassWithPolicy.c)
 *     ?SyncBoostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401ACC64 (-SyncBoostAllProcesses@ForegroundBoost@@YAXXZ.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401B9930 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInjectPointerInput @ 0x1401BB770 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1401BC710 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401BD470 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     NtRIMAddInputObserver @ 0x1401D4670 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1401D5220 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1401EE1CC (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     rimObsAddInputObserver @ 0x1401EEEE4 (rimObsAddInputObserver.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401F906C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1402102D8 (-KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_D(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+90h] [rbp+48h] BYREF

  va_start(va, a8);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               a8,
               a7,
               va,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, a5, a6, a8, v11, va, 4LL, 0LL);
  }
  return result;
}
