/*
 * XREFs of Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline @ 0x1405CF8A4
 * Callers:
 *     PopDiagTraceBatteryCountChange @ 0x1407498B0 (PopDiagTraceBatteryCountChange.c)
 *     SshSessionManagerTraceBatteryCountChange @ 0x140756BA8 (SshSessionManagerTraceBatteryCountChange.c)
 *     SshSessionManagerTraceCsExitReason @ 0x140756E28 (SshSessionManagerTraceCsExitReason.c)
 *     SshSessionManagerTraceSystemStop @ 0x1407577A8 (SshSessionManagerTraceSystemStop.c)
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x140AB9E2C (SshSessionManagerTraceCsEnterReason.c)
 *     PopDiagTraceAcDcStateChange @ 0x140AC199C (PopDiagTraceAcDcStateChange.c)
 *     PopDiagTracePreSleepNotification @ 0x140AC1AA0 (PopDiagTracePreSleepNotification.c)
 *     SshSessionManagerTraceAcDcStateChange @ 0x140AC47AC (SshSessionManagerTraceAcDcStateChange.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x140AC4860 (SshSessionManagerTracePreSleepNotification.c)
 *     PopDiagTraceGracefulShutdown @ 0x140B4FAD4 (PopDiagTraceGracefulShutdown.c)
 * Callees:
 *     Feature_Servicing_ExtMonStatusSPR__private_IsEnabledFallback @ 0x1405CF8DC (Feature_Servicing_ExtMonStatusSPR__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_ExtMonStatusSPR__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ExtMonStatusSPR__private_featureState & 1;
  else
    return Feature_Servicing_ExtMonStatusSPR__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ExtMonStatusSPR__private_featureState,
             3LL);
}
