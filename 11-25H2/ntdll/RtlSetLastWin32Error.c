/*
 * XREFs of RtlSetLastWin32Error @ 0x180046B80
 * Callers:
 *     SbSelectProcedure @ 0x180038D30 (SbSelectProcedure.c)
 *     TppSetTimer @ 0x18003EB00 (TppSetTimer.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180042A00 (RtlpWnfWalkUserSubscriptionList.c)
 *     EtwEventRegister @ 0x1800455F0 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 *     EtwEventActivityIdControl @ 0x180046A50 (EtwEventActivityIdControl.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006727C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     SbObtainTraceHandle @ 0x1800BE760 (SbObtainTraceHandle.c)
 *     EtwpSetProviderTraits @ 0x1800E9BD0 (EtwpSetProviderTraits.c)
 *     EtwRegisterTraceGuidsW @ 0x1800EB570 (EtwRegisterTraceGuidsW.c)
 *     EtwGetTraceLoggerHandle @ 0x1800F3700 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x1800F3770 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800F37C0 (EtwGetTraceEnableFlags.c)
 *     EtwUnregisterTraceGuids @ 0x1800F4C30 (EtwUnregisterTraceGuids.c)
 *     EvtIntReportEventWorker @ 0x1800F5D70 (EvtIntReportEventWorker.c)
 *     EtwpTrackProviderBinary @ 0x1800F8358 (EtwpTrackProviderBinary.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800FD880 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwRegisterSecurityProvider @ 0x18015D3E0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18015D438 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x18015D530 (EtwCreateTraceInstanceId.c)
 * Callees:
 *     RtlpLogSetLastWin32ErrorEvent @ 0x180147B54 (RtlpLogSetLastWin32ErrorEvent.c)
 */

void __cdecl RtlSetLastWin32Error(LONG Win32Error)
{
  struct _TEB *v1; // rax

  v1 = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && Win32Error == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( v1->LastErrorValue != Win32Error )
  {
    v1->LastErrorValue = Win32Error;
    if ( Win32Error )
    {
      if ( g_isErrorOriginProviderEnabled )
      {
        if ( Win32Error != 997 )
          RtlpLogSetLastWin32ErrorEvent(Win32Error);
      }
    }
  }
}
