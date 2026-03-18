/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005081C (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x140060938 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     UserKSTWait @ 0x1400BB4AC (UserKSTWait.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6DC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1400EB910 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     HandleMITWakeSignal @ 0x1400EFF98 (HandleMITWakeSignal.c)
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140109410 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     NtUserInjectGenericHidInput @ 0x14011CB70 (NtUserInjectGenericHidInput.c)
 *     NtUserDownlevelTouchpad @ 0x140121600 (NtUserDownlevelTouchpad.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14012E3E0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     NtUserInjectDeviceInput @ 0x140139390 (NtUserInjectDeviceInput.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x140148E60 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     NtUserInjectKeyboardInput @ 0x14016E210 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x14016EBE0 (NtUserInjectMouseInput.c)
 *     rimInputApc @ 0x14017F8E0 (rimInputApc.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1401853C0 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x140187370 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x140189330 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 *     InvokeMouseCursorPositionCallout @ 0x140189720 (InvokeMouseCursorPositionCallout.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x14018D338 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ApiSetClientCallDitThread @ 0x140191210 (ApiSetClientCallDitThread.c)
 *     NtMITSynthesizeMouseInput @ 0x1401B8CC0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401B8EC0 (NtMITSynthesizeTouchInput.c)
 *     NtUserInjectPointerInput @ 0x1401BB770 (NtUserInjectPointerInput.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x140204F50 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x14020CDA0 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x14020F380 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ @ 0x14020F3E0 (-OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x14020F420 (-OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x14020F470 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x14020F5D0 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021EC54 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14021F008 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1400626B8 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        InputTraceLogging::ThreadLockedPerfRegion *this)
{
  __int64 v1; // rdi

  if ( *(_QWORD *)this )
  {
    v1 = *(_QWORD *)this;
    *((_QWORD *)PtiCurrent() + 48) = *(_QWORD *)(v1 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(this);
  }
}
