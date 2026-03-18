/*
 * XREFs of SshpSessionManagerSendControlEvent @ 0x140A70190
 * Callers:
 *     SshSessionManagerTraceBatteryCountChange @ 0x140766B0C (SshSessionManagerTraceBatteryCountChange.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x140766BB8 (SshSessionManagerTraceCsEnterReason.c)
 *     SshSessionManagerTraceCsExitReason @ 0x140766CD8 (SshSessionManagerTraceCsExitReason.c)
 *     SshSessionManagerTraceDirtyTransition @ 0x140766F9C (SshSessionManagerTraceDirtyTransition.c)
 *     SshSessionManagerTraceShutdownAction @ 0x140767184 (SshSessionManagerTraceShutdownAction.c)
 *     SshSessionManagerTraceSystemStop @ 0x140767208 (SshSessionManagerTraceSystemStop.c)
 *     SshpSessionManagerTraceSystemStart @ 0x14076760C (SshpSessionManagerTraceSystemStart.c)
 *     SshSessionManagerTraceAcDcStateChange @ 0x140ACB560 (SshSessionManagerTraceAcDcStateChange.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x140ACB60C (SshSessionManagerTracePreSleepNotification.c)
 * Callees:
 *     Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage @ 0x1404FAA10 (Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A701D0 (SshpSessionManagerSendControlEventSlimEtl.c)
 */

__int64 __fastcall SshpSessionManagerSendControlEvent(__int64 a1, unsigned int a2, __int64 a3)
{
  Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage();
  return SshpSessionManagerSendControlEventSlimEtl(a1, a2, a3);
}
