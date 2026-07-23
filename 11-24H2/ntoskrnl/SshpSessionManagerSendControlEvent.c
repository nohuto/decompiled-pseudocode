/*
 * XREFs of SshpSessionManagerSendControlEvent @ 0x140A69620
 * Callers:
 *     SshSessionManagerTraceBatteryCountChange @ 0x1407664DC (SshSessionManagerTraceBatteryCountChange.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x1407665B4 (SshSessionManagerTraceCsEnterReason.c)
 *     SshSessionManagerTraceCsExitReason @ 0x1407666F8 (SshSessionManagerTraceCsExitReason.c)
 *     SshSessionManagerTraceDirtyTransition @ 0x1407669D0 (SshSessionManagerTraceDirtyTransition.c)
 *     SshSessionManagerTraceShutdownAction @ 0x140766BB8 (SshSessionManagerTraceShutdownAction.c)
 *     SshSessionManagerTraceSystemStop @ 0x140766C3C (SshSessionManagerTraceSystemStop.c)
 *     SshpSessionManagerTraceAcDcStateChangeV1 @ 0x14076706C (SshpSessionManagerTraceAcDcStateChangeV1.c)
 *     SshpSessionManagerTraceBatteryCountChangeV1 @ 0x140767128 (SshpSessionManagerTraceBatteryCountChangeV1.c)
 *     SshpSessionManagerTraceCsEnterReasonV1 @ 0x1407671E4 (SshpSessionManagerTraceCsEnterReasonV1.c)
 *     SshpSessionManagerTraceCsExitReasonV1 @ 0x14076731C (SshpSessionManagerTraceCsExitReasonV1.c)
 *     SshpSessionManagerTracePreSleepNotificationV1 @ 0x1407675F0 (SshpSessionManagerTracePreSleepNotificationV1.c)
 *     SshpSessionManagerTraceSystemStart @ 0x140767784 (SshpSessionManagerTraceSystemStart.c)
 *     SshpSessionManagerTraceSystemStopV1 @ 0x1407677A8 (SshpSessionManagerTraceSystemStopV1.c)
 *     SshSessionManagerTraceAcDcStateChange @ 0x140AC9170 (SshSessionManagerTraceAcDcStateChange.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x140AC9248 (SshSessionManagerTracePreSleepNotification.c)
 * Callees:
 *     Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage @ 0x1404F82F0 (Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A69660 (SshpSessionManagerSendControlEventSlimEtl.c)
 */

__int64 __fastcall SshpSessionManagerSendControlEvent(__int64 a1, unsigned int a2, __int64 a3)
{
  Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage();
  return SshpSessionManagerSendControlEventSlimEtl(a1, a2, a3);
}
