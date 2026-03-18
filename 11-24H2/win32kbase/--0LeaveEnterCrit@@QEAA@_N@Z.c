/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x140090AE4 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxCreateSystemThreads @ 0x140091CD0 (xxxCreateSystemThreads.c)
 *     xxxSendWinlogonPowerMessage @ 0x140092060 (xxxSendWinlogonPowerMessage.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140092440 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x140092850 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x140092B70 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D33A8 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     PowerOffMonitor @ 0x1400E4300 (PowerOffMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ProcessKeyboardInputWorker @ 0x1400FA4E4 (ProcessKeyboardInputWorker.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x14015D194 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017A4CC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401ABAF0 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401AE764 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     PowerResumeSuspendEvent @ 0x1401AEDC0 (PowerResumeSuspendEvent.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D5450 (RIMAddInjectionDeviceOfType.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1401F5AF0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F5C60 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F5DA0 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x14020C970 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140210714 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x1402168C4 (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216DA0 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     IVWorkerThread @ 0x140217C48 (IVWorkerThread.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x14021CA78 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this, char a2)
{
  __int64 UserSessionState; // rax
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax

  *(_BYTE *)this = 0;
  if ( a2 )
  {
    UserSessionState = W32GetUserSessionState(this);
    if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
    {
      *(_BYTE *)this = 1;
      if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      {
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
        v6 = W32GetUserSessionState(v5);
        ExReleaseFastResource(*(_QWORD *)(v6 + 16), CurrentThreadWin32Thread + 176);
        KeLeaveCriticalRegion();
      }
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return this;
}
