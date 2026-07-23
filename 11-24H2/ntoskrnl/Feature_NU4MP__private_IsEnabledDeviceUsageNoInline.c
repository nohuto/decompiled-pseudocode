/*
 * XREFs of Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4
 * Callers:
 *     PopDiagTraceBatteryCountChange @ 0x140753CA0 (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceExternalDisplayState @ 0x1407546A0 (PopDiagTraceExternalDisplayState.c)
 *     SshSessionManagerTraceBatteryCountChange @ 0x1407664DC (SshSessionManagerTraceBatteryCountChange.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x1407665B4 (SshSessionManagerTraceCsEnterReason.c)
 *     SshSessionManagerTraceCsExitReason @ 0x1407666F8 (SshSessionManagerTraceCsExitReason.c)
 *     SshSessionManagerTraceSystemStop @ 0x140766C3C (SshSessionManagerTraceSystemStop.c)
 *     PopIsInputSuppressionEngaged @ 0x140A3AD68 (PopIsInputSuppressionEngaged.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 *     PopDiagTraceAcDcStateChange @ 0x140AC4C34 (PopDiagTraceAcDcStateChange.c)
 *     PopDiagTracePreSleepNotification @ 0x140AC4D5C (PopDiagTracePreSleepNotification.c)
 *     PopEvaluateInputSuppressionAction @ 0x140AC5570 (PopEvaluateInputSuppressionAction.c)
 *     PopUpdateExternalDisplayState @ 0x140AC8ECC (PopUpdateExternalDisplayState.c)
 *     SshSessionManagerTraceAcDcStateChange @ 0x140AC9170 (SshSessionManagerTraceAcDcStateChange.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x140AC9248 (SshSessionManagerTracePreSleepNotification.c)
 *     PopDiagTraceGracefulShutdown @ 0x140B61C94 (PopDiagTraceGracefulShutdown.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledFallback @ 0x1405CA41C (Feature_NU4MP__private_IsEnabledFallback.c)
 */

__int64 Feature_NU4MP__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NU4MP__private_featureState & 0x10) != 0 )
    return Feature_NU4MP__private_featureState & 1;
  else
    return Feature_NU4MP__private_IsEnabledFallback((unsigned int)Feature_NU4MP__private_featureState, 3LL);
}
