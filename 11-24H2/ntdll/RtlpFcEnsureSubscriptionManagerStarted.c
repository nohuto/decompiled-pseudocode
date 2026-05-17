/*
 * XREFs of RtlpFcEnsureSubscriptionManagerStarted @ 0x180097BBC
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180097B20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18003A720 (RtlRunOnceBeginInitialize.c)
 *     RtlpFcStartSubscriptionManager @ 0x180097CFC (RtlpFcStartSubscriptionManager.c)
 *     RtlRunOnceComplete @ 0x180098C20 (RtlRunOnceComplete.c)
 */

__int64 RtlpFcEnsureSubscriptionManagerStarted()
{
  int started; // ebx

  started = RtlRunOnceBeginInitialize(&qword_1801D3D70, 0, 0LL);
  if ( started )
  {
    started = RtlpFcStartSubscriptionManager();
    RtlRunOnceComplete(&qword_1801D3D70, (started >> 31) & 4, 0LL);
  }
  return (unsigned int)started;
}
