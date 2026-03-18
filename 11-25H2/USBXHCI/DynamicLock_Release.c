/*
 * XREFs of DynamicLock_Release @ 0x140008E60
 * Callers:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     Command_HandleCommandCompletionEvent @ 0x140008884 (Command_HandleCommandCompletionEvent.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x140008E18 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008F4C (RootHub_DetectAndAcknowledgePortResume.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x140009D50 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     RootHub_DetectLinkErrorState @ 0x14000A288 (RootHub_DetectLinkErrorState.c)
 *     Controller_Start @ 0x14000B894 (Controller_Start.c)
 *     Controller_IsHandlePresentInCollection @ 0x140032728 (Controller_IsHandlePresentInCollection.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1400367E8 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_ControllerResetPostReset @ 0x14003D0B4 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x14003D270 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x14003D33C (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D7A0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x140040040 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x14004020C (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1400402E8 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x140040954 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1400425C4 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x140042EF0 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140043180 (Controller_UcxEvtStartTrackingForTimeSync.c)
 * Callees:
 *     WPP_RECORDER_SF_sds @ 0x14004577C (WPP_RECORDER_SF_sds.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
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
