/*
 * XREFs of DynamicLock_Release @ 0x14000C970
 * Callers:
 *     Command_HandleCommandRingStoppedEvent @ 0x14000A09C (Command_HandleCommandRingStoppedEvent.c)
 *     RootHub_DetectLinkErrorState @ 0x14000AEF8 (RootHub_DetectLinkErrorState.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x14000B2A0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x14000B478 (RootHub_DetectAndAcknowledgePortResume.c)
 *     Command_HandleCommandCompletionEvent @ 0x14000B740 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000C924 (RootHub_ReleaseReadModifyWriteLock.c)
 *     Controller_IsHandlePresentInCollection @ 0x140014248 (Controller_IsHandlePresentInCollection.c)
 *     Controller_Start @ 0x14001B1F0 (Controller_Start.c)
 *     Command_ControllerResetPostReset @ 0x14003CFA4 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x14003D160 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x14003D22C (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D690 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x14003F990 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x14003FB5C (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x14003FC38 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1400402A4 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 *     Controller_StopTimeTrackingForHandle @ 0x14004211C (Controller_StopTimeTrackingForHandle.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x140042A40 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140042CD0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 * Callees:
 *     WPP_RECORDER_SF_sds @ 0x140045A8C (WPP_RECORDER_SF_sds.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DynamicLock_Release(__int64 a1)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r9d

  if ( *(_DWORD *)a1 != 1 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 2536))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 8));
  if ( KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v5);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 8));
}
