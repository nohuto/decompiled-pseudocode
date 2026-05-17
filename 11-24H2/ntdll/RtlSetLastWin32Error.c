/*
 * XREFs of RtlSetLastWin32Error @ 0x18001C5D0
 * Callers:
 *     EtwEventActivityIdControl @ 0x18001C4A0 (EtwEventActivityIdControl.c)
 *     EtwNotificationUnregister @ 0x18001D140 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x18001D400 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x18001D450 (EtwNotificationRegister.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180021030 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppSetTimer @ 0x18006B410 (TppSetTimer.c)
 *     SbSelectProcedure @ 0x1800A9EF0 (SbSelectProcedure.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800ADB9C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     SbObtainTraceHandle @ 0x1800B8D90 (SbObtainTraceHandle.c)
 *     EtwpSetProviderTraits @ 0x1800E8690 (EtwpSetProviderTraits.c)
 *     EtwRegisterTraceGuidsW @ 0x1800EA1B0 (EtwRegisterTraceGuidsW.c)
 *     EtwGetTraceLoggerHandle @ 0x1800F1B90 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x1800F1C00 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800F1C50 (EtwGetTraceEnableFlags.c)
 *     EtwUnregisterTraceGuids @ 0x1800F30C0 (EtwUnregisterTraceGuids.c)
 *     EvtIntReportEventWorker @ 0x1800F4050 (EvtIntReportEventWorker.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800FB650 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwpTrackProviderBinary @ 0x18011A13C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18015BE30 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18015BE88 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x18015BFD0 (EtwCreateTraceInstanceId.c)
 * Callees:
 *     RtlpLogSetLastWin32ErrorEvent @ 0x1801465A4 (RtlpLogSetLastWin32ErrorEvent.c)
 */

struct _TEB *__fastcall RtlSetLastWin32Error(unsigned int a1)
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && a1 == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( result->LastErrorValue != a1 )
  {
    result->LastErrorValue = a1;
    if ( a1 )
    {
      if ( g_isErrorOriginProviderEnabled )
      {
        if ( a1 != 997 )
          return (struct _TEB *)RtlpLogSetLastWin32ErrorEvent();
      }
    }
  }
  return result;
}
