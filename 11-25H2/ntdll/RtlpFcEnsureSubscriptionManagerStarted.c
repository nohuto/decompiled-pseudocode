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
  NTSTATUS started; // ebx

  started = RtlRunOnceBeginInitialize(&stru_1801D5DD0, 0, 0LL);
  if ( started )
  {
    started = RtlpFcStartSubscriptionManager();
    RtlRunOnceComplete(&stru_1801D5DD0, (started >> 31) & 4, 0LL);
  }
  return (unsigned int)started;
}
