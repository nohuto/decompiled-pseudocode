/*
 * XREFs of RtlpFcEnsureSubscriptionManagerStarted @ 0x18002CA0C
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18002C970 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18001A9A0 (RtlRunOnceBeginInitialize.c)
 *     RtlpFcStartSubscriptionManager @ 0x18002CB4C (RtlpFcStartSubscriptionManager.c)
 *     RtlRunOnceComplete @ 0x18002DA70 (RtlRunOnceComplete.c)
 */

__int64 RtlpFcEnsureSubscriptionManagerStarted()
{
  NTSTATUS started; // ebx

  started = RtlRunOnceBeginInitialize(&stru_1801D2D70, 0, 0LL);
  if ( started )
  {
    started = RtlpFcStartSubscriptionManager();
    RtlRunOnceComplete(&stru_1801D2D70, (started >> 31) & 4, 0LL);
  }
  return (unsigned int)started;
}
