/*
 * XREFs of RtlpFcEnsureSubscriptionManagerStarted @ 0x18000322C
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180003190 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlpFcStartSubscriptionManager @ 0x18000336C (RtlpFcStartSubscriptionManager.c)
 *     RtlRunOnceComplete @ 0x180004290 (RtlRunOnceComplete.c)
 *     RtlRunOnceBeginInitialize @ 0x18008E110 (RtlRunOnceBeginInitialize.c)
 */

__int64 RtlpFcEnsureSubscriptionManagerStarted()
{
  int started; // ebx

  started = RtlRunOnceBeginInitialize(&qword_1801D5DD0, 0LL, 0LL);
  if ( started )
  {
    started = RtlpFcStartSubscriptionManager();
    RtlRunOnceComplete(&qword_1801D5DD0, (started >> 31) & 4);
  }
  return (unsigned int)started;
}
