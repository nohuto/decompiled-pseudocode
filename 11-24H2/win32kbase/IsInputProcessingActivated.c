/*
 * XREFs of IsInputProcessingActivated @ 0x140048E30
 * Callers:
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x140048CB0 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x140060FA8 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     NtMITGetCursorUpdateHandle @ 0x1400BB240 (NtMITGetCursorUpdateHandle.c)
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1400BB2A0 (NtMITSetKeyboardInputRoutingPolicy.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14020B7F4 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x14020D128 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     SetKeyboardInputRoutingPolicy @ 0x140213370 (SetKeyboardInputRoutingPolicy.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021EC54 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInputProcessingActivated(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 18808);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1 + 8, 0LL);
  v2 = v1 + 8;
  LOBYTE(v1) = *(_DWORD *)(v1 + 16) == 2;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v1;
}
