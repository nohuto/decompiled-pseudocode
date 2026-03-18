/*
 * XREFs of ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408
 * Callers:
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x14012A4D8 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x14012AB84 (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x14012ABF4 (-DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     NtUserAcquireInteractiveControlBackgroundAccess @ 0x14021DDC0 (NtUserAcquireInteractiveControlBackgroundAccess.c)
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     NtUserSetInteractiveControlFocus @ 0x1402465B0 (NtUserSetInteractiveControlFocus.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x14026342C (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     EditionRimDeviceReadNotification @ 0x140270070 (EditionRimDeviceReadNotification.c)
 *     NtUserGetInteractiveControlDeviceInfo @ 0x140296380 (NtUserGetInteractiveControlDeviceInfo.c)
 *     NtUserGetInteractiveControlInfo @ 0x140296490 (NtUserGetInteractiveControlInfo.c)
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1402965B0 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 *     NtUserInteractiveControlQueryUsage @ 0x1402994D0 (NtUserInteractiveControlQueryUsage.c)
 *     NtUserSendInteractiveControlHapticsReport @ 0x14029C370 (NtUserSendInteractiveControlHapticsReport.c)
 *     NtUserSetInteractiveCtrlRotationAngle @ 0x14029DB80 (NtUserSetInteractiveCtrlRotationAngle.c)
 *     ?OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DB238 (-OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnInteractiveControlDeviceRemoved@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DB260 (-OnInteractiveControlDeviceRemoved@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     _lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_ @ 0x1402EB660 (_lambda_947f1e7f3cd2cfe4f04f18e4940370e8_--_lambda_invoker_cdecl_.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1402EB86C (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402EBC7C (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402EBED8 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402EC2D0 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402EC544 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1402EC5E4 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1402EC7A4 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1402EC894 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1402EE668 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1402EE8FC (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1402EEC30 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1402EECB0 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402EF118 (-HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z.c)
 * Callees:
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x14012B558 (--0InteractiveControlManager@@AEAA@XZ.c)
 */

struct InteractiveControlManager *__fastcall InteractiveControlManager::Instance(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  InteractiveControlManager *v3; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_QWORD *)(UserSessionState + 17120) )
  {
    v3 = (InteractiveControlManager *)Win32AllocPoolZInit(320LL, 1819440195LL);
    if ( v3 )
      *(_QWORD *)(UserSessionState + 17120) = InteractiveControlManager::InteractiveControlManager(v3);
  }
  return *(struct InteractiveControlManager **)(UserSessionState + 17120);
}
