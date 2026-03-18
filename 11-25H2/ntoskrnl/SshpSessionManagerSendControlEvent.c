/*
 * XREFs of SshpSessionManagerSendControlEvent @ 0x140A6DF80
 * Callers:
 *     SshSessionManagerTraceAcDcStateChangeV1 @ 0x140756AFC (SshSessionManagerTraceAcDcStateChangeV1.c)
 *     SshSessionManagerTraceBatteryCountChange @ 0x140756BA8 (SshSessionManagerTraceBatteryCountChange.c)
 *     SshSessionManagerTraceBatteryCountChangeV1 @ 0x140756C5C (SshSessionManagerTraceBatteryCountChangeV1.c)
 *     SshSessionManagerTraceCsEnterReasonV1 @ 0x140756D08 (SshSessionManagerTraceCsEnterReasonV1.c)
 *     SshSessionManagerTraceCsExitReason @ 0x140756E28 (SshSessionManagerTraceCsExitReason.c)
 *     SshSessionManagerTraceCsExitReasonV1 @ 0x1407570F8 (SshSessionManagerTraceCsExitReasonV1.c)
 *     SshSessionManagerTraceDirtyTransition @ 0x1407573BC (SshSessionManagerTraceDirtyTransition.c)
 *     SshSessionManagerTracePreSleepNotificationV1 @ 0x1407575A4 (SshSessionManagerTracePreSleepNotificationV1.c)
 *     SshSessionManagerTraceShutdownAction @ 0x140757724 (SshSessionManagerTraceShutdownAction.c)
 *     SshSessionManagerTraceSystemStop @ 0x1407577A8 (SshSessionManagerTraceSystemStop.c)
 *     SshSessionManagerTraceSystemStopV1 @ 0x140757844 (SshSessionManagerTraceSystemStopV1.c)
 *     SshpSessionManagerTraceSystemStart @ 0x140757C4C (SshpSessionManagerTraceSystemStart.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x140AB9E2C (SshSessionManagerTraceCsEnterReason.c)
 *     SshSessionManagerTraceAcDcStateChange @ 0x140AC47AC (SshSessionManagerTraceAcDcStateChange.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x140AC4860 (SshSessionManagerTracePreSleepNotification.c)
 * Callees:
 *     Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage @ 0x1404F8560 (Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A6DFC0 (SshpSessionManagerSendControlEventSlimEtl.c)
 */

__int64 __fastcall SshpSessionManagerSendControlEvent(__int64 a1, unsigned int a2, __int64 a3)
{
  Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage();
  return SshpSessionManagerSendControlEventSlimEtl(a1, a2, a3);
}
