/*
 * XREFs of isChildPartition @ 0x1400525E0
 * Callers:
 *     IsKeyboardIVEnabled @ 0x14004FB3C (IsKeyboardIVEnabled.c)
 *     IsPTPIVEnabled @ 0x14004FBE8 (IsPTPIVEnabled.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x140050448 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     IsMouseIVEnabled @ 0x140050CD0 (IsMouseIVEnabled.c)
 *     AllocQueue @ 0x140052060 (AllocQueue.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140052364 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x140052770 (-GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_.c)
 *     ?SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140052A40 (-SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TI.c)
 *     ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140052DEC (-QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1400536A0 (RawInputManagerDeviceObjectCreate.c)
 *     RIMHandlePowerDeviceArrival @ 0x14005432C (RIMHandlePowerDeviceArrival.c)
 *     RIMHandlePowerDeviceRemoval @ 0x140054580 (RIMHandlePowerDeviceRemoval.c)
 *     ProcessKeyboardInputWorker @ 0x1400FA4E4 (ProcessKeyboardInputWorker.c)
 *     RawInputManagerObjectCreate @ 0x14013323C (RawInputManagerObjectCreate.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x14014883C (--0CTouchProcessor@@QEAA@XZ.c)
 *     RIMIDECreateDeviceInstancePath @ 0x14014B610 (RIMIDECreateDeviceInstancePath.c)
 *     RIMChildInputTypeIsVirtualized @ 0x14014BC20 (RIMChildInputTypeIsVirtualized.c)
 *     ?Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ @ 0x1401553E8 (-Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ.c)
 *     rimQueueCompleteFrame @ 0x140180264 (rimQueueCompleteFrame.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140183BB0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1401853C0 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x140188E00 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x14018D338 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?UnInitialize@RootSynthesizedMouseList@InputVirtualization@@SAXXZ @ 0x14019DE44 (-UnInitialize@RootSynthesizedMouseList@InputVirtualization@@SAXXZ.c)
 *     NtUserGetInputContainerId @ 0x1401BAB10 (NtUserGetInputContainerId.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E23E4 (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401F906C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14020B7F4 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x14020C970 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     IsPenIVEnabled @ 0x140217E98 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x140217EF0 (IsTouchIVEnabled.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021B18C (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x14021B2B0 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x14021B4FC (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 *     ?sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x14021B540 (-sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 */

bool __fastcall isChildPartition(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // di
  int v4; // ebx
  __int64 v5; // rcx

  v2 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1) + 19504) )
  {
    v4 = *(_DWORD *)(W32GetUserSessionState(v1) + 19508);
    if ( (unsigned int)W32GetCurrentWin32kSessionId() == v4 )
      return *(_DWORD *)(W32GetUserSessionState(v5) + 19560) == 0;
  }
  return v2;
}
