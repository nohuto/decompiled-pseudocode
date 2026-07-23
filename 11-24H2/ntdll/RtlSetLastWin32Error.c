/*
 * XREFs of RtlSetLastWin32Error @ 0x180048FD0
 * Callers:
 *     SbSelectProcedure @ 0x18000B080 (SbSelectProcedure.c)
 *     EtwEventActivityIdControl @ 0x180048EA0 (EtwEventActivityIdControl.c)
 *     EtwNotificationUnregister @ 0x180049B40 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x180049E00 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x180049E50 (EtwNotificationRegister.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DA30 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppSetTimer @ 0x180087CF0 (TppSetTimer.c)
 *     SbObtainTraceHandle @ 0x1800A2E50 (SbObtainTraceHandle.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800E3360 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwpSetProviderTraits @ 0x1800E3D80 (EtwpSetProviderTraits.c)
 *     EtwRegisterTraceGuidsW @ 0x1800E5940 (EtwRegisterTraceGuidsW.c)
 *     EtwGetTraceLoggerHandle @ 0x1800EC810 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x1800EC880 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800EC8D0 (EtwGetTraceEnableFlags.c)
 *     EtwUnregisterTraceGuids @ 0x1800ED9B0 (EtwUnregisterTraceGuids.c)
 *     EvtIntReportEventWorker @ 0x1800EE760 (EvtIntReportEventWorker.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800F6580 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwpTrackProviderBinary @ 0x18011836C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18015A1F0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18015A248 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x18015A390 (EtwCreateTraceInstanceId.c)
 * Callees:
 *     RtlpLogSetLastWin32ErrorEvent @ 0x180144954 (RtlpLogSetLastWin32ErrorEvent.c)
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
          RtlpLogSetLastWin32ErrorEvent();
      }
    }
  }
}
